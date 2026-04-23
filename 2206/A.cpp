#include <bits/stdc++.h>
using namespace std;

// Wrapper for the interactive query
bool query(int i, int j) {
    if (i == j) return false;
    cout << "query " << i << " " << j << endl;
    string res;
    if (!(cin >> res)) exit(0);
    return res == "first";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> p;
    p.push_back(n);

    vector<int> rank(n + 1, 0);

    for (int k = n - 1; k >= 1; --k) {
 
        vector<int> splits;
        splits.push_back(0); 
        for (int i = 0; i < (int)p.size() - 1; ++i) {
            int curr = p[i];
            int next = p[i + 1];
          
            if (rank[curr + 1] > rank[next + 1]) {
                splits.push_back(i + 1);
            }
        }

       
        int left = 0, right = (int)splits.size() - 1;
        int block_idx = splits.size();

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (query(k, p[splits[mid]])) {
                block_idx = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
       
        int search_l = (block_idx == 0) ? 0 : splits[block_idx - 1];
        int search_r = (block_idx == (int)splits.size()) ? (int)p.size() : splits[block_idx];

        int insert_pos = search_r;
        left = search_l;
        right = search_r - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (query(k, p[mid])) {
                insert_pos = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        p.insert(p.begin() + insert_pos, k);

        for (int i = 0; i < (int)p.size(); ++i) {
            rank[p[i]] = i;
        }
    }

    cout << "answer";
    for (int i = 0; i < n; ++i) {
        cout << " " << p[i];
    }
    cout << endl;

    return 0;
}
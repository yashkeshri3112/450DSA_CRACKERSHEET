#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        vector<int> result;
        int i = 0, j = 0;

        while (i < a.size() || j < b.size()) {
            int val;
            if (j == b.size() || (i < a.size() && a[i] <= b[j])) {
                val = a[i++];
            } else {
                val = b[j++];
            }

            if (result.empty() || result.back() != val) {
                result.push_back(val);
            }
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Example input arrays
    vector<int> a = {1, 2, 4, 5, 6};
    vector<int> b = {2, 3, 5, 7};

    vector<int> unionResult = sol.findUnion(a, b);

    cout << "Union of arrays: ";
    for (int x : unionResult) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

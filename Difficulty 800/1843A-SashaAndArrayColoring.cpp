#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
    
// Solution: Time Complexity: O(n log n); Space Complexity: O(1)
public:
    int sashaAndArrayColoring(vector<int> arr, int sz) {
        sort(arr.begin(), arr.end());
        int i = 0, j = sz - 1, cost = 0;
        while(i < j) {
            cost += (arr[j] - arr[i]);
            ++i;
            --j;
        }
        return cost;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int sz;
        vector<int> arr;
        cin >> sz;
        for(int i = 0; i < sz; ++i ){
            int n;
            cin >> n;
            arr.push_back(n);
        }
        Solution sol;
        cout << sol.sashaAndArrayColoring(arr, sz) << endl;
    }
    return 0;
}



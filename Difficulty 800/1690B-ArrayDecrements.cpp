#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {

//   Solution 2: Time Complexity: O(n); Space Complexity: O(1)
public:
    string arrayDecrements(vector<int> a, vector<int> b, int n) {
        int maxDiff = INT_MIN;
        for(int i = 0; i < n; ++i) {
            maxDiff = max(maxDiff, a[i] - b[i]);
            if(maxDiff < 0) return "NO";
        }
        
        for(int i = 0; i < n; ++i) {
            if(b[i] != 0 && a[i] - b[i] < maxDiff) return "NO";
        }
        return "YES";
    }

//   Solution 1: Time Complexity: O(n); Space Complexity: O(1)
//public:
//    string arrayDecrements(vector<int> a, vector<int> b, int n) {
//        int minDiff = INT_MAX;
//        for(int i = 0; i < n; ++i) {
//            if(b[i] != 0)
//                minDiff = min(minDiff, a[i] - b[i]);
//            if(minDiff < 0) return "NO";
//        }
//        
//        for(int i = 0; i < n; ++i) {
//            if(a[i] - b[i] > minDiff) return "NO";
//            if(b[i] != 0 && a[i] - b[i] < minDiff) return "NO";
//        }
//        return "YES";
//    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        vector<int> a, b;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            int ele;
            cin >> ele;
            a.push_back(ele);
        }
        for(int i = 0; i < n; ++i) {
            int ele;
            cin >> ele;
            b.push_back(ele);
        }
        Solution sol;
        cout << sol.arrayDecrements(a, b, n) << endl;
    }
}



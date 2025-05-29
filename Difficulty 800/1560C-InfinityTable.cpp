#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
    
// Solution 2: Time Complexity: O(1) Space Complexity: O(1)
public:
    pair<int, int> infinityTable(long num) {
        if(num == 1) return {1, 1};
        int squareRoot = ceil(sqrt(num));
        int firstElement = pow(squareRoot - 1, 2) + 1, lastElement = pow(squareRoot, 2); // Here first element and last element are first and last elements in the range of elemnts in squareRoot th column and squareRoot th row combined.
        if(num - firstElement < squareRoot) return {num - firstElement + 1, squareRoot};
        else return {squareRoot, lastElement - num + 1};
    }
    
// Solution 1: Time Limit Exceeded Time Complexity: O(sqrt(n) * sqrt(n) + sqrt(n)) = O(sqrt(n)^2) = O(n); Space Complexity: O(1)
//public:
//    pair<int, int> infinityTable(long num) {
//        int n = 0;
//        for(int i = 0; i <= sqrt(num); ++i) {
//            for(int j = 0; j < i; ++j) {
//                n++;
//                if(n == num) return {j+1, i+1};
//            }
//            for(int k = i; k >= 0; --k) {
//                n++;
//                if(n == num) return {i+1, k+1};
//            }
//        }
//        return {-1, -1};
//    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        long num;
        cin >> num;
        Solution sol;
        pair<int, int> res = sol.infinityTable(num);
        cout << res.first << ' ' << res.second << endl;
    }
    return 0;
}



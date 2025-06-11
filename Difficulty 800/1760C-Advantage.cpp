#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {

    //   Solution: Time Complexity: O(n); Space Complexity: O(1)
public:
    vector<int> advantage(vector<int> strengths, int n) {
        int firstHigh = INT_MIN, secondHigh = INT_MIN;
        for(auto strength : strengths) {
            if(strength >= firstHigh) {
                secondHigh = firstHigh;
                firstHigh = strength;
            } else if(strength > secondHigh)
                secondHigh = strength;
        }
        for(int i = 0; i < n; ++i) {
            if(strengths[i] == firstHigh) strengths[i] -= secondHigh;
            else strengths[i] -= firstHigh;
        }
        return strengths;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        vector<int> strengths;
        cin >> n;
        for(int i = 0; i < n; ++i) {
            int strength;
            cin >> strength;
            strengths.push_back(strength);
        }
        Solution sol;
        vector<int> result = sol.advantage(strengths, n);
        for(auto ele : result) {
            cout << ele << " ";
        }
    }
}



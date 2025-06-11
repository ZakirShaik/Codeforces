#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
//   Solution 1: Time Complexity: O(n); Space Complexity: O(1)
public:
    int nextRound(int n, int k, vector<int> scores) {
        while(k <= n && k > 0) {
            if(scores[k-1] == 0) k--;
            else if(k == n || scores[k-1] != scores[k]) break;
            else k++;
        }
        return k;
    }

    //   Solution 2: Time Complexity: O(n); Space Complexity: O(1)
public:
    int nextRound(int n, int k, vector<int> scores) {
        int counter = 0;
        for(auto score : scores) {
            if(score >= scores[k-1] && score > 0) counter++;
        }
        return counter;
    }
};

int main(int argc, const char * argv[]) {
    int n, k;
    vector<int> scores;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        int score;
        cin >> score;
        scores.push_back(score);
    }
    Solution sol;
    cout << sol.nextRound(n, k, scores) << endl;
}



#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {

//   Solutions : Time Complexity: O(1); Space Complexity: O(1)
public:
    int elephant(int x) {
        // Solution 1:
//        return x % 5 ? x / 5 + 1 : x / 5;
        // Solution 2:
        return (x+4)/5;
    }
};

int main(int argc, const char * argv[]) {
    int x;
    cin >> x;
    Solution sol;
    cout << sol.elephant(x) << endl;
}



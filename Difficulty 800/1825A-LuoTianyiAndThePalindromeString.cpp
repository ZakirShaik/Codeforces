#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

class Solution {
    //Time Complexity: O(n); Space Complexity: O(n)
public:
    int luotianyiAndThePalindromeString (string palindrome) {
        unordered_set<char> uset;
        for(auto ch : palindrome) uset.insert(ch);
        return uset.size() == 1 ? -1 : (int)palindrome.size() - 1;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        string palindrome;
        cin >> palindrome;
        Solution sol;
        cout << sol.luotianyiAndThePalindromeString(palindrome) << endl;
    }
    return 0;
}



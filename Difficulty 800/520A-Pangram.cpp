#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

class Solution {
//Solution 2: Time Complexity: O(n), where n is length of string; Space Complexity: O(1) as max alphabet count is 26
public:
    string isPangram (string str) {
        if(str.size() < 26) return "NO";
        unordered_set<char> charSet;
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        charSet.insert(str.begin(), str.end());
        return charSet.size() == 26 ? "YES" : "NO";
    }
    
    // Solution 1: Time Complexity: O(n), where n is length of string; Space Complexity: O(1) as max alphabet count is 26
//public:
//    string isPangram (string str) {
//        if(str.size() < 26) return "NO";
//        unordered_set<char> charSet;
//        for(int i = 0; i < str.length(); ++i)
//            if(isupper(str[i]))
//                str[i] = tolower(str[i]);
//        charSet.insert(str.begin(), str.end());
//        return charSet.size() == 26 ? "YES" : "NO";
//    }
};

int main(int argc, const char * argv[]) {
    int n;
    string str;
    cin >> n;
    cin >> str;
    Solution sol;
    cout << sol.isPangram(str) << endl;
    return 0;
}



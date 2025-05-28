#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {
    
// Solution 1: Time Complexity: O(n); Space Complexity: O(1)
public:
    string spellCheck(string name) {
        if(name.size() == 5 &&
           name.find('T') != string::npos &&
           name.find('r') != string::npos &&
           name.find('u') != string::npos &&
           name.find('m') != string::npos &&
           name.find('i') != string::npos) return "YES";
        return "NO";
    }
    
// Solution 2: Time Complexity: O(n); Space Complexity: O(1)
//public:
//    string spellCheck(string name) {
//        string isCorrect = "NO";
//        if(name.size() != 5) return isCorrect;
//        unordered_set<char> charSet;
//        charSet.insert(name.begin(), name.end());
//        if(charSet.contains('T') &&
//           charSet.contains('r') &&
//           charSet.contains('u') &&
//           charSet.contains('m') &&
//           charSet.contains('i')) isCorrect = "YES";
//        return isCorrect;
//    }
    
// Solution 3: Time Complexity: O(n log n); Space Complexity: O(1)
//public:
//    string spellCheck(string name) {
//        sort(name.begin(), name.end());
//        return name == "Timru" ? "YES" : "NO";
//    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    int num;
    string name;
    while(t--) {
        cin >> num;
        cin >> name;
        Solution sol;
        cout << sol.spellCheck(name) << endl;
    }
    return 0;
}



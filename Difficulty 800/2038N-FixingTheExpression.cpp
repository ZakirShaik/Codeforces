#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
//Solution 2:
public:
   string fixingTheExpression(string s) {
       int num1 = s[0] - '0', num2 = s[2] - '0';
       if(num1 == num2) s[1] = '=';
       else if(num1 > num2) s[1] = '>';
       else s[1] = '<';
       return to_string(num1) + s[1] + to_string(num2);
   }

/* Solution 1
//public:
    string fixingTheExpression(string s) {
        int num1 = s[0] - '0', num2 = s[2] - '0';
        if(num1 == num2) s[1] = '=';
        else {
            switch(s[1]) {
                case '<':
                    if(num1 == 9) s[1] = '>';
                    else if(num1 > num2) num2 = num1 + 1;
                    break;
                case '>':
                    if(num2 == 9) s[1] = '<';
                    else if(num1 < num2) num1 = num2 + 1;
                    break;
                case '=':
                    if(num1 > num2) s[1] = '>';
                    else s[1] = '<';
                    break;
                default: break;
            }
        }
        return to_string(num1) + s[1] + to_string(num2);
    }
 */
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        Solution sol;
        string res = sol.fixingTheExpression(s);
        cout << res << endl;
        
    }
    return 0;
}

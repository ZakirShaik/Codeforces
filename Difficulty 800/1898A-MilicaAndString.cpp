#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    pair<int, char> milicaAndString(string str, int len, int k) {
        int bCount = 0, operations = 0;
        char replacement;
        for(char ch : str)
            if (ch == 'B')
                bCount++;
        
            for(char ch : str) {
                if(k > bCount) {
                    if(ch == 'A') bCount++;
                    operations++;
                    replacement = 'B';
                }
                else if(k < bCount) {
                    if(ch == 'B') bCount--;
                    operations++;
                    replacement = 'A';
                } else break;
            }
        return {operations, replacement};
    }
};

int main(int argc, const char * argv[]) {
    Solution sol;
    int t, n = 0, k = 0; // n is the length of string; k is the number of B instances that need to be present in the final output
    string str;
    cin >> t ;
    while(t--) {
        cin >> n >> k;
        cin >> str;
        pair<int, char> res = sol.milicaAndString(str, n, k);
        if(res.first) {
            cout << 1 << endl;
        }
        cout << res.first << ' ';
        if(res.first) cout << res.second << endl;
    }
    return 0;
}


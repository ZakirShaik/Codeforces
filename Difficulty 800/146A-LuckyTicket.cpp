#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string luckyTicket(string n, int len) {
        int sum = 0;
        for(int i = 0; i < len/2; ++i) {
            int num = n[i] - '0';
            if (num == 4 || num == 7) {
                sum += num;
            } else return "NO";
        }
        
        for(int i = len/2; i < n.size(); ++i) {
            int num = n[i] - '0';
            if (num == 4 || num == 7) {
                sum -= num;
            } else return "NO";
        }
        
        return (sum == 0) ? "YES" : "NO";
    }
};

int main(int argc, const char * argv[]) {
    Solution sol;
    int len;
    string str;
    cin >> len;
    cin >> str;
    cout << sol.luckyTicket(str, len) << endl;
    return 0;
}


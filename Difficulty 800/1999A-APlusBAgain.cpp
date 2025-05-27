#include <iostream>

using namespace std;

class Solution {
public:
    int aPlusBAgain (int num) {
        return num%10 + num/10;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int num;
        cin >> num;
        Solution sol;
        cout << sol.aPlusBAgain(num) << endl;
    }
    return 0;
}



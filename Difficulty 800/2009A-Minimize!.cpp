#include <iostream>

using namespace std;

class Solution {
public:
    int minimize(int a, int b) {
        return b-a;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        Solution sol;
        cout << sol.minimize(a, b) << endl;
    }
    return 0;
}


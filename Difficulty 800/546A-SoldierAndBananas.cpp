#include <iostream>

using namespace std;

class Solution {
public:
    int soldierAndBananas(int k, int n, int w) {
        int totalCost = 0;
        for(int i = 1; i <= w; ++i) totalCost += i*k;
        return max(totalCost - n, 0);
    }
};

int main(int argc, const char * argv[]) {
    int k, n, w;
    cin >> k >> n >> w;
    Solution sol;
    cout << sol.soldierAndBananas(k, n, w) << endl;
    return 0;
}

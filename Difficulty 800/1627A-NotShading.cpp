#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution {

//   Solution : Time Complexity: O(n*m); Space Complexity: O(1)
public:
    int notShading(vector<string> grid, int m, int n, int r, int c) {
        if(r > m || c > n) return -1;
        r--;
        c--;
        if(grid[r][c] == 'B') return 0;
        else {
            for(int i = 0; i < n; ++i)
                if(grid[r][i] == 'B') return 1;
            
            for(int i = 0; i < m; ++i)
                if(grid[i][c] == 'B') return 1;
            
            for(int i = 0; i < m; ++i)
                for(int j = 0; j < n; ++j)
                    if(grid[i][j] == 'B') return 2;
        }
        return -1;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int m, n, r, c;
        vector<string> grid;
        cin >> m >> n >> r >> c;
        for(int i = 0; i < m; ++i) {
            string row;
            cin >> row;
            grid.push_back(row);
        }
        Solution sol;
        cout << sol.notShading(grid, m, n, r, c) << endl;
    }
}



#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> foxAndSnake(int m, int n) {
        vector<string> snake;
        bool flag = true, visited = false;
        for(int i = 0; i < m; ++i) {
            string str;
            for(int j = 0; j < n; ++j) {
                if(i%2 == 0) str.push_back('#');
                else {
                    if(!visited && ((flag && j == n-1) || (!flag && j == 0))) {
                        str.push_back('#');
                        flag = !flag;
                        visited = true;
                    }
                    else str.push_back('.');
                }
            }
            visited = false;
            snake.push_back(str);
        }
        return snake;
    }
};

int main(int argc, const char * argv[]) {
    int m, n;
    cin >> m >> n;
    Solution sol;
    vector<string> res = sol.foxAndSnake(m, n);
    for(auto r : res) cout << r << endl;
    return 0;
}


#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string cutTheTriangle(vector<vector<int>> coordinates) {
        unordered_set<int> s1, s2;
        string result = "YES";
        for(auto coordinate : coordinates) {
            s1.insert(coordinate[0]);
            s2.insert(coordinate[1]);
        }
        /*
        We cannot cut the triangle in only one scenario. 
        i.e. when x coordinates of any two points are equal and 
        at the same time y coordinates of anytwo points are equal.
        */
        if(s1.size() < 3 && s2.size() < 3) result = "NO";
        return result;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        vector<vector<int>> coordinates;
        for(int i = 0; i < 3; ++i) {
            int p, q;
            cin >> p >> q;
            coordinates.push_back({p, q});
        }
        Solution sol;
        cout << sol.cutTheTriangle(coordinates) << endl;
    }
    return 0;
}



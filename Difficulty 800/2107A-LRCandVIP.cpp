#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
/* Solution 1:
public:
    vector<int> lrcAndVip(vector<int> elements) {
        vector<int> result;
        unordered_set<int> uset;
        int maxEle = INT_MIN;
        for(auto ele : elements) {
            maxEle = max(maxEle, ele);
            uset.insert(ele);
        }
        if(uset.size() > 1) {
            for(auto ele : elements) {
                if(ele == maxEle) result.push_back(1);
                else result.push_back(2);
            }
        }
        return result;
    }
 */

// Solution 2:
public:
    vector<int> lrcAndVip(vector<int> elements) {
        vector<int> result;
        int maxEle = INT_MIN, minEle = INT_MAX;
        for(auto ele : elements) {
            maxEle = max(maxEle, ele);
            minEle = min(minEle, ele);
        }
        if(minEle != maxEle)
            for(auto ele : elements)
                result.push_back(1 + (ele == maxEle));
        
        return result;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n, e;
        vector<int> elements;
        cin >> n;
        while(n--) {
            cin >> e;
            elements.push_back(e);
        }
        Solution sol;
        vector<int> res = sol.lrcAndVip(elements);
        if(res.size()) {
            cout << "Yes" << endl;
            for(auto r : res) cout << r << " ";
            cout << endl;
        } else cout << "NO" << endl;
        
    }
    return 0;
}

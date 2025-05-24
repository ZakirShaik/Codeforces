#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
public:
// Solution 2: O(n)
string replacingElements(int n, int target, vector<int>elements) {
    if(elements.size() < 3) return "NO"; // no need of this
    int mini = INT_MAX, sec_mini = INT_MAX, highest = INT_MIN;
    for(auto ele : elements) {
        highest = max(highest, ele);
        if(ele <= mini) {
            sec_mini = mini;
            mini = ele;
        } else {
            sec_mini = min(sec_mini, ele);
        }
    }
    if(highest <= target || mini + sec_mini <= target) return "YES";
    return "NO";
}
/* Solution 1: O(n log n)
    string replacingElements(int n, int target, vector<int>elements) {
        if(elements.size() < 3) return "NO"; // no need of this
        sort(elements.begin(), elements.end());
        if(elements[0] + elements[1] <= target || elements.back() <= target) return "YES";
        return "NO";
    }
 */
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n, target;
        vector<int> elements;
        cin >> n >> target;
        while(n--) {
            int ele;
            cin >> ele;
            elements.push_back(ele);
        }
        Solution sol;
        cout << sol.replacingElements(n, target, elements) << endl;
    }
    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
public:
    string trippitroppi(string first, string second, string third) {
        string str;
        str.push_back(first[0]);
        str.push_back(second[0]);
        str.push_back(third[0]);
        return str;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        Solution sol;
        cout << sol.trippitroppi(s1, s2, s3) << endl;
    }
    return 0;
}


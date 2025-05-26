#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    int phoneCode(vector<string> phoneNumbers, int n) {
        //Solution 2: Time complexity: O(n) - because size of phone number is 20 which is constant; Space Complexity: O(1)
        string result;
        if(n) result = phoneNumbers[0];
        for(int i = 1; i < n; ++i) {
            for(int j = 0; j < result.size(); ++j) {
                if(result[j] != phoneNumbers[i][j]) {
                    result.erase(j, result.size()-j);
                    break;
                }
            }
        }
                    
        return (int)result.size();

//        int count = 0;
//        bool resultFound = false;
//        for(int i = 0; i < phoneNumbers[0].size(); ++i) {
//            for(int j = 0; j < n-1; ++j) {
//                if(phoneNumbers[j][i] != phoneNumbers[j+1][i]) {
//                    resultFound = true;
//                    break;
//                }
//            }
//            if(resultFound) break;
//            else count++;
//        }
//        return count;
    }
};

int main(int argc, const char * argv[]) {
    int n;
    vector<string> phoneNumbers;
    cin >> n;
    string num;
    for(int i = 0; i < n; ++i) {
        cin >> num;
        phoneNumbers.push_back(num);
    }
    Solution sol;
    cout << sol.phoneCode(phoneNumbers, n) << endl;
    return 0;
}



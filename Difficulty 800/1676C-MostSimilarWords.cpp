#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
    
public:
    int mostSimilarWords(vector<string>elements, int len, int n) {
        int minDiff = INT_MAX, tempDiff = 0;
        for(int i = 0; i < n-1; ++i) {
            for(int j = i+1; j < n; ++j) {
                string s1 = elements[i], s2 = elements[j];
                for(int k = 0; k < len; ++k) {
                    tempDiff += abs(s1[k] - s2[k]);
                }
                minDiff = min(minDiff, tempDiff);
                tempDiff = 0;
            }
        }
        return minDiff;
    }
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n, len;
        vector<string> words;
        cin >> n >> len;
        for(int i = 0; i < n; ++i) {
            string ele;
            cin >> ele;
            words.push_back(ele);
        }
        Solution sol;
        cout << sol.mostSimilarWords(words, len, n) << endl;
    }
    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

class Solution {
    
//Solution 4:
public:
    vector<int> balancedArray(int n) {
        vector<int> arr;
        if(n % 4 == 0) {
            for(int i = 1; i <= n/2; ++i) arr.push_back(i*2);
            for(int i = 1; i <= n/2; ++i) arr.push_back(i*2 - 1);
            arr.back() += n/2;
        }
        return arr;
    }

/* Solution 3:
public:
    vector<int> balancedArray(int n) {
        vector<int> arr(n, 0);
        int p = 0, q = n/2;
        if(n % 4 == 0) {
            for(int i = 1; i <= n; ++i) {
                if(i%2 == 1) {
                    arr[q] = i;
                    q++;
                }
                else {
                    arr[p] = i;
                    p++;
                }
            }
            arr[n-1] += n/2;
        } else {
            arr.clear();
        }
        return arr;
    }
 */

/* Solution 2:
public:
    vector<int> balancedArray(int n) {
        vector<int> res(n, 0);
        int p = 0, q = n/2, i = 1, leftSum = 0, rightSum = 0;
        if((n/2)%2 == 0) {
            while(q < n) {
                if(i%3 == 0) {
                    i++;
                    continue;
                } else if(i%2 == 0) {
                    res[p] = i;
                    leftSum += res[p];
                    p++;
                    i++;
                }
                else {
                    if(q == n-1) {
                        res[q] = leftSum - rightSum;
                    } else {
                        res[q] = i;
                        rightSum += res[q];
                        i++;
                    }
                    q++;
                }
            }
        }
        if((n/2)%2 != 0) res.clear();
        return res;
    }
 */

/* Solution 1:
public:
    vector<int> balancedArray(int n) {
        vector<int> res(n, 0);
        int p = 0, q = n-1, i = 1, leftSum = 0, rightSum = 0;
        if((n/2)%2 == 0) {
            while(p <= q) {
                if(i%3 == 0) {
                    i++;
                    continue;
                } else if(i%2 == 0) {
                    res[p] = i;
                    leftSum += res[p];
                    p++;
                    i++;
                }
                else {
                    if(p == q) {
                        res[q] = leftSum - rightSum;
                    } else {
                        res[q] = i;
                        rightSum += res[q];
                        i++;
                    }
                    q--;
                }
            }
        }
        if((n/2)%2 != 0) res.clear();
        return res;
    }
 */
};

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        Solution sol;
        vector<int> res = sol.balancedArray(n);
        if(!res.size()) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            for(auto r : res) {
                cout << r << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}


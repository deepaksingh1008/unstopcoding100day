//quelink - https://unstop.com/code/challenge-assessment/305915?moduleId=406

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int countEqualSumSubarrayPairs(const vector<int>& A) {
    int n = A.size();
    unordered_map<int, vector<int>> prefixSumMap;  
    vector<int> prefix(n + 1, 0);  
    int pairCount = 0;

   
    for (int i = 1; i <= n; ++i) {
        prefix[i] = prefix[i - 1] + A[i - 1];
    }

    
    for (int r = 1; r <= n; ++r) {
        for (int l = 1; l <= r; ++l) {
            int sum = prefix[r] - prefix[l - 1];

            
            if (prefixSumMap.count(sum)) {
                for (int end : prefixSumMap[sum]) {
                    if (end < l) {  
                        pairCount++;
                    }
                }
            }

            
            prefixSumMap[sum].push_back(r);
        }
    }

    return pairCount;
}

int main() {
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int result = countEqualSumSubarrayPairs(A);
    cout << result << endl;

    return 0;
}

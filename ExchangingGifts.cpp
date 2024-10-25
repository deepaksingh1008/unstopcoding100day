#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    unordered_map<int, int> receivedCount; 
    unordered_set<int> givers;            
    vector<pair<int, int>> arr;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr.push_back({a, b});
        givers.insert(a);           
        receivedCount[b]++;          
    }

    int ans = -1;
    for (int i = 1; i <= n; i++) {
       
        if (givers.find(i) == givers.end() && receivedCount[i] == n - 1) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}

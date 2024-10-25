#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    unordered_map<string, int> freqMap;   
    vector<string> order;                 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        
        
        if (freqMap[s] == 0) {
            order.push_back(s);
        }
        
       
        freqMap[s]++;
    }

   
    vector<string> uniqueStrings;
    for (const string &str : order) {
        if (freqMap[str] == 1) {
            uniqueStrings.push_back(str); 
        }
    }

    
    cin >> k;
    if (k <= uniqueStrings.size()) {
        cout << uniqueStrings[k - 1] << endl;  
    } else {
        cout << -1 << endl;
    }

    return 0;
}

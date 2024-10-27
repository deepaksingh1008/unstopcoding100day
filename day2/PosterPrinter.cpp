//que-https://unstop.com/code/challenge-assessment/301659?moduleId=406


#include <iostream>
#include <string>

using namespace std;

// Function to check if a segment can be printed
bool canPrint(const string& segment) {
    bool hasR = false, hasB = false;
    for (char c : segment) {
        if (c == 'R') hasR = true;
        if (c == 'B') hasB = true;
    }
    // If the segment contains both 'R' and 'B', it can be printed
    return (hasR && hasB);
}

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N; // Length of the sequence
        cin >> N;
        string s; // The sequence of colors
        cin >> s;

        bool possible = true;
        string segment = ""; // To hold the current segment between 'W'

        for (char c : s) {
            if (c == 'W') {
                // Process the current segment when we hit 'W'
                if (!segment.empty()) {
                    if (!canPrint(segment)) {
                        possible = false;
                        break;
                    }
                    segment = ""; // Reset the segment
                }
            } else {
                segment += c; // Build the current segment
            }
        }

        // Process the last segment if it exists
        if (!segment.empty() && !canPrint(segment)) {
            possible = false;
        }

        // Output result for the current test case
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
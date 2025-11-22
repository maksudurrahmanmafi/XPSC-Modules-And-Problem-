#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'A']++;

    int oddCount = 0, oddChar = -1;
    for (int i = 0; i < 26; i++) {
        if (freq[i] % 2 != 0) {
            oddCount++;
            oddChar = i;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION";
        return 0;
    }

    string firstHalf = "", middle = "";

    for (int i = 0; i < 26; i++) {
        if (i == oddChar) continue;
        firstHalf += string(freq[i] / 2, char('A' + i));
    }

    if (oddChar != -1)
        middle = string(freq[oddChar], char('A' + oddChar));

    string secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf << middle << secondHalf;

    return 0;
}

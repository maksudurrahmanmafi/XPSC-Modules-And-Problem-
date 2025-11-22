#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int l = 0, r = 0;
        int count = 0;
        int ans = INT_MAX;

        while(r < n) {
            // নতুন সেল যুক্ত করা
            if(s[r] == 'W') count++;

            // যখন উইন্ডোর দৈর্ঘ্য >= k
            if(r - l + 1 == k) {
                // উইন্ডোর সাদা সংখ্যা আপডেট
                ans = min(ans, count);

                // উইন্ডো বাম দিকের সেল বাদ দাও
                if(s[l] == 'W') count--;
                l++; // উইন্ডো স্লাইড করো
            }
            r++;
        }

        cout << ans << "\n";
    }

    return 0;
}

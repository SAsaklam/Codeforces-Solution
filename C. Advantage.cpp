#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<long long> s(n);
        for (int i = 0; i < n; i++) cin >> s[i];

        vector<long long> sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

        long long max_val = sorted_s[n-1];
        long long second_max = sorted_s[n-2];

        for (int i = 0; i < n; i++) {
            if (s[i] == max_val) {
                cout << s[i] - second_max << " ";
            } else {
                cout << s[i] - max_val << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

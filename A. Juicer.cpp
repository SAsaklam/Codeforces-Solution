#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, d;
    cin >> n >> b >> d;
    vector<int> oranges(n);
    for (int i = 0; i < n; i++) {
        cin >> oranges[i];
    }

    int waste = 0, cnt = 0;
    for (int orange : oranges) {
        if (orange <= b) {
            waste += orange;
            if (waste > d) {
                cnt++;
                waste = 0;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}

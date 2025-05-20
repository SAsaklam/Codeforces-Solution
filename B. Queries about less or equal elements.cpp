#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); // Fast IO
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < m; i++) {
        // Find number of elements in a that are <= b[i]
        int index = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        cout << index << ' ';
    }

    cout << '\n';
    return 0;
}



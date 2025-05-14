#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        bool isok = false;
        char star[51];
        cin >> star;
        int n = strlen(star);


        for (int A = 0; A <= 1; A++) {
            for (int B = 0; B <= 1; B++) {
                for (int C = 0; C <= 1; C++) {
                    string temp = "";
                    for (int i = 0; i < n; i++) {
                        if (star[i] == 'A') temp += (A == 0 ? '(' : ')');
                        else if (star[i] == 'B') temp += (B == 0 ? '(' : ')');
                        else if (star[i] == 'C') temp += (C == 0 ? '(' : ')');
                    }


                    int balance = 0;
                    bool isValid = true;
                    for (char ch : temp) {
                        if (ch == '(') balance++;
                        else balance--;
                        if (balance < 0) {
                            isValid = false;
                            break;
                        }
                    }
                    if (balance != 0) isValid = false;

                    if (isValid) {
                        isok = true;
                        break;
                    }
                }
                if (isok) break;
            }
            if (isok) break;
        }

        if (isok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}

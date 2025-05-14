// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        int p;
        cin >> p;
        int ans = 0;
        for(int i=1;i<=9;i++){
            while(i<= p){
                ans++;
                i = i*10;
            }

   cout << i << endl;
        }



    }


    return 0;
}

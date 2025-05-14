#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin >> t;
while(t--){

int n,k;
cin >> n >> k;
int a[n];
for(int i=0;i<n;i++){
cin >> a[i];

}
while(k--){

for(int i=0;i<n;i++){

if(a[i]){

a[i]--;
a[n-1]++;
break;


}


}



}



for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;


}






}

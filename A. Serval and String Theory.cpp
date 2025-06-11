#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin >> t;
while(t--){

        int n,k;
cin >> n >> k;


string S;
cin >> S;


     string rev_s = S;

 reverse(rev_s.begin(), rev_s.end());

if(S < rev_s){

cout << "YES\n" << endl;

}
else  if(  k > 0  && n >1) {
cout << "YES\n" << endl;
}

else {

cout << "NO" << endl;
}










}

return 0;







}

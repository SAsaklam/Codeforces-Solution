#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin >> t;
while(t--){

long long n;
int ans = 0;
cin >>n;
while(n    != 1){

if(n%2 == 0){

n /= 2;



}
else if(n%3 == 0){
n /= 3;
n *= 2;



}

else if(n%5 == 0){
n /= 5;
n *= 4;



}

else {

ans = -1;
break;

}
ans++;





}
cout << ans << endl;















}







}

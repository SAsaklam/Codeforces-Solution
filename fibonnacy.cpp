#include<bits/stdc++.h>
using namespace std;
int main(){

int t;
cin >> t;
while(t--){
int arr[5];
cin >> arr[0] >> arr[1] >> arr[3] >> arr[4];
int ans = 0;

for (int val =-100; val <= 100; val++){

int score = 0;
arr[2] = val;
for(int i=2;i<5;i++){

if(arr[i] == arr[i-1]+ arr[i-2]) score++;


}


ans = max(ans, score);

}

cout << ans << endl;





}






}

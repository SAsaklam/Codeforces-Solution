#include<bits/stdc++.h>
using namespace std;

int a[805][805],n;

int main(){

int t;
cin >> t;
while(t--){
cin >> n;

map<int,bool> mp;

for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){

cin >> a[i][j],

mp[a[i][j]] = 1;


}
}


for(int i=1;i <= n * 2;i++){


			if(!mp[i]){
               cout<<i<<" ";
				break;

			}


}

		for(int i=1;i<=n;i++)cout<<a[1][i]<<" ";
		for(int i=2;i<=n;i++)cout<<a[n][i]<<" ";
		cout<<"\n";

}


return 0;





}
















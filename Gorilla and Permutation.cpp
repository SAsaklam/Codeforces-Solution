#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;

while(t--){
int n,m,k;
cin >> n >> m >> k;


vector<int> p;
for(int i=k;i<=n;i++){
p.push_back(i);
}

for(int i=m+1;i<k;i++){
p.push_back(i);


}

for(int i=1;i<= m;i++){
p.push_back(i);


}


for(int num : p){
cout << num << " ";


}

cout << "\n";
}














}

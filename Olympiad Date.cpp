#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin >> t;
while(t--){

int n;
cin >> n;
vector<int> a(n);
unordered_map<int,int> required = {{0,3},{1,1},{2,2},{3,1},{5,1}};
unordered_map<int,int>count;
bool found = false;
for(int i=0;i<n;i++){
    cin >> a[i];

    count[a[i]]++;

   bool valid = true;

   for(auto &p : required) {

    if(count[p.first] <p.second){


        valid = false;
        break;
    }



   }


    if(valid){


        cout << (i+1) << "\n";
        found = true;
        break;

    }





}










 if (!found) cout << "0\n";




}












}

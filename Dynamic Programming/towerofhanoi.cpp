#include<bits/stdc++.h>
using namespace std;
long long int max(long long int a,long long int b){
if(a>=b){return a; }
else{return b;}
}

int main(){
int t;
cin>>t;
while(t--){
int m;
cin>>m;
vector<long long int>a(m);vector<long long int>b(m);
for(int i=0;i<m;i++){
cin>>a[i]>>b[i];

}
vector< pair<long long int,long long int> >v;
for(int i=0;i<m;i++){v.push_back(make_pair(a[i],b[i]));}
sort(v.begin(),v.end());
vector<long long int>ans(m);
ans[0]=v[0].second;long long int n=ans[0];
for(int i=1;i<m;i++){ans[i]=v[i].second;
for(int j=0;j<i;j++){
if(v[i].second>v[j].second && v[i].first>v[j].first){
ans[i]=max(ans[i],v[i].second+ans[j]);

}
}

if(n<=ans[i]){n=ans[i];}
}

cout<<n<<endl;






}




}
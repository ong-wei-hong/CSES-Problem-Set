#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int main(){
  int n;
  cin>>n;
  ar<int, 2> t[n];
  for(int i=0; i<n; ++i)
    cin>>t[i][0]>>t[i][1];
  //to gain max reward, do shorter tasks first
  sort(t, t+n);
  ll f=0, ans=0;
  for(int i=0; i<n; ++i){
    f+=t[i][0];
    ans+=t[i][1]-f;
  }
  cout<<ans;
}

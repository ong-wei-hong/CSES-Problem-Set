#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int k[n];
  for(int i=0; i<n; ++i)
    cin>>k[i];
  //when a non-unique song is encounted, remove the first song of the sequence
  map<int, int>m;
  int ans=0;
  for(int i=0,j=0; i<n; ++i){
    while(j<n&&m[k[j]]<1){
      m[k[j]]++;
      ++j;
    }
    ans=max(j-i, ans);
    if(j==n){
      cout<<ans;
      return 0;
    }
    m[k[i]]--;
  }
  cout<<ans;
}

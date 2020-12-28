#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
  int n, m, k;
  cin>>n>>m>>k;
  int a[n], b[m];
  for(int i=0; i<n; ++i)
    cin>>a[i];
  for(int i=0; i<m; ++i)
    cin>>b[i];
  //by sorting both arrays, match the smallest home to the person who accepts the smallest home
  sort(a, a+n);
  sort(b, b+m);
  int ans=0, j=0;
  for(int i=0; i<n; ++i){
    while(j<m&&b[j]<a[i]-k)
      ++j;
    if(j<m&&b[j]<=a[i]+k)
      ++ans, ++j;
  }
  cout<<ans;
}

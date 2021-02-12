#include <bits/stdc++.h>
using namespace std;

const int maxN=1000, maxX=1e5;
int n, x, h[maxN], s[maxN], ans[maxX+1]; //ans would have the max page for each price

int main(){
  cin>>n>>x;
  for(int i=0; i<n; ++i)
    cin>>h[i];
  for(int i=0; i<n; ++i)
    cin>>s[i];
  for(int i=0; i<n; ++i){
    for(int j=x; j>=h[i]; --j)
      ans[j]=max(ans[j], ans[j-h[i]]+s[i]); //checks if pages would increase if ith book is included
  }
  cout<<ans[x];
}

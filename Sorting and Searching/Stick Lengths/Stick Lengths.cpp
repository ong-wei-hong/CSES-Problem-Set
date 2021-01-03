#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n;
  cin>>n;
  int p[n];
  for(int i=0; i<n; ++i)
    cin>>p[i];
  //print the sum of the difference between all elements and median
  sort(p, p+n);
  ll med=p[n/2], ans=0;
  for(int i=0; i<n; ++i)
    ans+=abs(p[i]-med);
  cout<<ans;
}

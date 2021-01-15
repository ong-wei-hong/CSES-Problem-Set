#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n;
  cin>>n;
  ll sum=0, ans=0;
  map<ll, int>m;
  m[0]++;
  //if sum%n is found in m, that means the most recent k elements % n == 0
  for(int i=0; i<n; ++i){
    int x;
    cin>>x;
    sum=(sum+x%n+n)%n;
    ans+=m[sum];
    m[sum]++;
  }
  cout<<ans;
}

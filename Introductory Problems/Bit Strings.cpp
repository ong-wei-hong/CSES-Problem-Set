#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007L;

long exp(int n){
  long temp=2L;
  long ans=1L;
  while(n>0){
    if(n%2!=0){
      ans=(temp*ans)%mod
    }
    temp=(temp*temp)%mod;
    n/=2;
  }
  return ans;
}

int main(){
  int n;
  cin>>n;
  cout<<exp(n);
}

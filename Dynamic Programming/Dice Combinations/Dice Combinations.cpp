#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int M=1e9+7;
ll a[(int)1e6+1];

int main(){
  int n;
  cin>>n;
  a[0]=1;
  for(int i=1; i<=n; ++i){
    for(int j=1; j<=min(i, 6); ++j)
      a[i]=(a[i]+a[i-j])%M; //the number of combination follows the fibonacci sequence, but up to 6 previous numbers only as a dice can only roll 6 max
  }
	cout<<a[n];
}

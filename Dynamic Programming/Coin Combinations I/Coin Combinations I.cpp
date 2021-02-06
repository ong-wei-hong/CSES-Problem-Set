#include <bits/stdc++.h>
using namespace std;

int c[100], s[(int)1e6+1];
const int M=1e9+7;

int main(){
  int n, x;
  cin>>n>>x;
  for(int i=0; i<n; ++i)
    cin>>c[i];
  s[0]=1;
  for(int i=1; i<=x; ++i){
    for(int j=0; j<n; ++j)
      if(c[j]<=i)
	s[i]=(s[i]+s[i-c[j]])%M;//s = sum of all i-c[j] combinations
  }
  cout<<s[x];
}

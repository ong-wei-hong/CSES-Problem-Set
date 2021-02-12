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
  for(int i=0; i<n; ++i){
    for(int j=1; j<=x; ++j)
      if(c[i]<=j)
	s[j]=(s[j]+s[j-c[i]])%M;//with the n loop outside, the combinations now are distinct as they are sorted from smallest to largest e.g. 1 + 2 + 3 etc
  }
  cout<<s[x];
}

#include <bits/stdc++.h>
using namespace std;

int c[100], s[(int)1e6+1];

int main(){
  int n, x;
  cin>>n>>x;
  for(int i=0; i<n; ++i)
    cin>>c[i];
  for(int i=1; i<=x; ++i){
    s[i]=1e6+1;
    for(int j=0; j<n; ++j)
      if(c[j]<=i)
	s[i]=min(s[i], s[i-c[j]]+1);//min coins needed for i is lowest i-c[j] combination + 1
  }
  if(s[x]==1e6+1)
    cout<<-1;
  else
    cout<<s[x];
}

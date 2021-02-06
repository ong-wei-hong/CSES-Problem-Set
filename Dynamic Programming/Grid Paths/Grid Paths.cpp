#include <bits/stdc++.h>
using namespace std;

const int maxN=1000, M=1e9+7;
int n,  paths[maxN][maxN]; //paths stores the number of ways to get to that point
string s[maxN];

int main(){
  cin>>n;
  for(int i=0; i<n; ++i)
    cin>>s[i];
  paths[0][0]=1;
  for(int i=0; i<n; ++i){
    for(int j=0; j<n; ++j){
      if(i)
	paths[i][j]+=paths[i-1][j];
      if(j)
	paths[i][j]+=paths[i][j-1];
      paths[i][j]%=M;
      if(s[i][j]=='*')
	paths[i][j]=0;
    }
  }
  cout<<paths[n-1][n-1];
}

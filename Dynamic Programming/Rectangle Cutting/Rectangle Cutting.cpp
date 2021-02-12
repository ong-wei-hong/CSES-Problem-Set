#include <bits/stdc++.h>
using namespace std;

const int mxN=500;
int a, b, ans[mxN+1][mxN+1];

int main(){
  cin>>a>>b;
  for(int i=1; i<=a; ++i){
    for(int j=1; j<=b; ++j){
      if(i^j){ //if i and j are different
	ans[i][j]=1e9;
	for(int k=0; k<i; ++k) //compares the results of the first cut using previous answers
	  ans[i][j]=min(ans[i][j], ans[k][j]+ans[i-k][j]+1);
	for(int k=0; k<j; ++k)
	  ans[i][j]=min(ans[i][j], ans[i][k]+ans[i][j-k]+1);
      }
    }
  }
  cout<<ans[a][b];
}

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int maxN=1e5, maxM=100, mod=1e9+7;
int n, m, a[maxN];
ll ans[maxN][maxM]; //ans[i][j] stores the number of array with length i ending in j which matches the array description

int main(){
  cin>>n>>m;
  for(int i=0; i<n; ++i)
    cin>>a[i], --a[i];
  for(int i=0; i<n; ++i){
    if(i){ //if array length is more than 1
      for(int j=0; j<m; ++j){
	ans[i][j]=ans[i-1][j];//number of length i array += number of length i-1 array which ends in j
	if(j)
	  ans[i][j]+=ans[i-1][j-1];//+= number of length i-1 array which ends in j-1
	if(j<m-1)
	  ans[i][j]+=ans[i-1][j+1];//+= number of length i-1 array which ends in j+1
	ans[i][j]%=mod;
      }
    }else //if array length is 1
      for(int j=0; j<m; ++j)
	ans[0][j]=1;
    if(~a[i]) //if a[i]!=-1 (if a[i] is a specified number)
      for(int j=0; j<m; ++j)
	if(j^a[i]) //if j and a[i] is different
	  ans[i][j]=0; //there is no array which matches the description
  }
  ll temp=0;
  for(int i=0; i<m; ++i)
    temp+=ans[n-1][i];
  cout<<temp%mod;
}

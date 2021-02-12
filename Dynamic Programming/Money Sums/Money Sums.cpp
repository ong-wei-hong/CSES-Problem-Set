#include <bits/stdc++.h>
using namespace std;

const int mxN=100, mxX=1e5;
int n, x[mxN], ans[mxX+1];

int main(){
  cin>>n;
  ans[0]=1;
  for(int i=0; i<n; ++i){
    cin>>x[i];
    for(int j=mxX; j; --j)
      if(j>=x[i])
	ans[j]|=ans[j-x[i]];//if j-x[i] exists, j is possible
  }
  vector<int> out;
  for(int i=1; i<=mxX; ++i)
    if(ans[i])
      out.push_back(i);
  cout<<out.size()<<endl;
  for(int i: out)
    cout<<i<<" ";
}

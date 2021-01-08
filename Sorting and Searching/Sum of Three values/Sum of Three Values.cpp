#include <bits/stdc++.h>
using namespace std;
#define ar array
 
int main(){
  int n, x;
  cin>>n>>x;
  ar<int, 2> a[n];
  for(int i=0; i<n;++i)
    cin>>a[i][0], a[i][1]=i;
  //by sorting the data, we can stop when the sum exceeds x
  sort(a, a+n);
  for(int i=0; i<n; ++i){
    int x2=x-a[i][0];
    for(int j=i+1, k=n-1; j<k; ++j){
      while(j<k&&a[j][0]+a[k][0]>x2)
	--k;
      if(j<k&&a[j][0]+a[k][0]==x2){
	cout<< a[i][1]+1 << " " << a[j][1]+1 << " " << a[k][1]+1;
	return 0;
      }
    }
  }
  cout<<"IMPOSSIBLE";	
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
  int n, most=0;
  cin>>n;
  ll sum=0;
  for(int i=0; i<n; ++i){
    int t;
    cin>>t;
    most=max(t, most);
    sum+=t;
  }
  //the time taken is either the sum of time needed, or twice the longest time if that book is disproportionally long
  cout<<max(sum, 2LL*most);
}

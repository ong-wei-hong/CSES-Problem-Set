#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MIN -1e9
 
int main(){
  ll ans=MIN, curr_sum=MIN, a;
  int n;
  cin>>n;
  //if a>curr_sum, the sum before a is negative and not recorded in curr_sum
  //if curr_sum>max, the sum after a is negative and not recorded in max
  for(int i=0; i<n; ++i){
    cin>>a;
    curr_sum=max(a, curr_sum+a);
    ans=max(ans, curr_sum);
  }
  cout<<ans;
}

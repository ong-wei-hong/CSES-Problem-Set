#include <bits/stdc++.h>
using namespace std;

#define ar array

int main(){
  int n, k;
  cin>>n>>k;
  ar<int, 3> a[n]; //[end time][start time][index]
  for(int i=0; i<n; ++i){
    cin>>a[i][1]>>a[i][0];
    a[i][2]=i;
  }
  sort(a, a+n);
  set<ar<int, 2>> s; //[end time][index](to allow multiple same end times in set)
  int ans=0;
  for(int i=0; i<n; ++i){
    set<ar<int, 2>>::iterator it=s.lower_bound({a[i][1]+1}); //finds the lowest end time after the start time of ith movie
    if(it!=s.begin()){
      --it;
      s.erase(it);
    }
    if(s.size()<k){
      s.insert({a[i][0], a[i][2]});
      ++ans;
    }
  }
  cout<<ans;
}

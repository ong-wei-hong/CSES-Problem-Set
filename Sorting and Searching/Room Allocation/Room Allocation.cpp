#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
  int n;
  cin>>n;
  int ans[n];
  ar<int, 3> a[n]; //stores the departure, arrival and index
  for(int i=0; i<n; ++i){
    cin>>a[i][1]>>a[i][0];
    a[i][2]=i;
  }
  sort(a, a+n);
  set<ar<int, 2>> s;//stores the departure and room num
  for(int i=0; i<n; ++i){
    set<ar<int, 2>>::iterator it=s.lower_bound({a[i][1]});
    if(it!=s.begin()){
      --it;
      ans[a[i][2]]=(*it)[1];
      s.erase(it);
    }else
      ans[a[i][2]]=s.size();
    s.insert({a[i][0], ans[a[i][2]]});
  }
  cout<<s.size()<<endl;
  for(int i=0; i<n; ++i){
    cout<<ans[i]+1<<" ";
  }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> v;
  //v stores the top most cube of each tower
  for(int i=0; i<n; ++i){
    int k;
    cin>>k;
    int index=upper_bound(v.begin(), v.end(), k)-v.begin();
    if(index<v.size()){
      v[index]=k;
    }else{
      v.push_back(k);
    }
  }
  cout<<v.size();
}

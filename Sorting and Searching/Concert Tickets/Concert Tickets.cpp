#include<bits/stdc++.h>
using namespace std;

#define ar array

int main(){
  int n, m;
  cin>>n>>m;
  set<ar<int, 2>> s;
  for(int i=0; i<n; ++i){
    int h;
    cin>>h;
    s.insert({h, i});
  }
  //finds the ticket price just above the asker's price, then prints and deletes the one before that (below or equal to the asked price)
  for(int i=0; i<m; ++i){
    int t;
    cin>>t;
    set<ar<int, 2>>::iterator it=s.lower_bound({t+1, 0});
    if(it==s.begin())
      cout<<-1<<endl;
    else{
      --it;
      cout<<(*it)[0]<<endl;
      s.erase(it);
    }
  }
}

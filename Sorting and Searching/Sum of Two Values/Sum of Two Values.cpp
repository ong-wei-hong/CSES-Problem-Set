#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin>>n>>x;
  map<int, int>m;
  //finds the complementary value and index before printing
  for(int i=0; i<n; ++i){
    int a;
    cin>>a;
    if(m.find(x-a)==m.end())
      m[a]=i;
    else{
      cout<<m[x-a]+1<<" "<<i+1;
      return 0;
    }
  }
  cout<<"IMPOSSIBLE";
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, n;
  cin>>x>>n;
  set<int> s;
  s.insert(0);
  s.insert(x);
  map<int, int> m;
  m[x]=1;
  //s stores the location of lights, m stores the distances between lights
  for(int i=0; i<n; ++i){
    int p;
    cin>>p;
    set<int>::iterator it=s.lower_bound(p);
    int af=*it;
    --it;
    int bf=*it;
    --m[af-bf];
    if(!m[af-bf]){
      m.erase(af-bf);
    }
    s.insert(p);
    ++m[af-p];
    ++m[p-bf];
    cout<<((--m.end())->first)<<" ";
  }
}

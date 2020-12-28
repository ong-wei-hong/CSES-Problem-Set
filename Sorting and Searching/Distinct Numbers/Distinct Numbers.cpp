include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
  int n, num;
  cin>>n;
  set<int> s;
  for(int i=0; i<n; ++i){
    cin>>num;
    s.insert(num);	
  }
  cout<<s.size();
}

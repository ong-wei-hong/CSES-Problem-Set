#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  if(n==1){
    cout<<n;
  }else if(n>3){
    for(int i=2; i<=n; i+=2){
      cout<<i<<" ";
    }
    for(int i=1; i<=n; i+=2){
      cout<<i<<" ";
    }
  }else{
    cout<<"NO SOLUTION";
  }
}

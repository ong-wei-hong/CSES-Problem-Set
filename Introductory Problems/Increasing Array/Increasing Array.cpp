#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  long curr, next, sum=0;
  cin>>n>>curr;
  while(cin>>next){
    if(next<curr){
      sum+=curr-next;
    }else{
      curr=next;
    }
  }
  cout<<sum;
}

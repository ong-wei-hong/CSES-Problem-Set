#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n;
  cin>>n;
  if(n%4==0){
    cout<<"YES"<<endl;
    cout<<n/2<<endl;
    for(long i=1; i<=n; i+=4){
      cout<<i<<" ";
    }
    for(long i=4; i<=n; i+=4){
      cout<<i<<" ";
    }
    cout<<endl<<n/2<<endl;
    for(long i=2; i<=n; i+=4){
      cout<<i<<" ";
    }
    for(long i=3; i<=n; i+=4){
      cout<<i<<" ";
    }
  }else if(n%4==3){
    cout<<"YES"<<endl;
    cout<<n/2+1<<endl;
    for(long i=1; i<=n/2; i+=2){
      cout<<i<<" ";
    }
    for(long i=n/2+1; i<=n; i+=2){
      cout<<i<<" ";
    }
    cout<<endl<<n/2<<endl;
    for(long i=2; i<=n/2; i+=2){
      cout<<i<<" ";
    }
    for(long i=n/2+2; i<=n; i+=2){
      cout<<i<<" ";
    }
  }else{
    cout<<"NO";
  }
}

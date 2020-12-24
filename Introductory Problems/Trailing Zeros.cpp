#include <bits/stdc++.h>
using namespace std;
 
int main(){
  long n, sum=0;
  cin>>n;
  for(long i=5; i<=n; i*=5){
    sum+=n/i;
  }
  cout<<sum;
}

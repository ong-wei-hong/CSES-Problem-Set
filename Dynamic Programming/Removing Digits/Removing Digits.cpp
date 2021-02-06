#include <bits/stdc++.h>
using namespace std;

int n, a[(int)1e6+1];

int main(){
  cin>>n;
  for(int i=1; i<=n; ++i){
    a[i]=1e6;
    int i2=i;
    while(i2){
      a[i]=min(a[i], a[i-i2%10]+1);//goes through all of the integers in the next step, and adds 1 to the lowest result.
      i2/=10;
    }
  }
  cout<<a[n];
}

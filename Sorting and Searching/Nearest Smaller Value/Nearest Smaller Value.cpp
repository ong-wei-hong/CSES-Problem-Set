#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n], nl[n];
  //goes through the previous elements' nearest smaller values while those values are higher than the current element
  for(int i=0; i<n; ++i){
    cin>>a[i];
    nl[i]=i-1;
    while(~nl[i]&&a[nl[i]]>=a[i]) //~ is specifically to change -1 to 0 to prevent errors
      nl[i]=nl[nl[i]];
    cout<<nl[i]+1<<" ";
  }
}

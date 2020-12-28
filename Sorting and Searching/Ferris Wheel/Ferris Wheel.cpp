#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
  int n, x;
  cin>>n>>x;
  int p[n];
  for(int i=0; i<n; ++i)
    cin>>p[i];
  //sort the weights, then see any available pairs, starting with the lightest and heaviest
  sort(p, p+n);
  int pairs=0, i=0, j=n-1;
  while(i<j){
    while(p[i]+p[j]>x){
      --j;			
    }
    if(i>=j)
      break;
    ++pairs, ++i, --j;
  }
  cout<<n-pairs;
}

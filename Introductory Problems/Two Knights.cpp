#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  for(long long i=1; i<=n; i++){
    /*total number of ways to arrange two knights =
      total number of ways to arrange two pieces (1/2 (number of squares * (number of squares-1)) -
      total number of ways for two knights to attack each other (2 * (number of 3*2 rect + number of 2*3 rect)) */
    cout<<i*i*(i*i-1)/2-4*(i-1)*(i-2)<<endl;
  }
}

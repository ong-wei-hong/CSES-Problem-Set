#include <bits/stdc++.h>
using namespace std;
 
void foo(long a, long b){ //if true, a, b equals 2X+3L and X+3L or vice versa
  long gr, ls;
  if(a>b){
    gr=a;
    ls=b;
  }else{
    ls=a;
    gr=b;
  }
  long X=gr-ls;
  long L=(ls-X)/3L;
  if(X<0||L<0){
    cout<<"NO"<<endl;
    return;
  }
  if((2*X+3L*L)==gr){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
 
int main(){
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    long a, b;
    cin>>a>>b;
    foo(a, b);
  }
}

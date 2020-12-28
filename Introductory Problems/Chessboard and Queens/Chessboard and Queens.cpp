#include <bits/stdc++.h>
using namespace std;

int main(){
  string s[8];
  for(int i=0; i<8; ++i)
    cin>>s[i];
  int p[8], ans=0;
  iota(p, p+8, 0);
  do{
    bool valid=1;
    for(int i=0; i<8; ++i) //check if the queens occupies *
      valid&=s[i][p[i]]=='.';
    bool b[15];
    memset(b, 0, 15);
    for(int i=0; i<8; ++i){
      if(b[i+p[i]]) //checks if diagonal 1 is occupied
	valid=0;
      b[i+p[i]]=1;
    }
    memset(b, 0, 15);
    for(int i=0; i<8; ++i){ //checks if diagonal 2 is occupied
      if(b[i+7-p[i]])
	 valid=0;
      b[i+7-p[i]]=1;
    }
    ans+=valid;
  }while(next_permutation(p, p+8)); //generates next queen placement
  cout<<ans;
}

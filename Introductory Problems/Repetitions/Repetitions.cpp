#include<bits/stdc++.h>
using namespace std;

int main(){
  string dna;
  cin>>dna;
  char curr=dna[0];
  long most=1, temp=1;
  for(int i=1; i<dna.length(); i++){
    if(dna[i]==curr){
      temp++;
      if(temp>most){
	most=temp;
      }
    }else{
      temp=1;
      curr=dna[i];
    }
  }
  cout<<most;
}

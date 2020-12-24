#include <bits/stdc++.h>
using namespace std;
 
int main(){
  string s;
  bool check=false;
  cin>>s;
  vector<int> v(26);
 
  for(char c:s){
    v[c-'A']++;
  }
 
  string result;
  for (int i = 0; i < 26; i++){
    if(!(v[i]%2)){
      for(int j = 0; j < v[i]/2; j++) result.push_back(i + 'A');
    }
  }
  for (int i = 0; i < 26; i++){
    if(v[i]%2){
      if(check){
	cout<<"NO SOLUTION";
	return 0;
      }
      for(int j = 0; j < v[i]; j++) result.push_back(i + 'A');
      check=true;
    }
  }
  for (int i = 25; i >= 0; i--){
    if(!(v[i]%2)){
      for(int j = 0; j < v[i]/2; j++) result.push_back(i + 'A');
    }
  }
 
  cout << result << endl;
  return 0;
}

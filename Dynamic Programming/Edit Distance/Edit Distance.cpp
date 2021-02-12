#include <bits/stdc++.h>
using namespace std;

const int maxN=5e3;
int ans[maxN+1][maxN+1]; //ans[i][j] contains the edit distance of s[0..i-1] and t[0..j-1]
string s, t;

int main(){
  cin>>s>>t;
  for(int i=1; i<=s.size(); ++i)
    ans[i][0]=i;
  for(int i=1; i<=t.size(); ++i)
    ans[0][i]=i;
  for(int i=1; i<=s.size(); ++i){
    for(int j=1; j<=t.size(); ++j){
      ans[i][j]=maxN;
      if(s[i-1]==t[j-1]) //if the ith and jth char is the same, edit distance is the same for (i-1)th and (j-1)th
	ans[i][j]=ans[i-1][j-1];
      ans[i][j]=min({ans[i][j], ans[i-1][j-1]+1, ans[i-1][j]+1, ans[i][j-1]+1}); // compares between current, replace, add/remove respectively
    }
  }
  cout<<ans[s.size()][t.size()];
}

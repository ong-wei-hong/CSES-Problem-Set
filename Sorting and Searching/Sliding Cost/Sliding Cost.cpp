#include <bits/stdc++.h>
using namespace std;
 
#define ar array
#define ll long long
 
ll sb, st;
ar<int, 2> med={-1};
set<ar<int, 2>> top, bot;
 
void fix(){
  int m=bot.size()+top.size();
  if(bot.size()<m/2){ //top.size()-1<=bot.size()<=top.size() since the lower number is taken if k is even
    bot.insert(med);
    sb+=med[0];
    med=*top.begin();
    top.erase(med);//moves med to bot and med=smallest number in top
    st-=med[0];
  }
  if(bot.size()>m/2){
    top.insert(med);
    st+=med[0];
    med=*--bot.end();
    bot.erase(med);//moves med to top and med=largest number in bot
    sb-=med[0];
  }
}
 
void add(ar<int, 2> x){
  if(med[0]==-1){
    med=x;
    return;
  }
  if(x<med)//inserts x wrt median
    bot.insert(x), sb+=x[0];
  else
    top.insert(x), st+=x[0];
  fix();
}
 
void rem(ar<int, 2> x){
  if(x== med){ //removes med and med=smallest element in top as top.size()>=bot.size() to ensure balance
    med=*top.begin();
    top.erase(med);
    st-=med[0];
  }else if(x>med)
    top.erase(x), st-=x[0];
  else
    bot.erase(x), sb-=x[0];
  fix();
}
 
int main(){
  int n, k;
  cin>>n>>k;
  int a[n];
  for(int i=0; i<n; ++i)
    cin>>a[i];
  if(k==1){
    for(int i=0; i<n; ++i)
      cout<<0<<" ";
    return 0;
  }
  for(int i=0; i<k-1; ++i)
    add({a[i], i});
  for(int i=k-1; i<n; ++i){
    add({a[i], i}); //using ar<int, 2> allows repeated a[i] values to be stored
    cout<<st-med[0]*(ll)top.size()+med[0]*(ll)bot.size()-sb<<" ";
    rem({a[i-k+1], i-k+1});//removes the first element to be added
  }
}

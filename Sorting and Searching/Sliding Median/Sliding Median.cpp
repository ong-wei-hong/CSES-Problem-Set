#include <bits/stdc++.h>
using namespace std;
 
#define ar array
 
ar<int, 2> med={-1};
set<ar<int, 2>> top, bot;
 
void fix(){
  int m=bot.size()+top.size();
  if(bot.size()<m/2){ //top.size()-1<=bot.size()<=top.size() since the lower number is taken if k is even
    bot.insert(med);
    med=*top.begin();
    top.erase(med);//moves med to bot and med=smallest number in top
  }
  if(bot.size()>m/2){
    top.insert(med);
    med=*--bot.end();
    bot.erase(med);//moves med to top and med=largest number in bot
  }
}
 
void add(ar<int, 2> x){
  if(med[0]==-1){
    med=x;
    return;
  }
  if(x<med)//inserts x wrt median
    bot.insert(x);
  else
    top.insert(x);
  fix();
}
 
void rem(ar<int, 2> x){
  if(x== med){ //removes med and med=smallest element in top as top.size()>=bot.size() to ensure balance
    med=*top.begin();
    top.erase(med);
  }else if(x>med)
    top.erase(x);
  else
    bot.erase(x);
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
      cout<<a[i]<<" ";
    return 0;
  }
  for(int i=0; i<k-1; ++i)
    add({a[i], i});
  for(int i=k-1; i<n; ++i){
    add({a[i], i}); //using ar<int, 2> allows repeated a[i] values to be stored
    cout<<med[0]<<" ";
    rem({a[i-k+1], i-k+1});//removes the first element to be added
  }
}

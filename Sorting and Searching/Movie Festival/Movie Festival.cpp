#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  array<int, 2>movies[n];
  for(int i=0; i<n; ++i)
    cin>>movies[i][1]>>movies[i][0];
  sort(movies, movies+n);
  int ans=0, last=0;
  //find the movie which ends the earliest while the start time is after the end time of the last
  for(int i=0; i<n; ++i){
    if(movies[i][1]>=last){
      ans++;
      last=movies[i][0];
    }
  }
  cout<<ans;
}

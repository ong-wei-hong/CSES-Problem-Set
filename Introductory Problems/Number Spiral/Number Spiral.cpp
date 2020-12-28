#include <bits/stdc++.h>
using namespace std;

long long number(long long row, long long column){
  if(row>column){
    if(row%2==0){
      return row * row - column + 1;
    }else{
      return (row - 1) * (row - 1) + column;
    }
  }else{
    if(column%2==1){
      return column * column - row + 1;
    }else{
      return (column-1)*(column-1) + row;
    }
  }
}
int main(){
  int t;
  cin>>t;
  for(int i=0; i<t; i++){
    long long row, column;
    cin>>row>>column;
    cout<<number(row, column)<<endl;
  }
}

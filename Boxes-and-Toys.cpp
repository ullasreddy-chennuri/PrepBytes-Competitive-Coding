// Question Link: https://mycode.prepbytes.com/problems/fundamentals/BOXTOY


// Solution/code:


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,count=0;
  cin>>n;
  while(n--){
    int a,b;
    cin>>a>>b;
    if((b-a)>1){
      count++;
    }
  }
  cout<<count;
  return 0;
}

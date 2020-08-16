
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/TABLECHAIR


// Solution/Code :


#include <bits/stdc++.h>
using namespace std;

long long int min(long long int n,long long int m){
  if(m<n){
    return m;
  }
  else{
    return n;
  }
}


int main()
{
  //write your code here
  
  int t;
  cin>>t;
  while(t--){
    long long int m,r1,r2,r3;
    cin>>m>>r1>>r2>>r3;
    if(m%4==0){
      cout<<"0"<<endl;
    }
    if(m%4==1){
       long long int x=min(r3,min(r2+r1,r1+r1+r1));
      cout<<x<<endl;
     
    }
    if(m%4==2){
      long long int x=min(r2,min(r1+r1,r3+r3));
      cout<<x<<endl;
    }
    if(m%4==3){
       long long int x=min(r1,min(r3+r2,r3+r3+r3));
      cout<<x<<endl;
    }
  }
  
  return 0;
}


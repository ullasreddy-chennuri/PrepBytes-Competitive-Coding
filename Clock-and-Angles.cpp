
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/CLCKANGLE

// Solution/Code:

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    
    int h,m;
    cin>>h>>m;
    
    int a=((h*60)+m)*(0.5);
    int b=m*6;
    
    int deg1 = a>b?a-b:b-a;
    
    int deg2 = 360-deg1;
    
    cout<<(deg1>deg2?deg2:deg1)<<endl;
  }
  
  return 0;
}

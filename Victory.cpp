
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/VICTORY


// Solution/Code :

#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int l,r;
    cin>>l>>r;
    for(int i=l;i>0;i--){
      int flag=1;
      for(int j=l;j<=r;j++){
        if(j%i!=0){
          flag=0;
          break;
        }
      }
      if(flag==1){
        cout<<i<<endl;
        break;
      }
    }
  }
  
  return 0;
}

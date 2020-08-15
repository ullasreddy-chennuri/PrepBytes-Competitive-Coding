
// Question Link : https://mycode.prepbytes.com/problems/fundamentals/JUGGLER

// Solution/Code :


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    long long int n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
      if(n%2==0){
        n = pow(n,0.5);
        cout<<n<<" ";
      }
      else{
        n = pow(n,1.5);
        cout<<n<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}


// Question Link : https://mycode.prepbytes.com/problems/arrays/MINMAX1


// Solution/Code : 


#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    cout<<a[0]<<" "<<a[n-1]<<endl;
  }
  
  return 0;
}

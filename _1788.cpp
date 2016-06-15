#include <iostream>
using namespace std;
 
int f[1000001];
 
int main(){
   int n, ans[2]={0};
    
   cin>>n;
   if(n==0)
      ans[0]=0;
   else if(n<0){
      n = -n;
      if(n%2==0)
         ans[0]=-1;
      else
         ans[0]=1;
   }
   else
      ans[0]=1;
 
 
   f[1]=1;
   f[2]=1;
   for(int i=3; i<=n; i++){
      f[i] = (f[i-1] + f[i-2])%1000000000;
   }
   ans[1]=f[n];
    
   cout<<ans[0]<<endl;
   cout<<ans[1]<<endl;
 
   return 0;
}

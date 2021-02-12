#include<iostream>
using namespace std;
int main ()
{
    int n,i,sum=0;
    cin>>n;
   if(n<0){
    for(i=1;i>=n;i--){
      sum+=i;

      }
      cout<<sum<<endl;

   }
   else if(n>0)
   {
       for(i=1;i<=n;i++){
        sum+=i;
       }
       cout<<sum<<endl;
   }
   else if(n==0){
    for(i=1;i>=0;i--){
        sum+=i;
    }
    cout<<sum<<endl;
   }

}

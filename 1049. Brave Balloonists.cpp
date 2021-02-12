#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll a[10],i;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    ll mul=1;
    for(i=0;i<10;i++){
        mul*=a[i];
    }
    ll bal=mul;
    ll cnt=0,rem;
    for(i=1;i<=sqrt(bal);i++){
        if(mul%i==0){
             rem=mul/i;

            if(rem==i)cnt+=1;
            else
                cnt+=2;
        }
    }
    cout<<cnt<<endl;
}

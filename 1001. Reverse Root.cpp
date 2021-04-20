#include<bits/stdc++.h>
using namespace std;
double x[128*1024];
int main()
{
    unsigned long long n;
    int i=0;
    while(scanf("%llu",&n)!=EOF){
       x[i++]=(double)sqrt(n*1.0);

    }
       for( ;--i>=0; ){
        //cout<<fixed<<setprecision(4)<<x[i]<<endl;
        printf("%.4lf\n",x[i]);
       }

    return 0;
}

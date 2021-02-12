#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<iomanip>

using namespace std;

//Nayeem Mollick Joy ,Applied Physics & Electronic Engineering ,University of Rajshahi.

int main()

{
    vector<double> v;

    double n;

    while(cin>>n) v.push_back(n);

    for(int i=v.size()-1;i>=0;i--) cout<<setprecision(4)<<fixed<<sqrt(v[i])<<endl;

    return 0;
}

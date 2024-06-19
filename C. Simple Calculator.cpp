#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    long long int s=a+b;
    long long int st=a-b;
    long long int m=b*a;
    cout<<a<<" "<<"+"<<" "<<b<<" "<<"="<<" "<<s<<endl;
    cout<<a<<" "<<"*"<<" "<<b<<" "<<"="<<" "<<m<<endl;
    cout<<a<<" "<<"-"<<" "<<b<<" "<<"="<<" "<<st<<endl;
    return 0;
}

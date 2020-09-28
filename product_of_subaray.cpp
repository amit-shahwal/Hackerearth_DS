#include<bits/stdc++.h>
using namespace std;
int a[10];

int main()
{

    int n;
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];


    int p=1;
    for(int i=0; i<n; i++)
    {
        int k=(n-i)*(1+i);
        int z=a[i];
        int pp=pow(z,k);
        p=p*pp;
    }

    cout<<p;
}

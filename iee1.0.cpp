#include<bits/stdc++.h>
using namespace std;
void kk(string );
void kk(string str)
{
    map<char,int> freq;
    for(int i=0;i<(int)str.size();i++)
    {
        freq[str[i]]++;


    }
 

int xc=0,yc=0,zc=0;
    
    auto itx=freq.find('x');
    if(itx!=freq.end())
    {
        xc=itx->second;
        
    }
    auto ity=freq.find('y');
    if(ity!=freq.end())
    {
        yc=ity->second;
        
    }
    auto itz=freq.find('z');
    if(itz!=freq.end())
    {
        zc=itz->second;
        
    }
  
    if(xc==yc)
    {
        if(xc==zc-1)
        { cout<<"Yes\n";
        return;}
    }
     if(xc==zc)
    {
        if(xc==yc-1)
        {cout<<"Yes\n";
        return;
    }}
      if(yc==zc)
    {
        if(yc==xc-1)
        {cout<<"Yes\n";
        return;
    }}
    cout<<"No\n";
    return;
    
    
}


int main()
{   //int a[1005];
    string a[10000];
    int n;
  //syntax of map
    cin>>n;
    for (int i = 0; i < n ; i++)
    {
        /* code */
        cin>>a[i];
    }

    for (int  i = 0; i < n; i++)
    {
       kk(a[i]);
}

    return 0;

}

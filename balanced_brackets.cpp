
#include <bits/stdc++.h>

using namespace std;

string kk()
{
stack<char>st;
string str;
cin>>str;
if(str.size()%2!=0)
{
	str="NO\n";
	return str;
}

for(int i=0;i<(int)str.size();i++)
{
char ch=str[i];
if(str[i]=='{'|| str[i]== '[' || str[i]=='(')
{	
	st.push(str[i]);
	
}
if(str[i]=='}'|| str[i]== ']' || str[i]==')')
{	
	if(st.empty())
	{return "NO\n";}
	
}

    if(ch=='}')
	{
		if(st.top()=='{')
		st.pop();
	
	}
    if(ch==']')
	{
		if(st.top()=='[')
		st.pop();
		
	}
    if(ch==')')
	{
		if(st.top()=='(')
		st.pop();
		
	
}

}
if(st.empty())
{
return "YES\n";
}

return "NO\n";
}


int main()
{
int n;
cin>>n;
for(int i=0;i<n;i++)
cout<<kk();


}

#include<bits/stdc++.h>
using namespace std;


vector<int> funGame (vector<int> arr) {
   stack<int>st1;
stack<int>st2;
stack<int>st3;
 vector<int>ans;
 for(int i=0;i<(int)arr.size();i++)
 {
    st1.push(arr[i]);
    st2.push(arr[i]);
 }
while(!st2.empty()){
st3.push(st2.top());
st2.pop();}
 while(!st1.empty() && !st3.empty())
 {
    int a=st3.top();
    int b=st1.top();
    if(b>a)
    {
    ans.push_back(2);
    st3.pop();}
    if(b<a)
    {
    ans.push_back(1);
    st1.pop();}
    if(b==a)
    {
    ans.push_back(0);
    st3.pop();
      st1.pop();
    }
 }
 return ans;
}

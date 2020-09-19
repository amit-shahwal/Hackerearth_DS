#include <bits/stdc++.h>

using namespace std;
stack<char>st;
stack<char>st2;

// Complete the superReducedString function below.
string superReducedString(string str) {
 string ans="";
   for(int i=0;i<(int)str.size();i++)
   {
       if(!st.empty())
       {
           if(str[i]==st.top())
            st.pop();
           else{
            st.push(str[i]);
           }
       }
       else{
        st.push(str[i]);
       }

   }
    if(st.empty())
    {
        ans="Empty String";
        return ans;

    }
    while(!st.empty())
    {
        st2.push(st.top());
     st.pop();
    }
     while(!st2.empty())
    {
       ans=ans+st2.top();
     st2.pop();
    }
    cout<<endl;
   return ans;




}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

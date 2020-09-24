#include<bits/stdc++.h>
using namespace std;

int checkp(int x)
{
    for(int j=2;j<x;j++)
      {  if(x%j==0)
        return 0;
      }
    return 1;
}

 vector <vector <int> >ans;
vector<vector<int> > queue_and_stack (vector<int> A) {
   // Write your code here
vector<int>st;
vector<int>q;
   
  
        for(int i=0;i<(int)A.size();i++)
        {
          int pp=checkp(A[i]);
          if(pp==1)
          st.push_back(A[i]);
            else
            q.push_back(A[i]);
        }
        reverse(q.begin(),q.end());
        
ans.push_back(st);
ans.push_back(q);

return ans;

}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i_A=0; i_A<n; i_A++)
    {
    	cin >> A[i_A];
    }

    vector<vector<int> > out_;
    out_ = queue_and_stack(A);
    for(int i_out_=0; i_out_<out_.size(); i_out_++)
    {
    	cout << out_[i_out_][0];
    	for(int j_out_=1; j_out_<out_[i_out_].size(); j_out_++)
    	{
    		cout << " " << out_[i_out_][j_out_];
    	}
    	cout << "\n";
    }
}
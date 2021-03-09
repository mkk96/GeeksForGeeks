#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
  public:
    bool ispar(string x)
    {
        char stack[x.length()];
        int top=-1,i;
        if(!x.length())
        {
            return 1;
        }
        else
        {
            stack[++top]=x[0];
        }
        for(i=1;i<x.length();i++)
        {
            if((stack[top]=='{'&&x[i]=='}')||(stack[top]=='('&&x[i]==')')||(stack[top]=='['&&x[i]==']'))
            {
                top--;
            }
            else
            {
                stack[++top]=x[i];
            }
        }
        if(top==-1)
        {
            return 1;
        }
        return 0;
    }

};
int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  
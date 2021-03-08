// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution{
    public:
    
    string modify (string s)
    {
        int flag=0,i;
        if((int)s[0]>=65&&(int)s[0]<=90)
        {
            flag=1;
        }
        if(flag)
        {
            for(i=1;i<s.length();i++)
            {
                if((int)s[i]>=65&&(int)s[i]<=90)
                {
                    continue;
                }
                else
                {
                    s[i]=(char)((int)s[i]-32);
                }
            }
        }
        else
        {
            for(i=1;i<s.length();i++)
            {
                if((int)s[i]>=65&&(int)s[i]<=90)
                {
                    s[i]=(char)((int)s[i]+32);
                }
                else
                {
                    continue;
                }
            }
        }
        return s;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.modify (s) << endl;
	}
}  // } Driver Code Ends
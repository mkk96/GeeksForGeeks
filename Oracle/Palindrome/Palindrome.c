#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
		string is_palindrome(int n)
		{
		    int hash[10],i,count=0,flag=0;
		    while(n>0)
		    {
		        hash[count++]=n%10;
		        n/=10;
		    }
		    for(i=0;i<count/2;i++)
		    {
		        if(hash[i]!=hash[count-1-i])
		            return "No";
		    }
		    return "Yes";
		}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	string ans = ob.is_palindrome(n);
    	cout << ans <<"\n";
    }
	return 0;
}

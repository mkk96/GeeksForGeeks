#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string armstrongNumber(int n){
        int sum=0,temp=n;
        while(temp>0)
        {
            sum+=(temp%10)*(temp%10)*(temp%10);
            temp/=10;
        }
        if(sum==n)
            return "Yes";
        return "No";
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

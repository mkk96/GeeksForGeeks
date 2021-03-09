#include <bits/stdc++.h>
using namespace std;

int shortestUnorderedSubarray(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) 
            cin >> a[i];
        
        cout << shortestUnorderedSubarray(a, n) << endl;
    }
}
int shortestUnorderedSubarray(int a[], int n)
{
    int i,flag1=0,flag2=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            flag1++;
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag2++;
        }
    }
    if((flag1==n-1&&flag2==0)||(flag1==0&&flag2==n-1))
    {
        return 0;
    }
    else
    {
        return 3;
    }
}
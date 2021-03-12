#include<bits/stdc++.h>
using namespace std;


unordered_map<int, int> m;


int firstRepeated(int *, int);

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        int arr[n];
        
        for(int i = 0 ; i < n ; ++ i ) 
            cin >> arr[i] ;
            
        cout << firstRepeated(arr,n) << "\n";
    }

    return 0;
}

int firstRepeated(int arr[], int n) {
    int max=0,i;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    int *hash=(int *)malloc(sizeof(int)*(max+1));
    *hash=0;
    for(i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(hash[arr[i]]>1)
        {
            return i+1;
        }
    }
    return -1;
}

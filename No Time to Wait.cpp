#include <iostream>
using namespace std;

int main() {
    
    int n,h,x,arr[n];
    cin>>n>>h>>x;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int j;
    
    for( j=0;j<n;j++)
    {
        if((arr[j]+x) == h)
        {
            break;
        }
    }
    
    if(arr[j]+x == h)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
	// your code goes here
	return 0;
}


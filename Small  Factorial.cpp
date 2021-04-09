#include <iostream>
using namespace std;

int main() {
    
    int i,n,t;
    cin>>t;
    int fact;
    
    while(t>0)
    {
        cin>>n;
        fact=1;
        if(n<=20)
        {
            for(i=1;i<=n;i++)
            {
             fact = fact*i;   
            }
            
            cout<<fact;
        }
        
        cout<<endl;
        t--;
    }
	// your code goes here
	return 0;
}


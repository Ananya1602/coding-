#include <iostream>
using namespace std;

int main() {
    
    int t;
    
    cin>>t;
    
    while(t>0)
    {
        int a,b,c;
        cin >>a>>b>>c;
        
        
        
        if ((a+b+c)==180)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        cout<<endl;
        t--;
    }
    
	// your code goes here
	return 0;
}


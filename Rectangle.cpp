#include <iostream>
using namespace std;

int main() {
    
    int a,b,c,d,t;
    cin>>t;
    
    while(t>0)
    {
        cin>>a>>b>>c>>d;
        
        if ((a==b)&&(c==d))
        {
            cout<<"YES";
        }
       else if ((a==c)&&(b==d))
        {
            cout<<"YES";
        }
        else if ((a==d)&&(c==b))
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
        t--;
       cout<<endl;
        
    }
	// your code goes here
	return 0;
}


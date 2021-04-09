#include <iostream>
using namespace std;

int main() {
    int t,n;
    
    cin>>t;
    while(t>0)
    {
        cin>>n;
        if ((n<=20) &&(n>=-20))
        {
            if (n<10)
            {
                cout<<("Thanks for helping Chef!");
            }
            else
            {
                cout<<"-1";
            }
        }
        
        t--;
        cout<<endl;
    }
	// your code goes here
	return 0;
}


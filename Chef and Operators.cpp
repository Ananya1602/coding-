#include <iostream>
using namespace std;

int main() {
    
    int t,n,num1,num2;
    cin>>t;
    
    while(t>0)
    {
        cin>>num1>>num2;
        
        if(num1>num2)
        {
            cout<<'>';
        }
       else if(num1<num2)
        {
            cout<<'<';
        }
        else
        {
            cout<<'=';
        }
        
        cout<<endl;
        t--;
    }
	// your code goes here
	return 0;
}


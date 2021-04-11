#include <iostream>
using namespace std;

int main() {
    
    int t,d,num;
    cin>>t;
    
    while(t>0)
    {
        cin>>d>>num;
        int i=d,sum;
        
        for(;i>0;i--)
        {
            sum= (num*(num+1))/2;
            num=sum;
        }
        
        cout<<sum;
        cout<<endl;
        t--;
    }
	// your code goes here
	return 0;
}


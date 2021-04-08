#include <iostream>
using namespace std;

int main() {
    
    int t,num,i,m;
    cin>>t;
    
    while(t>0)
    {
        int sum=0;
        cin>>num;
        i=num;
        for(;i>=1;)
        {
            m= i%10;
            sum=sum+m;
           i=i/10; 
        }
         cout<<sum;
        cout<<endl;
        t--;
    }
    
   
    
    
	// your code goes here
	return 0;
}


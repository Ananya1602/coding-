#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
    int t,num,p,m;
    cin>>t;
    
    while(t>0)
    {
		int nu;
        cin>>num;
		nu=num;
        int i,rev=0,count=0;
        
        // count number of digits 
        
        for(;num>0;num=num/10)
        {
            p=num%10;
            count++;
        }
        
        for(i=1;i<=count;i++)
        {
            
        
            m=nu%10;
            rev = rev +(m*(pow(10,(count-i))));
           nu=nu/10;
         
        }
        cout<<rev;           
        t--;
        cout<<endl;
    }
	// your code goes here
	return 0;
}


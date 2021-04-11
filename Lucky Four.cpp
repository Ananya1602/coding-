#include <iostream>
using namespace std;

int main() {
	
	int num,t;
	cin>>t;
	
	while(t>0)
	{
	    cin>>num;
	    int dig,count=0;
	    
	    for(;num>0;num=num/10)
	    {
	        dig=num%10;
	        
	        if(dig==4)
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	    t--;
	    
	}
	
	return 0;
}



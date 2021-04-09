#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
    int num,t;
    cin>>t;
    
    while(t>0)
    {
        cin>>num;
        int dig,i,nu,count=0,sum,p;
        nu = num;
        
        for(;num>0;num=num/10)     // count number of digits 
        {
            dig=num%10;
            count++;
        }
       int n= (pow(10,(count-1)));
        
      sum = (nu%10) + ((nu/n)%10);
      cout<<sum;
        
        t--;
        cout<<endl;
    }

	return 0;
}


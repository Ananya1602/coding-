#include <iostream>
using namespace std;
 void res(int num)
{
   if(num==1)
   {
       cout<<"1";
   }
   else if(num==2)
   {
       cout<<"2";
   }
   else if (num==3)
   {
       cout<<"3";
   }
   else
   {
       cout<<"More than 3 digits";
   }
}

int main() {
    
    int n;
    cin>>n;
    int dig,count=0;
    
    for(;n>0;n=n/10)
    {
        dig=n%10;
        count++;
    }
    
    res(count);
    
	// your code goes here
	return 0;
}


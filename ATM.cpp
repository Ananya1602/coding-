#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	// your code goes here
	
    int amt ;
    float total,bal;
    cin>>amt;
    cin>>total;
    
    if((amt%5==0) && ((amt+0.5)<=total ))
    {
        bal = (total-(amt+ 0.5)) ;
   cout<<bal<<setprecision(3);
    }
    else
    {
        cout<<total;
    }
	return 0;
}


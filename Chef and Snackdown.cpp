#include <iostream>
using namespace std;

int main() {
    
    int t,year;
    cin>>t;
    
    while(t>0)
    {
        cin>>year;
        
        if((year==2010)||(year==2015)||(year==2016)||(year==2017)||(year==2019))
        {
            cout<<"HOSTED";
        }
        else
        {
            cout<<"NOT HOSTED";
        }
        
        cout<<endl;
        t--;
    }
	// your code goes here
	return 0;
}


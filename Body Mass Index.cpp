#include <iostream>
#include<cmath>
using namespace std;

int main() {
    
    int t,m,h,bmi;
    cin>>t;
    
    while(t>0)
    {
        cin>>m>>h;
        
        bmi = (m/(pow(h,2.0)));
        
        if(bmi<=18)
        {
            cout<<"1";
        }
        else if ((bmi>=19)&&(bmi<=24))
        {
            cout<<"2";
        }
        else if((bmi>=25)&&(bmi<=29))
        {
            cout<<"3";
        }
        else if(bmi>=30)
        {
            cout<<"4";
        }
        
        t--;
        cout<<endl;
    }
    
	// your code goes here
	return 0;
}


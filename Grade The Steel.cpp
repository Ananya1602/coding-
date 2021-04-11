#include <iostream>
using namespace std;

int main() {
    
    int t;
    float hard,carbon,tensile;
    
    cin>>t;
    
    while(t>0)
    {
        cin>>hard>>carbon>>tensile;
        
        if ((hard>50)&&(carbon<0.7)&&(tensile>5600))
        {
         cout<<"10";   
        }
        else if   ((hard>50)&&(carbon<0.7)&&(tensile<=5600))
        {
            cout<<"9";
        }
        else if ((hard<=50)&&(carbon<0.7)&&(tensile>5600))
        {
            cout<<"8";
        }
        else if  ((hard>50)&&(carbon>=0.7)&&(tensile>5600))
        {
            cout<<"7";
        }
        else if ((hard<=50)&&(carbon>=0.7)&&(tensile<=5600))
        {
            cout<<"5";
        }
        else
        {
            cout<<"6";
        }
        t--;
        cout<<endl;
    }
	// your code goes here
	return 0;
}


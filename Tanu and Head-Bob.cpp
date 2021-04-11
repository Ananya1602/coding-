#include <iostream>
using namespace std;

int main() {
    
    int n,l;
    char str[l];
    cin>>n;
    
    while(n>0)
    {
        cin>>l;
        
        for(int i=0;i<l;i++)
        {
            cin>>str[i];
        }
        
        int foreign=0,indian=0;
        
        for(int j=0;j<l;j++)
        {
            if(str[j]=='Y')
            {
                foreign++;
            }
            else if(str[j]=='I')
            {
                indian++;
            }
        }
        
        if(foreign>0)
        {
            cout<<"NOT INDIAN";
        }
        else if(indian>0)
        {
            cout<<"INDIAN";
        }
        else
        {
            cout<<"NOT SURE";
        }
        
        cout<<endl;
        n--;
    }
	// your code goes here
	return 0;
}


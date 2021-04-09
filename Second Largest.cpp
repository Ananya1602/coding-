#include <iostream>
using namespace std;

int main() {
    
    int a,b,c,t;
    cin>>t;
    while (t>=1)
    {
        cin>>a>>b>>c;
        
        if(((a>b) &&(a<c)) ||((a>c)&&(a<b)))
        {
            cout<<a;
        }
        else if(((b>a)&&(b<c)) || ((b<a)&&(b>c)))
        {
            cout<<b;
        }
        else
        {
            cout<<c;
        }
        cout<<endl;
        t--;
    }
	// your code goes here
	return 0;
}


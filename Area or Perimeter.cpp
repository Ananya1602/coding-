#include <iostream>
using namespace std;

int main() {
    
    int l,b;
    cin>>l>>b;
    
    int peri=2*(l+b);
    int area = (l*b);
    
    if(peri>area)
    {
            cout<<"Peri"<<endl<<peri;
    }
    else if(area>peri)
    {
        cout<<"Area"<<endl<<area;
    }
    else
    {
        cout<<"Eq"<<endl<<peri;
    }
	// your code goes here
	return 0;
}


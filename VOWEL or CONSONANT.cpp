#include <iostream>
using namespace std;

int main() {
    
    char letter;
    cin>>letter;             // upper case only 
    
    if((letter=='A')||(letter=='E')||(letter=='I')||(letter=='O')||(letter=='U'))
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Consonant";
    }
	// your code goes here
	return 0;
}


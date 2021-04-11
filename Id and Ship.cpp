#include <iostream>
using namespace std;

int main() {
    
    int t;
    char class_id;
    cin>>t;
    
  while(t>0)
  {
   cin>>class_id;   // BattleShip ,Destroyer ,Cruiser,Frigate
   
   switch(class_id)
   {
       case 'b':
       cout<<"BattleShip";
       break;
       
        case 'B':
       cout<<"BattleShip";
       break;
       
        case 'c':
       cout<<"Cruiser";
       break;
       
        case 'C':
       cout<<"Cruiser";
       break;
       
        case 'D':
       cout<<"Destroyer";
       break;
       
        case 'd':
       cout<<"Destroyer";
       break;
       
        case 'f':
       cout<<"Frigate";
       break;
       
        case 'F':
       cout<<"Frigate";
       break;
       
        default:
        cout<<" ";
   }
   
     t--;
       cout<<endl;
  }
  
    
    
	// your code goes here
	return 0;
}


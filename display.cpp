#include <iostream>
#include "area.h"
using namespace std;
 
int main(){

    int radius,lenght,breath, choice;
    
     long long result;
    cout<<"1 = Circle_Area \n";
    cout<<"2 = Circle Circumfarence \n";
    cout<<"3 = Rectangle_Area \n";
    cout<<"4 = Rectangle_Parimeter \n";
    cout<<"5 = Triangle_Area \n";
    cout<<"6 = Hypotneous \n";
    cout<<"7 = Square_Area \n";

    cout<<"Enter Your Choice : ";
    cin>>choice;

    switch(choice){

       case 1:
       cout<<"Enter Radius : ";
       cin>>radius;
       result = circle_Area(radius);
       cout<<"Circle_Area : "<<result;
       break;
              
        case 2:
       cout<<"Enter Radius : ";
       cin>>radius;
       result = circle_circumfarence(radius);
       cout<<"circle_circumfarence : "<<result;
       break;

        case 3:
       cout<<"Enter Lenght : ";
       cin>>lenght;
       cout<<"Enter Breath : ";
       cin>>breath;
       result = rectangle_area(lenght,breath);
       cout<<" Rectangle_Area : "<<result;
       break;

        case 4:
        cout<<"Enter Lenght : ";
       cin>>lenght;
       cout<<"Enter Breath : ";
       cin>>breath;
       result =  rectangle_Parimeter(lenght,breath);
       cout<<"Rectangle_Parimeter : "<<result;
       break;

        case 5:
        cout<<"Enter Lenght : ";
       cin>>lenght;
       cout<<"Enter Breath : ";
       cin>>breath;
       result =  triangle_area(lenght,breath);
       cout<<" Triangle_Area : "<<result;
       break;

        case 6:
       cout<<"Enter Base  : ";
       cin>>lenght;
       cout<<"Enter Perpendiculer : ";
       cin>>breath;
       result = Hypotneous(lenght,breath);
       cout<<"  Hypotneous : "<<result;
       break;

        case 7:
       cout<<"Enter side : ";
       cin>>lenght;
       result = square(lenght);
       cout<<"Square_Area : "<<result; 


    }

    return 0;
}
//for compilation g++ -Wall -Wextra display.cpp area.cpp -o area_app
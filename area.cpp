#include<iostream>
#include<cmath>

#include "area.h"

using namespace std;

long long circle_Area(int radius){
         if (radius == 0){
            cout<<"Radius of Circle is Zero ! \n ";
            return 0;
         }
         else{

        return  3.14 * pow(radius,2);
        
        }
}

long long circle_circumfarence(int radius){
         if (radius == 0){
            cout<<"Radius of Circle is Zero ! \n ";
            return 0;
         }
     
          return 2*3.14 * radius;
       
}
long long rectangle_area(int lenght,int breath){
         if (lenght== 0||breath==0){
            cout<<"May be Lenght or Breath is Zero ! \n ";
            return 0;
         }
          else 
        return lenght * breath;
        
}

long long rectangle_Parimeter(int lenght,int breath ){
         if (lenght== 0||breath==0){
            cout<<"May be Lenght or Breath is Zero ! \n ";
            return 0;
         }
      
       return  2 *(lenght + breath);
         
}

long long triangle_area( int lenght,int breath ){
     if (lenght== 0||breath==0){
            cout<<"May be Lenght or Breath is Zero ! \n ";
            return 0;
         }
        return 0.5 * lenght * breath;
        
}

long long Hypotneous(int base , int perpendicular){
     base = pow(base, 2 );
     perpendicular = pow(perpendicular,2);
     int add = base +  perpendicular;
      return pow(add,0.5);
      
}

long long square(int side ){
    
    return   pow(side,2);
     
}
#include <iostream>
#include <cmath>
using namespace std;

double discrement(double a, double b, double c){
    
   return pow(b,2) - (4*a*c);

}

double distinct_root_N(double a, double b, double c){
          
         return (-b- (pow(discrement(a,b,c),0.5)) )/2*a;
      

}
double distinct_root_p(double a, double b, double c){

      return (-b+ sqrt(discrement(a,b,c)) )/2*a;
      

}

double real_root(double a, double b){
   
       return -b/(2 * a);
    
}

void complex_root(double a, double b, double c){

    int n=sqrt(-(discrement(a,b,c))) /2*a;
    int x = real_root(a,b) + n;
    cout<<x<<"+"<<n<<"i";
    
}



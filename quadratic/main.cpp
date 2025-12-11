#include <iostream>

#include "quad_eq.h"

using namespace std;

int main(){
   double a , b , c ,result;
  cout<<"Enter cofficient of X^2 : \n";
  cin>>a;
   cout<<"Enter cofficient of X^1 : \n";
  cin>>b;
   cout<<"Enter constant: \n";
  cin>>c;
     double d =discrement(a,b,c);
   if(d>0){
    
    result = distinct_root_p(a,b,c);
    cout<<"Distinct_Root of X 1 =  "<<result;

    
    result = distinct_root_N(a,b,c);
    cout<<"Distinct_Root of X 2 =  "<<result;
    }
    else if(d==0){
        result = real_root(a,b);
        cout<<" Real_Root ! "<<result;
    }
    else if(d<0){
        cout<<" Complex_Root ! ";
        complex_root(a,b,c);
        
    }
return 0;
}
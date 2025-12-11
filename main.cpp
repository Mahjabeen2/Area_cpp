#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 ||n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
   int f = factorial(num);
   cout<<f;

    return 0;
}

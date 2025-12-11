#include <iostream>
using namespace std;

void transpose(int array[][3]){

    cout<<"Your Entered 3x3 Matrix is : "<<endl;
     for(int j=0; j<3; j++){
    for(int i=0; i<3; i++){
        
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int size=3;
    int array[3][3];
    
    cout<<"Enter 3x3 Matrix : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>array[i][j];
        }
    }
    cout<<"Your Entered 3x3 Matrix is : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

   transpose(array);
   return 0;
        }


#include <iostream>
using namespace std;
 int main(){
    for( int row=0;row<10;row++ ){
        for(int col=0;col<row+1; col++){
          cout<<"*";
        }
        cout<<endl;
    }
 }
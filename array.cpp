#include <iostream>
using namespace std;

int sum(int arr[], int n);
int main(){
    int arr[5];
    for( int i=0; i<5; i++ ){
        cin>>arr[i];
        cout<<endl;

    }
  int res=sum(arr,5);
  cout<<res<<endl;
  
}
int sum(int arr[], int n){
    int result=0;
    for(int i=0; i<n; i++){
        result = result + arr[i];
    }
    return result;

}
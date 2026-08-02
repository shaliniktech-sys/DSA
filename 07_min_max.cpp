#include<iostream>
using namespace std;
void createAnArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< "enter the element"<<endl;
        cin>> arr[i];
    }
}
void maxInArray(int arr[], int size){
 int max= arr[0];
 for(int i=0;i<size;i++){
    if(arr[i]>max){
        max=arr[i];
    }
 }
cout<< "Maximum in the array is: "<<max;
}
 void minInArray(int arr[], int size){
 int min= arr[0];
 for(int i=0;i<size;i++){
    if(arr[i]<min){
        min=arr[i];
    }
 }
 cout<< "Minimum in the array is: "<<min;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>> size;
    createAnArray(arr, size);
    cout<<endl;
    maxInArray(arr, size);
    cout<<endl;
    minInArray(arr, size);
        return 0;
}

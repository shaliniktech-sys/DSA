#include<iostream>
using namespace std;
void createAnArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< "enter the element"<<endl;
        cin>> arr[i];
    }
}
void reverseAnArray(int arr[], int size){
    int temp=0;
    for(int i=0;i<(size/2); i++){
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }
}
void printAnArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>> size;
    createAnArray(arr, size);
    cout<<"Before reversed"<<endl;
    printAnArray(arr, size);
    cout<<"After reversed"<<endl;
    reverseAnArray(arr, size);
    printAnArray(arr, size);
        return 0;
}

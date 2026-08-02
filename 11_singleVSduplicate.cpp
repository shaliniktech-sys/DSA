#include<iostream>
using namespace std;
void createAnArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< "enter the element"<<endl;
        cin>> arr[i];
    }
}
void singleVsDuplicate(int arr[], int size){
    int ans=0;
    for(int i=0;i<(size); i++){
       ans=(ans^arr[i]);
    }
    cout<< "The single element is: "<< ans;
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
    cout<<"The array is as follows:"<< endl;
    printAnArray(arr, size);
    
    singleVsDuplicate(arr, size);
    
        return 0;
}

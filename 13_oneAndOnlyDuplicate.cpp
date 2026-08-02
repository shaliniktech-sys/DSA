#include<iostream>
#include<math.h>
using namespace std;
void createAnArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< "enter the element"<<endl;
        cin>> arr[i];
    }
}

void oneAndOnlyDuplicate(int arr[], int size){
   int index= 0;
   for(int i=0; i<size; i++){
    index= abs(arr[i])-1;
    if(arr[index]>0){
    arr[index]= -arr[index];}
    else{
        cout<<"The one and only duplicate element is"<< abs(arr[i])<<endl;
    }
   }
}
void printAnArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int arr2[100];
    int arr[100];
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>> size;
    createAnArray(arr, size);
    cout<<"The array is as follows:"<< endl;
    printAnArray(arr, size);
    
    oneAndOnlyDuplicate(arr, size);
    
        return 0;
}

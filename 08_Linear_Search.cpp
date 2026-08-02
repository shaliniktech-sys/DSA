#include<iostream>
using namespace std;
void createAnArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<< "enter the element"<<endl;
        cin>> arr[i];
    }
}
void linearSearch(int arr[], int size, int key){
    int flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
          flag=1;
          break;
        }
    }
    if(flag==1){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array:"<<endl;
    cin>> size;
    int key;
    createAnArray(arr, size);
    cout<<endl;
    cout<<"Enter element to be searched"<<endl;
    cin>> key;
    linearSearch(arr,size,key);
        return 0;
}

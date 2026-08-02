#include<iostream>
using namespace std;
void printArray(int number[], int size){
    for(int i=0; i<size; i++){
        cout<< number[i]<< endl;
    }

}
int main(){
    int number[10]={0};
    int size=0;
    cout<< "Enter size of array:";
    cin>> size;
    printArray(number,size);
    return 0;
}

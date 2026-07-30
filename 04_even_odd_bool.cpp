#include<iostream>
using namespace std;
//even odd function
bool isEven(int n){
    //1->odd
    //2->even
    if(n&1){
        return 1;
    }
    else{
    return 0 ;
}}
int main(){
    int n;
    cout<< "Enter a number"<<endl;
    cin>> n;
    if(isEven(n)){
        cout<<"odd"<<endl;
    }
    else{
        cout<< "even";
    }
    return 0;

}

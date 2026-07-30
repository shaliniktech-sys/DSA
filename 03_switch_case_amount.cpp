#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount" <<endl;
    cin>> amount;
   switch(1){
    case 1: {
        int x100= amount/100;
        cout<< "Total 100 ruppee notes required: "<< x100<<endl;
        amount=amount%100;
    }
    case 2: {
        int x50= amount/50;
        cout<< "Total 50 ruppee notes required: "<< x50<<endl;
        amount=amount%50;
    }
    case 3: {
        int x20= amount/20;
        cout<< "Total 20 ruppee notes required: "<< x20<<endl;
        amount=amount%20;
    }
    case 4: {
        int x10= amount/10;
        cout<< "Total 1 ruppee notes required: "<< x10<<endl;
        amount=amount%10;
    }
    case 5: {
        int x1= amount/1;
        cout<< "Total 10 ruppee notes required: "<< x1<<endl;
        break;
    }
    default: {cout<<"Enter correect amount"<<endl;}
   }
    return 0;
}

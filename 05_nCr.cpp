#include<iostream>
using namespace std;

int nCr(int n){
    int factn=1;
    for(int i=1;i<=n;i++){
        factn=factn*i;
    }
    return factn;
}
int main(){
    int n,r;
    cout<< "Enter n:";
    cin>> n;
 cout<< "Enter r:";
    cin>> r;
    if(r>n){
        cout<< "invalid input";
    }
   cout<< nCr(n)/(nCr(r)*nCr(n-r));
    return 0;
}

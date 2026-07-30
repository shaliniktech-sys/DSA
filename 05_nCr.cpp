#include<iostream>
using namespace std;

int nCr(int n, int r){
    int factn=1;
    for(int i=1;i<=n;i++){
        factn=factn*i;
    }
    int factr=1;
    for(int i=1;i<=r;i++){
        factr=factr*i;
    }
    int factrn=1;
    for(int i=1;i<=(n-r);i++){
        factrn=factrn*i;
    }
    return (factn)/(factr*factrn);
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
   cout<< nCr(n,r);
    return 0;
}

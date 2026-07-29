#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number:"<<endl;
    cin>> n;
    int i=0;
    int ans=0;
    while(n!=0){
        int bit= n&1;
        n=n>>1;
        ans = (pow(10,i)*bit)+ ans;
        i++;
    }
    cout<<"Answer is:"<<ans;
    return 0;
}

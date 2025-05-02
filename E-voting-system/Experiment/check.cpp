#include <iostream>
using namespace std;

int main(){
    int n=15,t=4;
    while(n>=1 && n<=100){
            int pro=1;
            int n2 = n;
            while(n2!=0){
                int rem = n2%10;
                n2/=10;
                pro *=rem;
            }   
                if(pro%t==0){cout<<n;
                break;}
                else{n++;}
        }
}
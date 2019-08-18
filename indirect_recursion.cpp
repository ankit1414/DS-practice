#include<iostream>
using namespace std;
void funB(int );
void funA(int a){

    if(a > 0){
        cout<<a<<" ";
        funB(a-2);
    }
}

void funB(int b){

    if(b>1){
        cout<<b<<" ";
        funA(b/2);
    }
}

int main(){

    funA(28);
    return 0;



}

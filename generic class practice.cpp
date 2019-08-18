#include<iostream>
using namespace std;

template<typename T>
class myclass{

    private:
        T a;
        T b;

    public:

        myclass(T a , T b){

            this->a = a;
            this->b = b;

        }

        myclass(){

            a = 1;
            b = 1;

        }

        T add(){
            return a+b;
        }

        T subtract(){
            return a-b;
        }

        T multiply(){
            return a*b;
        }
};

int main(){

    myclass<int> obj(10 ,5);

    cout<<obj.add()<<endl;
    cout<<obj.subtract()<<endl;
    cout<<obj.multiply()<<endl;

    return 0;
















}











































#include<bits/stdc++.h>
using namespace std;

class B{

    public:
    int n;

    /*void operator+ (B &obj){
        cout<<"Answer is: "<<this->n-obj.n;
    }*/

    B operator+ (B &obj){
        B b;
        b.n = this->n-obj.n;
        return b;
    }

};



int main(){

    B b1,b2,b3;
    b1.n=8;
    b2.n=5;
    b3.n=2;

    //b1 + b2;
    //b1 + b2 + b3;  //error.
    //b1 + (b2 + b3); //error.

    B b4;
    b4 = b1 + b2 + b3;
    cout<<b4.n<<endl;

    return 0;
}
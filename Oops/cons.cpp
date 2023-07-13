#include<bits/stdc++.h>
using namespace std;

class base{

    public:
    base(){
        cout<<"Constructor base "<<endl;
    }

    /*void s1(){
        cout<<"In s1"<<endl;
    }*/

    //virtual void solve()=0; //cannot create object for base class if there is a pure virtual function. base *b =new derived() will work.

    /*virtual ~base(){
        cout<<"Destructor base "<<endl;
    }*/

     ~base(){
        cout<<"Destructor base "<<endl;
    }
    //virtual ~base()=0;  // destructor cannot be pure virtual.

};


class derived: public base{

    public:
    derived(){
        cout<<"Constructor Derived "<<endl;
    }

    /*~base(){
        cout<<"Destructor derived base"<<endl;
    }*/   //Wrong declaration.

    void solve(){
        cout<<"IN Solve"<<endl;
    }

    ~derived(){
        cout<<"Destructor derived "<<endl;
    }


};


int main(){


   //derived d;  //without using virtual normal order.
   //derived d;  // with virtual normal order.
    //derived d;
    //d.s1();

    /*base *b = new derived();
    b->solve();*/

    base* b=new derived(); // if we run only this statement it will the output of base and derived constructor.
    delete b; // using this with above gives normal order.

    //base* b = new base[2];
    //delete[] b;

  //base *b=new base(); // for dynamic allocation we have to delete manually to execute destructor.

  
    

    return 0;
}
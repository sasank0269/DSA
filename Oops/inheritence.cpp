#include<bits/stdc++.h>
using namespace std;

class Animal{

    public:
    void sound(){
        cout<<"Animal is shouting...... "<<endl;
    }

    void run(){
        cout<<"Animal is running......"<<endl;
    }

    virtual void play(){
        cout<<"Animal is playing..."<<endl;
    }

    virtual void eat()=0;
};

class cat:public Animal{

    public:
    void meow(){
        cout<<"Meow...Meow...."<<endl;
    }
    void run(){
        cout<<"Animal is running..."<<endl;
    }
};


class rat:public Animal{

    private:
    void play(){
        cout<<"Rat is playing...."<<endl;
    }
    void eat(){
        cout<<"Rat is eating...."<<endl;
    }

};

class human:private Animal{

    public:
    void eat(){
        cout<<"He is eating..."<<endl;
    }



};

int main(){

/*
    Animal *a=new cat();
    a->meow();     //Error.
    a->run();   //executes animal class function.
    a->sound(); //executes animal class function.
*/

/*
    cat *c=new Animal(); //Error, cannot assign parent class to child class.
    c->meow();
    c->run();
    c->sound();
*/

/*
    Animal *a=new rat();
    a->play();
    a->eat();
*/


/*
    Animal *a=new human(); //error.
    a->eat();
*/
    return 0;

}
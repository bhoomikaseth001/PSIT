#include<iostream>
using namespace std;
class Base{
    protected:
        int protectedVar;
    public:
    Base(int value) : protectedVar(value){}
        void printProtectedVar() const
        {
            cout<<"Protected variable : "<<protectedVar<<std::endl;
        }
};
class Derived : public Base{
    public:
    Derived (int value):Base(value){}
    void modifyProtectedVar(int value){
        protectedVar=value;
    }
};
int main(){
    Derived derivedObj(42);
    //Access and print protectedVar usinf the printProtectedVar func.
    derivedObj.printProtectedVar();
    derivedObj.modifyProtectedVar(100);
    derivedObj.printProtectedVar();

}
/*OUTPUT :
Protected variable : 42
Protected variable : 100  */


/* Notes:
-> public and protected members of Baseclass become public and protected member of Derived class.
-> private members of Base remain inaccessibile to derived class.
-> Constructor inheritance : 
    the base class has a constructor that takes an integer pararmeter and initialize it's protected member (protectedVar) 
    when the object of derived is created , the constructor of the base is automatically called to initialize the base part of the derived object
-> Accessing protected members: 
    the derivred class can access the protected member (protectVar) unherited from base class. It uses this access to modify protected variable(protectedVar) in the modifyProtectedVar function
-> Function inheritace : 
    the base class has a public member function printProtectedVar that prints the value of protected variable since protectedVar is accesible to derived, derived can call printProtectedVar to display the value of protectedVar*/

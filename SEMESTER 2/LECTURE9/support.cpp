#include <iostream>
extern double warming;
void update(double dt);
void local();
using std::cout;
void update(double dt){
    extern double warming ;
    warming+=dt;// uses global warming
    cout<<"Updating global warming to "<<warming;
    cout<<"degree.\n";

}
void local(){ //uses local variable
    double warming =0.8;
    cout << "Local warming ="<<warming<<"degree.\n";
    //Access global variable with the scpope resolution operator
    cout<<"But global warming ="<<::warming;
    cout<<"degree.\n";
}

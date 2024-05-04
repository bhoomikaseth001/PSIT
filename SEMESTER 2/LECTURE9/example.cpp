#include<iostream>
extern int apple;
static int spinach=10;
static int rose =200;

void remote_access(){
    using namespace std;
    cout<<"remote_access() report the following addresses :\n";
    cout<<apple<<"\t\t"<<&apple<<" =&apple, "<<endl;
    cout <<spinach<<"\t\t"<<&spinach<<" =&spinach, "<<endl ;
    cout<<rose<<"\t\t"<<&rose<<" =&rose, "<<endl;
}

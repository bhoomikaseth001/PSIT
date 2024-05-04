#include<iostream>
int apple =3;
int spinach=30;
static int rose=300;
void remote_access();
int main()
{
    using namespace std;
    cout<<"main() reports the following address: \n";
    cout<<apple<<"\t\t"<<&apple<<" =&apple, "<<endl;
    cout <<spinach<<"\t\t"<<&spinach<<" =&spinach, "<<endl ;
    cout<<rose<<"\t\t"<<&rose<<" =&rose, "<<endl;
    remote_access();
}
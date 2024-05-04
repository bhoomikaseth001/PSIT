#include<iostream>
template<typename T>
void Swap(T &a,T &b);
int main(){
    using namespace std;
    int i=10;
    int j=20;
    cout<<"i,j= "<<i<<" , "<<j<<"\n";
    cout<<"Using compiler generated int swapper\n";
    Swap(i,j);
    cout<<"Now i,j= "<<i<<" , "<<j<<"\n";

    double x=24.5;
    double y=54.2;
    cout<<"x,y= "<<x<<" , "<<y<<"\n";
    cout<<"Using compiler generated int swapper\n";
    Swap(x,y);
    cout<<"Now x,y= "<<x<<" , "<<y<<"\n";
}
    template <typename T>
    void Swap(T &a, T &b)
    {
        T temp= a;
        a=b;
        b=temp;
    }


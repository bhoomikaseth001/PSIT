#include<iostream>
using namespace std;

class MyClass{
    //private
    int privateData;
    public:
    void setPrivateData(int data){
        privateData=data;
    }
    int getPrivateData(){
        return privateData;
    }
};
int main(){
    MyClass obj;
    obj.setPrivateData(42000);
    //obj.privateData
    cout<<"Private data is "<<obj.getPrivateData()<<endl;
    //cout<<obj.privateData;
}
/*OUTPUT:
Private data is 42000*/
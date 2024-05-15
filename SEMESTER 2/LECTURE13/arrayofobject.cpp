#include <iostream>
using namespace std;
class employee
{
    char name[30];
    int age;
    public:
    void getdata(void);
    void putdata(void);
};
void employee :: getdata(void)
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter age:";
    cin>>age;
}
void employee :: putdata(void)
{
    cout<<"name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
}
const int size=3;
int main()
{
    employee manager[size];
    for (int i=0;i<size;i++){
        cout<<"detail "<<i+1<<"\n";
        manager[i].getdata();
    }
    cout<<"\n";
    for (int i=0;i<size;i++){
        cout<<"\n manager"<<i+1<<"\n";
        manager[i].putdata();
    }
    return 0;
}
/*OUTPUT :
detail 1
enter name:Manya
enter age:45
detail 2
enter name:Abhinav
enter age:38
detail 3
enter name:Navanshi
enter age:36

 manager1
name :Manya
age :45

 manager2
name :Abhinav
age :38

 manager3
name :Navanshi
age :36   */

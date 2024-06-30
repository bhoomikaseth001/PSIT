#include<iostream>
#include<set>
#include<utility>
using namespace std;
int main() { 
    set<int> my_set={15,4,8,2,4,1};
    for(auto var:my_set)
        cout<<var<<" ";
        cout<<endl;

    set<int>my_set2;
    my_set2.insert(2);
    my_set2.insert(1);
    my_set2.insert(4);
    my_set2.insert(2);
    my_set2.insert(6);
    for(auto var : my_set2)
        cout<<var<<" ";
    cout<<endl;
    cout<<my_set2.size()<<endl;
    my_set2.clear();
    cout<<my_set2.size()<<endl;
    cout<<my_set2.empty()<<endl;


    set<int>::iterator it;
    for(it=my_set.begin();it!=my_set.end();++it)
        cout<<*it<<" ";
        cout<<endl;


    //Sort a set in decreasing order
    set<int, greater<int>>my_set3={5,3,8,1,4};
    for(int var : my_set3)
        cout<<var<<" ";
    cout<<endl;
    my_set3.erase(8);
    for(int var : my_set3)
        cout<<var<<" ";
    cout<<endl;
    cout<<my_set3.empty()<<endl;

    int num=4;
    // cout<<"Enter a number";
    // cin>>num;
    if(my_set.count(num)==1)
        cout<<"Element exist";
    else
        cout<<"Element do not exist";
    return 0;

//test for unordered set    
}
/*OUTPUT: 
1 2 4 8 15
1 2 4 6
4
0
1
1 2 4 8 15
8 5 4 3 1
5 4 3 1
0  */
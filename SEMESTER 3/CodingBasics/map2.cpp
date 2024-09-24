#include<iostream>
#include<vector>
#include<utility>
#include<set>
#include<map>
#include<unordered_map>
using namespace std;
int main() { 
//creation
unordered_map<string,int> mp;

//insertion
//1
pair<string,int>pair1=make_pair("bhoomika",3);
mp.insert(pair1);

//2
pair<string,int>pair2("seth",2);
mp.insert(pair2);

//3
mp["Hello"]=1;
//what will happen
mp["Hello"]=2;
//search
cout<<mp["Hello"]<<endl;
cout<<mp.at("bhoomika")<<endl;

cout<<mp["unknownkey"]<<endl;
cout<<mp.at("unknownkey")<<endl;

cout<<mp.size()<<endl;
//to check presence
cout<<mp.count("Hi")<<endl;
cout<<mp.count("Hello")<<endl;

//erase
mp.erase("seth");
cout<<mp.size()<<endl;

//iterator
unordered_map<string,int>:: iterator it=mp.begin();
while(it != mp.end()){
    cout<<it->first<<" "<<it->second<<endl;
    it++;
}
//unordered_map: O(n)
//map: O(1)


return 0;
}
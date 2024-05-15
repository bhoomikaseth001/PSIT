//WAP in CPP using class and object to store price list of 3 items and print the largest price as well as the sum of all prices

#include<iostream>
using namespace std;
class Item{
    int price;

    public:
    int  getprice();
    void putprice(int v);
};
int Item :: getprice(){
    return price;
}

void Item :: putprice(int v){
    price=v;
}
    int main(){
        int n,v,max=0;
        cout<<"Enter the number of items :";
        cin>>n;
        Item arr[n];
        for(int i=0;i<n;i++){
            cout<<"Enter the price of item "<<i+1<<" : ";
            cin>>v;
            if(v>max)
                max=v;
            arr[i].putprice(v);
        }

        cout<<"\n";
        for(int i=0;i<n;i++)
            cout<<"The price of item "<<i+1<<" is : "<<arr[i].getprice()<<endl;

        cout<<"The maximum price is : "<<max;
    }

/*OUTPUT :
Enter the number of items : 3
Enter the price of item 1 : 56
Enter the price of item 2 : 78
Enter the price of item 3 : 23

The price of item 1 is : 56
The price of item 2 is : 78
The price of item 3 is : 23
The maximum price is : 78   */
//LEETCODE PROBLEM 729
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main() { 
 class MyCalendar {
    private:
    vector<pair<int,int>>bookings;
public:
    MyCalendar() {

    }
    
    bool book(int start, int end) {
        for(const auto & booking:bookings)
        {
            if(max(booking.first,start) < min(booking.second,end))
                 return false;
}
    bookings.emplace_back(start,end);
    return true;    
    }
};
}
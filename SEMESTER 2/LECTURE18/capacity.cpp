//2. Demonstrate that the Vectors are dynamic in nature

#include <iostream>
#include <vector>
int main() {
    using namespace std;
vector<int> vec;
// Display initial size and capacity
cout << "Initial size: " << vec.size() << ", capacity: " << vec.capacity() <<endl;
// Add elements to the vector and observe capacity changes
for (int i = 0; i < 20; ++i) {
vec.push_back(i);
cout<<"After adding element "<<i<<" ,  size: "<<vec.size()<<", capacity: "<<vec.capacity()<<endl;
}
// Remove elements from the vector
for (int i = 0; i < 10; ++i) {
vec.pop_back();
cout<<"After removing element, size: " <<vec.size()<< ", capacity: "<<vec.capacity()<<endl;
}
// Clear the vector
vec.clear();
cout<<"After clearing, size: "<<vec.size()<<", capacity: "<<vec.capacity()<<endl;
return 0;
}
/*Output: 
            Initial size: 0, capacity: 0
            After adding element 0 , size: 1, capacity: 1
            After adding element 1 , size: 2, capacity: 2
            After adding element 2 ,  size: 3, capacity: 4
            After adding element 3 ,  size: 4, capacity: 4
            After adding element 4 ,  size: 5, capacity: 8...
            After adding element 7 ,  size: 8, capacity: 8
            After adding element 8 ,  size: 9, capacity: 16
            After adding element 9 ,  size: 10, capacity: 16...
            After adding element 14 ,  size: 15, capacity: 16
            After adding element 15 ,  size: 16, capacity: 16
            After adding element 16 ,  size: 17, capacity: 32
            
            After removing element, size: 16, capacity: 32
            After removing element, size: 15, capacity: 32
            After removing element, size: 14, capacity: 32
            After removing element, size: 13, capacity: 32....
            After clearing, size: 0, capacity: 32   */
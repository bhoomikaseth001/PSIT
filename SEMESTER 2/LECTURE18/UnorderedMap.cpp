#include <iostream>
#include <unordered_map>
#include <string> 
using namespace std;
int main() {
unordered_map<int,string> malay;
malay [1] = "one";
malay [2] = "two";
malay [3] = "three";

cout << "Key 1 has value: "<< malay [1] << endl;
cout << "Key 2 has value: " <<malay [2] << endl;
// Check if a key exists
int key = 4;
auto it = malay.find(key);
if (it != malay.end()) {
cout << "Found key " << key << " with value: " << it->second << endl;
} else {
cout << "Key " << key << " not found" << endl;
}
// Erase an element
malay.erase(2);
cout << "After erasing key 2, size of map: " << malay.size() << endl;
// Check if map is empty
if (malay.empty()) {
cout << "Map is empty" << endl;
} else {
cout << "Map is not empty" << endl;
}
// Clear the map
malay.clear();
cout << "After clearing, size of map: " << malay.size() << endl;
return 0;
}

/*Output :
            Key 1 has value: one
            Key 2 has value: two
            Key 4 not found
            After erasing key 2, size of map: 2
            Map is not empty
            After clearing, size of map: 0   */
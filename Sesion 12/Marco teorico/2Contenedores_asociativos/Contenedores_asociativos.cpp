#include <set>
#include <iostream>
using namespace std;

int main() {
    set<int> mySet = {1, 2, 3, 4, 5};
    mySet.insert(6);
    for (const int& val : mySet) {
        cout << val << " ";
    }
    return 0;
}

#include <map>
#include <iostream>

int main() {
    map<int, string> myMap;
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

#include <unordered_set>
#include <iostream>

int main() {
    unordered_set<int> myUnorderedSet = {5, 3, 1, 4, 2};
    myUnorderedSet.insert(6);
    for (const int& val : myUnorderedSet) {
        cout << val << " ";
    }
    return 0;
}

#include <unordered_map>
#include <iostream>

int main() {
    unordered_map<int, string> myUnorderedMap;
    myUnorderedMap[1] = "One";
    myUnorderedMap[2] = "Two";
    myUnorderedMap[3] = "Three";
    for (const auto& pair : myUnorderedMap) {
        cout << pair.first << ": " << pair.second << endl;
    }
    return 0;
}

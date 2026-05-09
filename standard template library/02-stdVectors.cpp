#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Declarations
    std::vector<int> arr1;
    std::vector<int> arr2(5, 20); // arr(size, value)
    std::vector<int> arr3 = {1,2,3,4,5}; // initializer list
    std::vector<int> arr4 {1,2,3,4,5}; // uniform initialization

    vector<int> v1;                 // empty vector of ints
    vector<int> v2(5);              // 5 elements, value‑initialised (0 for int)
    vector<int> v3(5, 42);          // 5 elements, all 42
    vector<int> v4 = {1, 2, 3, 4};  // initializer list (C++11)
    vector<int> v5(v4);             // copy constructor
    vector<int> v6(move(v5));       // move constructor (v5 is now empty)

    // Accessing elements
    vector<int> vec = {5, 10, 15};

    cout << vec[0];    // 5 – unchecked access (no bounds check)
    cout << vec.at(1); // 10 – throws std::out_of_range if index invalid
    cout << vec.front(); // first element
    cout << vec.back();  // last element
    int* ptr = vec.data(); // Raw pointer to underlying array

    // Adding elements
    vector<int> vec;
    vec.push_back(10);   // appends 10 at the end
    vec.emplace_back(20); // constructs 20 in place (more efficient for complex types)
    auto it = vec.begin();
    vec.insert(it + 1, 99);   // inserts 99 before second element

    // Removing Elements
    vector<int> vec = {1, 2, 3, 4, 5};
    vec.pop_back();               // removes 5 (size becomes 4)
    vec.erase(vec.begin() + 1);   // removes element at index 1 (2) → {1,3,4,5}
    vec.erase(vec.begin(), vec.begin() + 2); // removes first two elements → {4,5}
    vec.clear();                  // removes all elements (size = 0)

    // Size and Capacity
    vector<int> vec;
    vec.reserve(100);      // pre‑allocate capacity for 100 elements (no initialisation)
    cout << vec.size();    // number of elements currently stored
    cout << vec.capacity(); // number of elements the allocated memory can hold
    cout << vec.empty();   // true if size == 0
    vec.shrink_to_fit();   // requests to reduce capacity to fit size (C++11)

    // ITERATING OVER A VECTOR
    vector<int> vec = {10, 20, 30};

    // Index loop
    for (size_t i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";

    // Range‑based for loop (C++11)
    for (int x : vec)
        cout << x << " ";

    // Using iterators
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";

    return 0;
}
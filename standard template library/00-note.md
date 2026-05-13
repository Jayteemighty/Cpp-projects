// NOTES:
1. STL = STANDARD TEMPLATE LIBRARY
It consists of three components
    a. Container
    b. Iterator
    c. Algorithm
- Container = are the objects that store data of similar type.
- Algorithms = are procedures that are used to operate upon containers and manipulate them.
- Iterators = behave like pointers and are used to access container elements.

2. STANDARD ARRAY
std::array = is a container that encapsulates fixed size arrays.
    syntax = std::array<T, N> array;
    1. arraysize is needed at compile time
    2. assign by value is acctually by value
    3. access elements:
        a. at()
        b. []
        c. front()
        d. back()
        e. data() - gives access to the underlying array

3. STANDARD VECTOR
std::vector is a sequence container and also known as Dynamic or Array List.
Its size can grow and shrink dynamically, and no need to provide size at compile time.

ELEMENT ACCESS = at(), [], front(), back(), data()

MODIFIERS = insert(), emplace(), push_back(), emplace_back(), pop_back(), resize(), swap(), erase(), clear()

4. Map in C++ STL
Maps are associative containers that store key–value pairs in sorted order using a self-balancing Red-Black Tree. They provide efficient O(log n) time complexity for insertion, deletion, and searching operations.

Maps do not allow duplicate keys.
They support ordered traversal and functions like upper_bound() and lower_bound().

map<keytype1, valuetype2> mapName;

5. Unordered_map STL

6. SET

7. STACK
it is a last in first out container (LIFO).

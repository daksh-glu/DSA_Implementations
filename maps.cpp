/*
🔷 What is std::map?
      -> A map in C++ is an associative container from the Standard Template Library (STL).
      -> It stores elements in key-value pairs, like a dictionary in Python.
      -> Each key is unique (cannot be repeated).
      -> Internally, map uses a balanced binary search tree (like Red-Black Tree), so all operations take logarithmic time O(log n).

✅ When to Use std::map?
      -> You need sorted keys.
      -> You want logarithmic performance.
      -> You want predictable traversal order.
*/
#include <iostream>
#include <map>

int main() {
    std::map<int, std::string> students;

    // Insert using []
    students[1] = "Alice";
    students[2] = "Bob";

    // Insert using insert()
    students.insert({3, "Charlie"});

    // Insert using emplace()
    students.emplace(4, "David");

    // Print map
    std::cout << "Student Map:\n";
    for (auto it : students) {
        std::cout << it.first << " => " << it.second << "\n";
    }

    // Check key
    if (students.count(2)) {
        std::cout << "Key 2 exists\n";
    }

    // Use find()
    auto it = students.find(3);
    if (it != students.end()) {
        std::cout << "Found key 3: " << it->second << "\n";
    }

    // Erase
    students.erase(1);

    // Use at()
    try {
        std::cout << "Key 2: " << students.at(2) << "\n";
        std::cout << "Key 5: " << students.at(5) << "\n"; // throws
    } catch (const std::out_of_range& e) {
        std::cout << "Exception: " << e.what() << "\n";
    }

    // Size
    std::cout << "Size: " << students.size() << "\n";

    // Clear
    students.clear();

    std::cout << "Empty? " << (students.empty() ? "Yes" : "No") << "\n";

    return 0;
}




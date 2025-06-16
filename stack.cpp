/*
A stack is a linear data structure that follows the Last In, First Out (LIFO) principle
🔹 Core Operations of Stack

 *Function	   *Description
  push(x)	      Adds element x to the top
  pop()	        Removes the top element
  top()	        Returns the top element
  empty()	      Returns true if stack is empty
  size()	      Returns number of elements in stack
  swap(stack2)	Swaps contents with another stack
  emplace(x)	  Constructs and pushes element (faster than push)

🔹 Summary
    stack = LIFO data structure.
    Supports push, pop, top, empty, size, emplace, swap
    Internally uses deque, but you can change it.
    Used in many real-world applications.
    Simple to use, but be careful with top() and pop() on empty stacks.


🔸 Difference: stack vs vector
   *Feature	       *stack	             *vector
    Access	        Only top	          Any index
    Insert/Del	    Only at top	        Anywhere
    Usage	          LIFO structure	    Dynamic array

*/

#include <iostream>
#include <stack>

int main() {
    std::stack<std::string> fruits;

    // Using push
    fruits.push("Apple");
    fruits.push("Banana");
    fruits.push("Cherry");

    std::cout << "Top fruit: " << fruits.top() << "\n";  // Cherry

    // Using pop
    fruits.pop();  // Removes Cherry
    std::cout << "After pop, top: " << fruits.top() << "\n";  // Banana

    // Size
    std::cout << "Size: " << fruits.size() << "\n";  // 2

    // Empty
    std::cout << "Is empty? " << (fruits.empty() ? "Yes" : "No") << "\n";

    // Emplace
    fruits.emplace("Date");
    std::cout << "Top after emplace: " << fruits.top() << "\n";  // Date

    // Swapping with another stack
    std::stack<std::string> veggies;
    veggies.push("Carrot");
    veggies.push("Broccoli");

    fruits.swap(veggies);
    std::cout << "After swap, top of fruits stack: " << fruits.top() << "\n";  // Broccoli

    return 0;
}

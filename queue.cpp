/*
🔷 What is a queue?

    A queue is a First In First Out (FIFO) data structure.
    This means:
    The first element inserted will be the first one to come out.
    🚌 Example: A line at a bus stop
    First person in line → First one to get on the bus



*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();
    cout << "After one pop, front: " << q.front() << endl;

    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}

/*
output

Front: 10
Back: 30
Size: 3
After one pop, front: 20
Is queue empty? No




| Function     | Use                       | Returns       |
| ------------ | ------------------------- | ------------- |
| `push(x)`    | Add at back               | void          |
| `pop()`      | Remove from front         | void          |
| `front()`    | Access front              | element (ref) |
| `back()`     | Access back               | element (ref) |
| `empty()`    | Is queue empty?           | bool          |
| `size()`     | Number of elements        | int           |
| `emplace(x)` | Construct and add at back | void          |
| `swap(q2)`   | Swap with another queue   | void          |

*/

/*Queue Using Array

*/

void MyQueue ::push(int x) {
    // Your Code
    if(rear==100005) return;
    arr[rear] = x;
    rear++;
    return;
}

// Function to pop an element from queue and return that element.
int MyQueue ::pop() {
    // Your Code
    if(front>=rear) return -1;
    int val = arr[front];
    front++;
    return val;
}

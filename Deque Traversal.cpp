/*
Given a deque dq containing integer elements, the task is to traverse the dq and print its elements of it. 
Note: Print a newline at the end.

*/
void printDeque(deque<int> dq) {
    // code here
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
    cout<<endl;
}

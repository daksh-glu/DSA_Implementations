/*Implement a Queue using Linked List. 
A Query Q is of 2 Types
(i) 1 x   (a query of this type means  pushing 'x' into the queue)
(ii) 2     (a query of this type means to pop an element from the queue and print the poped element)*/

void MyQueue:: push(int x)
{
        // Your Code
        QueueNode* temp = new QueueNode(x);
        if(front == NULL && rear == NULL){
            front=rear=temp;
        }
        
        else{
            rear->next = temp;
            rear = temp;
        }
        /*
        2 -rear front
        3 - rear - front
        */
        
        
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        // Your Code 
        int temp = -1;
        if(front != NULL){
           temp = front->data;
            if(front == rear){
                front = rear = NULL;
            }
            else{
                front = front->next;
            }
        }
        
        return temp;
        
}
gfg problem link : https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1?page=1&category=Stack,Queue&difficulty=Basic&status=unsolved&sortBy=submissions

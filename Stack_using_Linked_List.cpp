void push(int x) {
        // code here
        StackNode *temp = new StackNode(x);
        temp->next = top;
        top = temp;
        
    }

    int pop() {
        // code here
        if(top == NULL){
            return -1;
        }
        int temp = top->data;//3
        top = top->next;
        return temp;
    }

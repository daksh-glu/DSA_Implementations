Node* deleteMid(Node* head) {
        // Your Code Here
        if (head->next == NULL)
            return NULL;
    
        int count = 0;
        Node *temp1 = head;
        while (temp1 != NULL) {
            count++;
            temp1 = temp1->next;
        }
        int middle = count / 2;
        temp1 = head;
        for (int i = 0; i < middle - 1; i++){
            temp1 = temp1->next;
        }
        temp1->next = temp1->next->next;
        return head;
    }

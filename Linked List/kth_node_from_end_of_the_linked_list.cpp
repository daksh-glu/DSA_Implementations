class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* current = head;
        int count =  0;
        while(current != NULL){
            count++;
            current = current->next;
        }
        if(k > count){
            return -1;
        }
        current = head;
        int position = count - k+1;
        while(position > 0){
            position--;
            if(position == 0){
                return current->data;
            }
            current = current->next;
            
        }
    }
};

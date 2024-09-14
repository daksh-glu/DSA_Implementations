#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node (int value, Node* next){
        val=value;  
        this->next=next;  
    }
    Node (int value){
        val=value;  
        next=NULL;  

    }
    
};
Node* insert_linked_list_values(Node* head, vector<int> linkedListValues){
	
    head = new Node(linkedListValues[0]);
    Node* temp_node = head;
    for(int i = 1; i < linkedListValues.size(); i++){
    	temp_node->next= new Node(linkedListValues[i]);
    	temp_node = temp_node->next;
    	
	}
	return head;
	//temp_node = head;
}


int size_of_linked_list(Node* head){
	Node* temp_node2 = head;
	int count = 0;
	while(temp_node2 != NULL){
		count = count +1;
		temp_node2 = temp_node2->next;
	}
	return count;
	
}
vector<int> create_input_vector(){
	cout<<"Enter the size of linked list : ";
	int size;
	cin>>size;
	vector<int> linkedListValues;
	int user_input;
	cout<<"Enter the values of linked list : ";
	for(int i =0; i < size; i++){
		cin>>user_input;
		linkedListValues.push_back(user_input);
	}
	return linkedListValues;
	
	
}

void print_linked_list(Node* head){
	Node* temp_node = head;
	for(int i =0; i < size_of_linked_list(head); i++){
		cout<<temp_node->val<<" ";
		temp_node = temp_node->next;
	}
}
int main(){
	Node* head = NULL;
	vector<int> linkedListValues = create_input_vector();
	head = insert_linked_list_values(head,linkedListValues);
	print_linked_list(head);
}

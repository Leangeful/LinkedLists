#include <iostream>

using namespace std;

typedef struct Node {
	int data;
	struct Node *next;
};

void traverse(Node *head) {
	Node *temp1 = head;

	while (temp1 != NULL) {
		cout << temp1->data << " ";
		temp1 = temp1->next;
	}
}


Node* Insert(Node *head, int data) {
	
	Node *newNode = (Node*)malloc(sizeof(Node));

	if (newNode == NULL) {		
		exit(-1);
	}	

	newNode->data = data;
	newNode->next = NULL;	

	if (head == NULL) {
		head = newNode;
		return head;
	}

	if (head->next == NULL) {
		head->next = newNode;
	}
	else {
		Node *cur = head;
		while (cur->next != NULL) {		
			cur = cur->next;
		}
		cur->next = newNode;
	}
	return head;
}

int main() {
	Node *head = NULL;

	int T = 5;
	while (T--) {
		int input;
		cin >> input;
		head = Insert(head, input);
	}

	traverse(head);

	return 0;
}

#include <iostream>

using namespace std;

typedef struct Node{
	int data;
	Node *next;
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
	newNode->data = data;	
	newNode->next = head;
	return newNode;
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
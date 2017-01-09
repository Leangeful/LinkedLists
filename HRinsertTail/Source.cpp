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
	
	Node *temp1;
	temp1 = (Node*)malloc(sizeof(Node));
	temp1 = head;

	while (temp1->next != NULL) {
		temp1 = temp1->next;
	}

	Node *temp;
	temp = (Node*)malloc(sizeof(Node));
	temp->data = data;
	temp->next = NULL;
	temp1->next = temp;
	return temp;
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

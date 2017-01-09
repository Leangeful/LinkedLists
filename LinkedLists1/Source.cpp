#include <iostream>

using namespace std;

typedef struct node {
	int data;
	node *next;
};

node* insertFront(node& head, int info) {
	node *temp;
	temp = (node*)malloc(sizeof(node));
	temp->data = info;
	temp->next = &head;
	return temp;
}

void traverse(node *head) {
	node *temp1 = head;

	while (temp1 != NULL) {
		cout << temp1->data << " ";
		temp1 = temp1->next;
	}
}

int main() {
	node *head = NULL;

	int T = 5;

	while (T--) {
		int input;
		cin >> input;
		head = insertFront(*head, input);
	}

	traverse(head);

	return 0;
}
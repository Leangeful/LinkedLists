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

Node* InsertNth(Node *head, int data, int position) {

	Node *newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	
	if (position == 0) {
		newNode->next = head;
		head = newNode;
	}
	else {
		Node *cur = (Node*)malloc(sizeof(Node));
		int count = 1;
		cur = head;
		while (count != position) {
			cur = cur->next;
			count++;
		}
		newNode->next = cur->next;
		cur->next = newNode;
	}
	return head;
}

int main() {
	Node *head = NULL;

	int T = 5;
	while (T--) {
		int input, pos;
		cin >> input>>pos;
		head = InsertNth(head, input, pos);
	}

	traverse(head);

	return 0;
}
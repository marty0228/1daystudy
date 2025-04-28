#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// �� ��� ���� �Լ�
struct Node* create_node(int data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// ��� ���� �Լ� (�� �ڿ�)
void append_node(struct Node **head, int data) {
    struct Node *new_node = create_node(data);
    if (*head == NULL) {
        *head = new_node;
        return;
    }
    struct Node *curr = *head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

// ����Ʈ ��� �Լ�
void print_list(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;  // ����Ʈ ������ (NULL�� �ʱ�ȭ)

    append_node(&head, 10);
    append_node(&head, 20);
    append_node(&head, 30);

    print_list(head);  // ���: 10 -> 20 -> 30 -> NULL

    return 0;
}
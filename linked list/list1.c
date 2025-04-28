#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// 새 노드 생성 함수
struct Node* create_node(int data) {
    struct Node *new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

// 노드 삽입 함수 (맨 뒤에)
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

// 리스트 출력 함수
void print_list(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;  // 리스트 시작점 (NULL로 초기화)

    append_node(&head, 10);
    append_node(&head, 20);
    append_node(&head, 30);

    print_list(head);  // 출력: 10 -> 20 -> 30 -> NULL

    return 0;
}
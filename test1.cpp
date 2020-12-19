#include <stdio.h>
#include <malloc.h>

typedef struct node {
  int num;
  node *next;
} Node;

Node *createNode(int num) {
  Node *p = (Node *)malloc(sizeof(Node));
  p->num = num;
  p->next = NULL;
  return p;
}

Node *testList() {
  Node *test = createNode(4);
  test->next = createNode(3);
  test->next->next = createNode(2);
  test->next->next->next = createNode(1);
  test->next->next->next->next = createNode(0);
  return test;
}

/**
  题目要求：从尾到头打印链表
  例如：
    输入：head = [1,3,2]
    输出：[2,3,1]
  */

void reversePrint(Node* head){
  // write your code here...
  
}

int main() {
  Node *head = testList();
  
  reversePrint(head);

  return 0;
}
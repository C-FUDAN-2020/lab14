#include <stdio.h>
#include <malloc.h>
#include <stdbool.h>

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

Node* createList1() {
  Node* test = createNode(0);
  test->next = createNode(1);
  test->next->next = createNode(2);
  test->next->next->next = createNode(3);
  test->next->next->next->next = createNode(4);
  test->next->next->next->next->next = createNode(5);
  return test;
}

Node* createList2() {
  Node* test = createNode(1000000);
  test->next = createNode(1000001);
  test->next->next = createNode(1000002);
  return test;
}

Node* createResult() {
  Node* test = createNode(0);
  test->next = createNode(1);
  test->next->next = createNode(2);
  test->next->next->next = createNode(1000000);
  test->next->next->next->next = createNode(1000001);
  test->next->next->next->next->next = createNode(1000002);
  test->next->next->next->next->next->next = createNode(5);
  return test;
}

bool compare(Node* list1, Node* list2) {
  Node* t = list1;
  Node* h = list2;
  while (true) {
    if (t == NULL && h == NULL) {
      return true;
    }
    if (t == NULL || h == NULL) {
      return false;
    }
    if (t->num != h->num) {
      return false;
    }
    t = t->next;
    h = h->next;
  }
}

/**
  题目要求：合并两个链表
  例如：
    输入：list1 = [0,1,2,3,4,5], a = 3, b = 4, list2 = [1000000,1000001,1000002]
    输出：[0,1,2,1000000,1000001,1000002,5]
    解释：我们删除 list1 中第三和第四个节点，并将 list2 接在该位置。上图中蓝色的边和节点为答案链表。
  */

Node* mergeInBetween(Node* list1, int pos1, int pos2, Node* list2){
  // write your code here...
  
}

int main() {
  Node* list1 = createList1();
  Node* list2 = createList2();
  Node* testResult = createResult();
  
  Node* result = mergeInBetween(list1, 3, 4, list2);

  if (compare(testResult, result)) {
    printf("Congratulations!\n");
  } else {
    printf("Sorry, your code has error!\n");
  }
  
  return 0;
}

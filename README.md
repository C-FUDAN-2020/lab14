# lab 14

    本节目标：
      1. 理解结构体
      2. 编写链表代码练习题

## 获取及提交lab

**获取**：通过 `https://github.com/C-FUDAN-2020/lab14` 获取。

**提交物**：将你完成目标 2 的源代码文件作为 lab14 的提交物。

**提交**：将提交物文档命名为学号_姓名 （如20302010000_王明），提交至超星学习通对应的作业中。

**截止时间**：北京时间 2020年12月27日 23:59:59 

## 结构体

**结构**是 C 编程中另一种用户自定义的可用的数据类型，它允许你存储不同类型的数据项。

为了定义结构，你必须使用 `struct` 语句。`struct` 语句定义了一个包含多个成员的新的数据类型，`struct` 语句的格式如下：
```c
struct tag { 
  member-list
  member-list 
  member-list  
  ...
} variable-list ;
```
- `tag` 是结构体标签。
- `member-list` 是标准的变量定义，比如 int i; 或者 float f，或者其他有效的变量定义。
- `variable-list` 结构变量，定义在结构的末尾，最后一个分号之前，你可以指定一个或多个结构变量。

在一般情况下，`tag`、`member-list`、`variable-list` 这 3 部分至少要出现 2 个。以下为实例：
```c
//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//同时又声明了结构体变量s1
//这个结构体并没有标明其标签
struct 
{
    int a;
    char b;
    double c;
} s1;
 
//此声明声明了拥有3个成员的结构体，分别为整型的a，字符型的b和双精度的c
//结构体的标签被命名为SIMPLE,没有声明变量
struct SIMPLE
{
    int a;
    char b;
    double c;
};
//用SIMPLE标签的结构体，另外声明了变量t1、t2、t3
struct SIMPLE t1, t2[20], *t3;
```
在上面的声明中，第一个和第二声明被编译器当作两个完全不同的类型，即使他们的成员列表是一样的，如果令 `t3=&s1`，则是非法的。

### `typedef`
可以用 `typedef` 创建新类型，这是一种更常用，且更易理解的方法
```c
typedef struct
{
    int a;
    char b;
    double c; 
} Simple2;
//现在可以用Simple2作为类型声明新的结构体变量
Simple2 u1, u2[20], *u3;
```

## 链表

结构体的成员可以包含其他结构体，也可以包含指向自己结构体类型的指针，而通常这种指针的应用是为了实现一些更高级的数据结构如**链表**

### 链表的定义与初始化
```c
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
```

链表还有插入，删除等许多基本操作，课程配套教程中都有，这里不再细说。

接下来有两道关于链表的练习题，请大家下载并补全源代码：

[从尾到头打印链表](./test1.cpp) 和 [合并两个链表](./test2.cpp)

> 请大家在课上完成，给助教检查运行结果

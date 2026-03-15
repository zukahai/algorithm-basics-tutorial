#include <bits/stdc++.h>
using namespace std;

typedef struct node {
    int data;
    struct node* next;
} node;

typedef struct {
    node *head;
    node *tail;
} LL;

void CreateLL(int data, LL &list) {
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;
    list.head = newNode;
    list.tail = newNode;
}

void InsertNodeAfterLL(int data, LL &list) {
    node *newNode = new node;
    newNode->data = data;
    newNode->next = NULL;

    list.tail->next = newNode;

    list.tail = newNode;
}

int TraverseLL(LL &list) {
    if (list.head == NULL) return 0;
    node *p = list.head;
    while (p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    cout << endl;
    return 1;
}


// int Solve(LL &list) {
//     if (list.head == NULL) return 0;
//     node *p = list.head;
//     while (p != NULL) {
//         Xu li p->data ở đây
//         p = p->next;
//     }
//     cout << endl;
//     return 1;
// }

int CountEven(LL &list) {
    if (list.head == NULL) return 0;
    int count = 0;
    node *p = list.head;
    while (p != NULL) {
        if (p->data % 2 == 0) 
            count++;
        p = p->next;
    }
    cout << endl;
    return count;
}

int Count57(LL &list) {
    if (list.head == NULL) return 0;
    int count = 0;
    node *p = list.head;
    while (p != NULL) {
        if (p->data % 5 == 0 || p->data % 7 == 0) 
            count++;
        p = p->next;
    }
    return count;
}

int SumOdd(LL &list) {
    if (list.head == NULL) return 0;
    int sum = 0;
    node *p = list.head;
    while (p != NULL) {
        if (p->data % 2 != 0) 
            sum += p->data;
        p = p->next;
    }
    return sum;
}

/*
Đếm số nút trong danh sách liên kết
*/

int CountNodeLL(LL &list) {
    if (list.head == NULL) return 0;
    int count = 0;
    node *p = list.head;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

/*
Đếm số lần xuất hiện của key trong danh sách liên kết
*/
int CountKeyLL(int key, LL &list) {
    if (list.head == NULL) return 0;
    int count = 0;
    node *p = list.head;
    while (p != NULL) {
        if (p->data == key) 
            count++;
        p = p->next;
    }
    return count;
}

/*
Copy danh sách liên kết
*/

LL CopyLL(LL &list) {
    LL newList;
    newList.head = NULL;
    newList.tail = NULL;
    if (list.head == NULL) return newList;

    node *p = list.head;
    while (p != NULL) {
        // Tạo nút mới
        node *newNode = new node;
        newNode->data = p->data;
        newNode->next = NULL;
        // Thêm nút mới vào danh sách mới
        if (newList.head == NULL) {
            newList.head = newNode;
            newList.tail = newNode;
        } else {
            newList.tail->next = newNode;
            newList.tail = newNode;
        }
        p = p->next;
    }
    return newList;
}

/*
Nối 2 danh sách liên kết
*/

void ConcatLL(LL &list1, LL &list2) {
    list1.tail->next = list2.head;
    list1.tail = list2.tail;
}


int SearchLinearLL(int key, LL &list) {
    if (list.head == NULL) return 0;
    node *p = list.head;
    while (p != NULL) {
        if (p->data == key) return 1;
        p = p->next;
    }
    return 0;
}

int RemoveAfterLL(int key, LL &list) {
    if (list.head == NULL) return 0;
    node *p = list.head;
    while (p != NULL && p->next->data != key) {
        p = p->next;
    }
    if (p == NULL || p->next == NULL) return 0;
    node *temp = p->next;
    p->next = p->next->next;
    if (temp == list.tail) {
        list.tail = p;
    }
    delete temp;
    return 1;
}

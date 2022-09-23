//// 6-5 链表分解-CPP
//
//// 设计算法将一个带头结点的单链表A分解为两个具有相同结构的链表B、C，其中B表的结点为A表中值小于零的结点，而C表的结点为A表中值大于零的结点（链表A中的元素为非零整数，要求B、C表利用A表的结点）。
//
//// 函数接口定义：
///*
//	LinkList DisCompose(LinkList& A)；
//*/
//
//#include <iostream>
//using namespace std;
//
//#define ERROR 0
//
//typedef struct LNode {
//    int data; //结点的数据域
//    struct LNode* next; //结点的指针域
//} LNode, * LinkList; //LinkList为指向结构体LNode的指针类型
//
//void InitList(LinkList& L) //创建链表
//{
//    L = new LNode;
//    L->next = NULL;
//}
//bool LocateElem(LinkList L, int e) //判断List里有没有e这个元素
//{
//    LinkList p;
//    p = L->next;
//    while (p != NULL) {
//        if (p->data == e)
//            return true;
//        p = p->next;
//    }
//    return false;
//}
//
//void ListInsert(LinkList& L, int e) //将e插入到List中
//{
//    LinkList p, q;
//    p = new LNode;
//    p->data = e;
//    q = L;
//    while (q->next)q = q->next;
//
//    p->next = q->next;
//    q->next = p;
//}
//
//void ListOutput(LinkList L) //输出List
//{
//    LinkList p;
//    p = L->next;
//    while (p != NULL) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
//
///* 请在这里填写答案 */
//LinkList DisCompose(LinkList& A)
//{
//    LinkList L1, L2, temp;
// 
//    L1 = A->next;
//    A->next = NULL;
//
//    L2 = new LNode;
//    L2->next = NULL;
//
//    while (L1) {
//        temp = L1;
//        L1 = L1->next;
//
//        if (temp->data > 0) {
//            temp->next = L2->next;
//            L2->next = temp;
//        }
//        else if (temp->data < 0) {
//            temp->next = A->next;
//            A->next = temp;
//        }
//    }
//
//    return L2;
//}
//
//int main()
//{
//    freopen("6-5.in", "r", stdin);
//    int n, k;
//    LinkList la, lc;
//
//    InitList(la);
//
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> k;
//        ListInsert(la, k);
//    }
//
//    lc = DisCompose(la);
//    ListOutput(la);
//    ListOutput(lc);
//
//    return 0;
//}

//// 6-8 链表的条件删除-CPP
//
//// 设计一个算法，删除递增有序链表中值大于mink且小于maxk的所有元素（mink和maxk是给定的两个参数，其值可以和表中的元素相同，也可以不同 ）。
//
//// 函数接口定义：
///*
//void Delete(LinkList& L, int mink, int maxk)；
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
//void Delete(LinkList& L, int mink, int maxk)
//{
//    LinkList pa, last, t;
//    last = L;
//    pa = L->next;
//
//    int pMin = 0, pMax = 0;
//    while (pa) {
//        if (pa->data > mink && pa->data < maxk) {
//            t = pa;
//            last->next = pa->next;
//            delete t;
//            pa = last->next;
//        }
//        else {
//            last = pa;
//            pa = pa->next;
//        }
//    }
//}
//
//int main()
//{
//    freopen("6-8.in", "r", stdin);
//    int n, k, mi, ma;
//    LinkList la, lc;
//
//    InitList(la);
//
//    cin >> n >> mi >> ma;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> k;
//        ListInsert(la, k);
//    }
//
//    Delete(la, mi, ma);
//    ListOutput(la);
//
//    return 0;
//}

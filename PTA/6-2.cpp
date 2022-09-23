//// 将两个非递减的有序链表合并为一个非递增的有序链表。要求结果链表仍使用原来两个链表的存储空间, 不另外占用其它的存储空间。表中允许有重复的数据。
////函数接口定义：
///*
//void MergeList(LinkList& La, LinkList& Lb, LinkList& Lc);
//
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
//void ListInsert_H(LinkList& L, int e)
//{
//    LinkList p;
//    p = new LNode;
//    p->data = e;
//    p->next = L->next;
//    L->next = p;
//}
//// 前插法
//void MergeList(LinkList& La, LinkList& Lb, LinkList& Lc)
//{
//    LinkList pa, pb, pc;
//    pa = La->next;
//    pb = Lb->next;
//    pc = Lc->next;
//
//    do {
//        if (pa->data < pb->data) {
//            ListInsert_H(Lc, pa->data);
//            pa = pa->next;
//        }
//        else if (pa->data > pb->data) {
//            ListInsert_H(Lc, pb->data);
//            pb = pb->next;
//        }
//        else {
//            ListInsert_H(Lc, pa->data);
//            ListInsert_H(Lc, pb->data);
//            pa = pa->next;
//            pb = pb->next;
//        }
//
//    } while (pa != NULL && pb != NULL);
//
//
//    // 排除没做完的
//    while (pa != NULL) {
//        ListInsert_H(Lc, pa->data);
//        pa = pa->next;
//    }
//
//    while (pb != NULL) {
//        ListInsert_H(Lc, pb->data);
//        pb = pb->next;
//    }
//}
//
//int main()
//{
//    freopen("6-2.in", "r", stdin);
//    int n, m, k;
//    LinkList la, lb, lc;
//
//    InitList(la);
//    InitList(lb);
//    InitList(lc);
//
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> k;
//        ListInsert(la, k);
//    }
//    for (int i = 0; i < m; i++)
//    {
//        cin >> k;
//        ListInsert(lb, k);
//    }
//    MergeList(la, lb, lc);
//    ListOutput(lc);
//
//    return 0;
//}
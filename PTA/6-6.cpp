//// 6-6 链表最大值-CPP
//
////设计一个算法，通过一趟遍历在单链表中确定值最大的结点。
//
////函数接口定义：
///*
//ElemType Max(LinkList L);
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
//typedef int ElemType;
//
///* 请在这里填写答案 */
//ElemType Max(LinkList L)
//{
//    int max;
//    LinkList p;
//    p = L->next;
//    max = p->data;
//    p = p->next;
//
//    while (p) {
//        if (p->data > max)
//            max = p->data;
//
//        p = p->next;
//    }
//
//    return max;
//}
//
//int main()
//{
//    freopen("6-6.in", "r", stdin);
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
//    cout << Max(la) << endl;
//
//    return 0;
//}
//
//
//

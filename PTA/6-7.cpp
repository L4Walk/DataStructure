//// 6-7 链表逆置-CPP
//
////设计一个算法，通过遍历一趟，将链表中所有结点的链接方向逆转，仍利用原表的存储空间。
//
////函数接口定义：
///*
//	void  inverse(LinkList &L);
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
//void  inverse(LinkList& L)
//{
//    LinkList p = NULL, q = NULL;
//    p = L->next;
//    L->next = NULL;
//
//    while (p) {
//        q = p;
//        p = p->next;
//        q->next = L->next;
//        L->next = q; 
//    }
//}
//
//
//int main()
//{
//    freopen("6-7.in", "r", stdin);
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
//    inverse(la);
//    ListOutput(la);
//
//    return 0;
//}

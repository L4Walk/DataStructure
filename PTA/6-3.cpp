//// 6-3 集合交集-CPP
//// 已知两个链表A和B分别表示两个集合，其元素递增排列。请设计算法求出A与B的交集，并存放于A链表中。
//
////函数接口定义：
///*
//void Mix(LinkList& La, LinkList& Lb, LinkList& Lc);
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
//void Mix(LinkList& La, LinkList& Lb, LinkList& Lc)
//{
//    LinkList pa, pb;
//    pa = La->next;
//    pb = Lb->next;
//
//    while (pa && pb) {
//        if (pa->data < pb->data) {
//            pa = pa->next;
//        }
//        else if (pa->data > pb->data) {
//            pb = pb->next;
//        }
//        else {
//            ListInsert(Lc, pa->data);
//            pa = pa->next;
//            pb = pb->next;
//        }
//    }
//}
//
//int main()
//{
//    freopen("6-3.in", "r", stdin);
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
//    Mix(la, lb, lc);
//    ListOutput(lc);
//
//    return 0;
//}
//// 已知两个链表A和B分别表示两个集合，其元素递增排列。请设计算法求出两个集合A和B 的差集（即仅由在A中出现而不在B中出现的元素所构成的集合），并以同样的形式存储，同时返回该集合的元素个数。
//
//// 函数接口定义：
///*
//void Difference(LinkList& La, LinkList& Lb, int& n)；
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
//void Difference(LinkList& La, LinkList& Lb, int& n)
//{
//    LinkList pa, pb, t, r;
//    pa = La->next;
//    pb = Lb->next;
//
//    La->next = NULL;
//    r = La;
//
//    while (pa && pb) {
//        if (pa->data < pb->data) {
//            n++;
//            t = pa;
//            pa = pa->next;
//            t->next = NULL;
//            r->next = t;
//            r = t;
//        }
//        else if(pa->data > pb->data){
//            pb = pb->next;
//        }
//        else {
//            pa = pa->next;
//            pb = pb->next;
//        }
//    }
//
//    while (pa) {
//        n++;
//        t = pa;
//        pa = pa->next;
//        t->next = NULL;
//        r->next = t;
//        r = t;
//    }
//}
//
//int main()
//{
//    freopen("6-4.in", "r", stdin);
//    int n, m, k;
//    LinkList la, lb;
//
//    InitList(la);
//    InitList(lb);
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
//    n = 0;
//
//    Difference(la, lb, n);//差集存储在la中，n为差集元素个数
//    cout << n << endl;
//    ListOutput(la);
//
//    return 0;
//}

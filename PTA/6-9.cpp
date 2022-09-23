//// 6-9 双循环链表节点换序-CPP
//
//// 已知p指向双向循环链表中的一个结点，其结点结构为data、prior、next三个域，写出算法change(p),交换p所指向的结点和它的前缀结点的顺序。（我们这里指定p是第m个结点，若m=1是第一个元素，则需要跟最后一个元素交换位置）
//
///*
//函数接口定义：
//void  Exchange(DuLinkList& L,DuLinkList& p);
//*/
//
//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//#define OK 1
//#define ERROR 0
//#define OVERFLOW -2
//typedef int Status; //Status 是函数返回值类型，其值是函数结果状态代码。
//typedef int ElemType; //ElemType 为可定义的数据类型，此设为int类型
//
//typedef struct DuLNode {
//    ElemType data; //数据域
//    struct DuLNode* prior; //直接前驱
//    struct DuLNode* next; //直接后继
//} DuLNode, * DuLinkList;
//
//int length;
//
//Status InitDuList(DuLinkList& L) {
//    //构造一个空的双向循环链表L
//    L = new DuLNode; //生成新结点作为头结点，用头指针L指向头结点
//    L->next = L; //头结点的指针域置空
//    L->prior = L;
//    return OK;
//}
//
//DuLNode* GetElem(DuLinkList L, int i) {
//    //在带头结点的双向链表L中查找第i个元素，返回结点的地址
//    int j;
//    DuLinkList p;
//    p = L->next;
//    j = 0; //初始化，p指向第一个结点，j为计数器
//    while (j < i && p != L) { //顺链域向后扫描，直到p指向第i个元素或p为空
//        p = p->next;
//        ++j;
//    }
//    if (j == i)return p;
//    if (p == L || j > i)
//        return NULL; //第i个元素不存在
//}
//
//void Insert(DuLinkList& L, ElemType e) { //双向循环链表的在链表末尾的插入
//
//    DuLinkList s, p;
//
//    s = new DuLNode; //生成新结点s
//    s->data = e; //将结点s数据置为e
//
//    p = L->prior;
//    s->next = L;
//    s->prior = p;
//    p->next = s;
//    L->prior = s;
//}
//
//void ListOutput(DuLinkList L) //输出List
//{
//    DuLinkList p;
//    p = L->next;
//    while (p != L) {
//        cout << p->data << " ";
//        p = p->next;
//    }
//    cout << endl;
//}
//
///* 请在这里填写答案 */
//void  Exchange(DuLinkList& L, DuLinkList& p)
//{
//    DuLinkList l0,l1, head;   // l0表示前驱的前驱，l1表示前驱
//    head = L;
//    p = p->prior;   // pta上需要把这行注释掉
//
//    l0 = p->prior->prior;
//    l1 = p->prior;
//   
//    if (l1 == head) {
//        l0 = l0->prior;
//        l1 = l1->prior;
//   
//        l0->next = p;
//        head->next = l1;
//        l1->next = p->next;
//        p->next = head;
//    }
//    else {
//        // 断开前驱与其前驱的连接
//        l0->next = p;
//   
//        // 断开后驱的连接并与新节点连接
//        l1->next = p->next;
//        p->next = l1;
//   
//        l1->prior = p;
//    }
//}
//
//
//int main()
//{
//    freopen("6-9.in", "r", stdin);
//    int n, m, k;
//    DuLinkList la, p;
//
//    InitDuList(la);
//
//    cin >> n >> m;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> k;
//        Insert(la, k);
//    }
//
//    p = GetElem(la, m);
//
//    Exchange(la, p);
//
//    ListOutput(la);
//
//    return 0;
//}

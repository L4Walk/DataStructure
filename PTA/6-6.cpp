//// 6-6 �������ֵ-CPP
//
////���һ���㷨��ͨ��һ�˱����ڵ�������ȷ��ֵ���Ľ�㡣
//
////�����ӿڶ��壺
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
//    int data; //����������
//    struct LNode* next; //����ָ����
//} LNode, * LinkList; //LinkListΪָ��ṹ��LNode��ָ������
//
//void InitList(LinkList& L) //��������
//{
//    L = new LNode;
//    L->next = NULL;
//}
//bool LocateElem(LinkList L, int e) //�ж�List����û��e���Ԫ��
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
//void ListInsert(LinkList& L, int e) //��e���뵽List��
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
//void ListOutput(LinkList L) //���List
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
///* ����������д�� */
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

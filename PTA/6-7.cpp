//// 6-7 ��������-CPP
//
////���һ���㷨��ͨ������һ�ˣ������������н������ӷ�����ת��������ԭ��Ĵ洢�ռ䡣
//
////�����ӿڶ��壺
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
///* ����������д�� */
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

//// 6-3 ���Ͻ���-CPP
//// ��֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С�������㷨���A��B�Ľ������������A�����С�
//
////�����ӿڶ��壺
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
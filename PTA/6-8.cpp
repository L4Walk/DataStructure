//// 6-8 ���������ɾ��-CPP
//
//// ���һ���㷨��ɾ����������������ֵ����mink��С��maxk������Ԫ�أ�mink��maxk�Ǹ�����������������ֵ���Ժͱ��е�Ԫ����ͬ��Ҳ���Բ�ͬ ����
//
//// �����ӿڶ��壺
///*
//void Delete(LinkList& L, int mink, int maxk)��
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

//// ��֪��������A��B�ֱ��ʾ�������ϣ���Ԫ�ص������С�������㷨�����������A��B �Ĳ����������A�г��ֶ�����B�г��ֵ�Ԫ�������ɵļ��ϣ�������ͬ������ʽ�洢��ͬʱ���ظü��ϵ�Ԫ�ظ�����
//
//// �����ӿڶ��壺
///*
//void Difference(LinkList& La, LinkList& Lb, int& n)��
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
//    Difference(la, lb, n);//��洢��la�У�nΪ�Ԫ�ظ���
//    cout << n << endl;
//    ListOutput(la);
//
//    return 0;
//}

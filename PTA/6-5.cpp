//// 6-5 ����ֽ�-CPP
//
//// ����㷨��һ����ͷ���ĵ�����A�ֽ�Ϊ����������ͬ�ṹ������B��C������B��Ľ��ΪA����ֵС����Ľ�㣬��C��Ľ��ΪA����ֵ������Ľ�㣨����A�е�Ԫ��Ϊ����������Ҫ��B��C������A��Ľ�㣩��
//
//// �����ӿڶ��壺
///*
//	LinkList DisCompose(LinkList& A)��
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
//LinkList DisCompose(LinkList& A)
//{
//    LinkList L1, L2, temp;
// 
//    L1 = A->next;
//    A->next = NULL;
//
//    L2 = new LNode;
//    L2->next = NULL;
//
//    while (L1) {
//        temp = L1;
//        L1 = L1->next;
//
//        if (temp->data > 0) {
//            temp->next = L2->next;
//            L2->next = temp;
//        }
//        else if (temp->data < 0) {
//            temp->next = A->next;
//            A->next = temp;
//        }
//    }
//
//    return L2;
//}
//
//int main()
//{
//    freopen("6-5.in", "r", stdin);
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
//    lc = DisCompose(la);
//    ListOutput(la);
//    ListOutput(lc);
//
//    return 0;
//}

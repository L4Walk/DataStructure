//// 6-9 ˫ѭ������ڵ㻻��-CPP
//
//// ��֪pָ��˫��ѭ�������е�һ����㣬����ṹΪdata��prior��next������д���㷨change(p),����p��ָ��Ľ�������ǰ׺����˳�򡣣���������ָ��p�ǵ�m����㣬��m=1�ǵ�һ��Ԫ�أ�����Ҫ�����һ��Ԫ�ؽ���λ�ã�
//
///*
//�����ӿڶ��壺
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
//typedef int Status; //Status �Ǻ�������ֵ���ͣ���ֵ�Ǻ������״̬���롣
//typedef int ElemType; //ElemType Ϊ�ɶ�����������ͣ�����Ϊint����
//
//typedef struct DuLNode {
//    ElemType data; //������
//    struct DuLNode* prior; //ֱ��ǰ��
//    struct DuLNode* next; //ֱ�Ӻ��
//} DuLNode, * DuLinkList;
//
//int length;
//
//Status InitDuList(DuLinkList& L) {
//    //����һ���յ�˫��ѭ������L
//    L = new DuLNode; //�����½����Ϊͷ��㣬��ͷָ��Lָ��ͷ���
//    L->next = L; //ͷ����ָ�����ÿ�
//    L->prior = L;
//    return OK;
//}
//
//DuLNode* GetElem(DuLinkList L, int i) {
//    //�ڴ�ͷ����˫������L�в��ҵ�i��Ԫ�أ����ؽ��ĵ�ַ
//    int j;
//    DuLinkList p;
//    p = L->next;
//    j = 0; //��ʼ����pָ���һ����㣬jΪ������
//    while (j < i && p != L) { //˳�������ɨ�裬ֱ��pָ���i��Ԫ�ػ�pΪ��
//        p = p->next;
//        ++j;
//    }
//    if (j == i)return p;
//    if (p == L || j > i)
//        return NULL; //��i��Ԫ�ز�����
//}
//
//void Insert(DuLinkList& L, ElemType e) { //˫��ѭ�������������ĩβ�Ĳ���
//
//    DuLinkList s, p;
//
//    s = new DuLNode; //�����½��s
//    s->data = e; //�����s������Ϊe
//
//    p = L->prior;
//    s->next = L;
//    s->prior = p;
//    p->next = s;
//    L->prior = s;
//}
//
//void ListOutput(DuLinkList L) //���List
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
///* ����������д�� */
//void  Exchange(DuLinkList& L, DuLinkList& p)
//{
//    DuLinkList l0,l1, head;   // l0��ʾǰ����ǰ����l1��ʾǰ��
//    head = L;
//    p = p->prior;   // pta����Ҫ������ע�͵�
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
//        // �Ͽ�ǰ������ǰ��������
//        l0->next = p;
//   
//        // �Ͽ����������Ӳ����½ڵ�����
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

#include<iostream>
using namespace std;

#define MAX_SIZE 50
enum menu
{
    M_none, M_insert, M_delete, M_search, M_change, M_print, M_clear, M_exit
};
typedef struct Student
{
    char name[MAX_SIZE];
    char snum[MAX_SIZE];
}STUDENT, * PSTUDENT;

typedef struct node
{
    STUDENT student;
    node* pNext;
}NODE, * PNODE;

typedef struct list
{
    PNODE pb;
    PNODE pe;
    int idk;
}LIST, * PLIST;

void init(PLIST plist)
{
    plist->pb = NULL;
    plist->pe = NULL;
    plist->idk = 0;

}
void Insert(PLIST plist)
{
    STUDENT stu;
    cin >> stu.name >> stu.snum;
    PNODE pNode = new NODE;
    pNode->student = stu;
    pNode->pNext = NULL;

    if (plist->pb == NULL)
        plist->pb = pNode;
    else
        plist->pe->pNext = pNode;
    plist->pe = pNode;
    plist->idk++;
}
void Delete(PLIST plist, const char name[MAX_SIZE])
{
    PNODE pNode = new NODE;//���� ��带 ���� ��� �����Ҵ�
    PNODE prevNode = new NODE;//���� ��带 ���� ��� �����Ҵ�
    pNode = plist->pb; //ù ��° ��带 ��Ҵ�
    prevNode == NULL; //�ʱ�ȭ

    while (pNode != NULL)//������ ��带 ��������. name �̶� ��ġ�ϴ���?
    {
        if (pNode->student.name == name) //���� ��� (ó������ ����)�� �̸��� ���ٸ�??
            break; //������
        else
        {
            prevNode = pNode; //���� ��忡 ���� ��带 ��´�.
            pNode = pNode->pNext; //���� ��忡 ���� ��带 ����.
        }
    }
    //���� ���� ����
    if (prevNode == NULL)//��尡 ù��° �� ��: plist->pb = pNode->pNext //��带 �� �������� �ٲ۴�.
    {
        plist->pb = pNode->pNext;
    }
    else if (pNode->pNext == NULL) //������ ����ִٸ�..//��尡 �������� ���� ��: ���� ���->pNext = NULL
    {
        prevNode->pNext = NULL;
    }
    else//��尡 �߰��� ���� ��: �������->pNext�� pNode->pNext�� ... //������带 ��� ���ұ�. ���� ���� ������ �� ���� ��带 ��������..
    {
        prevNode->pNext = pNode->pNext;
    }
    delete pNode;//��带 delete �Ѵ�.
}
void stu_print(PSTUDENT student)
{
    cout << student->name;
    cout << student->snum;
}
void print(PLIST plist)
{
    PNODE pNode = plist->pb;
    while (pNode != NULL)
    {
        stu_print(&pNode->student);
        pNode = pNode->pNext;
    }
    cout << plist->idk;
}
int Showmenu()
{
    int a;
    cout << "���" << endl;
    cout << "1.�л���� 2.���� 3.ã�� 4. �й��ٲٱ�? 5.��ü��� 6. ��ü���� 7.����" << endl;
    cout << "�Է� :";
    cin >> a;
    return a;
}

int main()
{
    LIST tlist;

    while (true)
    {
        int select = Showmenu();

        if (select == M_exit)
            break;

        switch (select)
        {
        case M_insert:
            break;
        case M_delete:
            break;
        case M_search:
            break;
        case M_change:
            break;
        case M_print:
            break;
        case M_clear:
            break;
        }
    }
}
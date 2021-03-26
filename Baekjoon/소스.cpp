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
    PNODE pNode = new NODE;//현재 노드를 담을 노드 동적할당
    PNODE prevNode = new NODE;//이전 노드를 담을 노드 동적할당
    pNode = plist->pb; //첫 번째 노드를 담았당
    prevNode == NULL; //초기화

    while (pNode != NULL)//삭제할 노드를 선택하자. name 이랑 일치하는지?
    {
        if (pNode->student.name == name) //현재 노드 (처음부터 시작)가 이름과 같다면??
            break; //빤쓰런
        else
        {
            prevNode = pNode; //이전 노드에 현재 노드를 담는당.
            pNode = pNode->pNext; //현재 노드에 다음 노드를 연결.
        }
    }
    //이제 삭제 시작
    if (prevNode == NULL)//노드가 첫번째 일 때: plist->pb = pNode->pNext //노드를 그 다음노드로 바꾼당.
    {
        plist->pb = pNode->pNext;
    }
    else if (pNode->pNext == NULL) //다음이 비어있다면..//노드가 마지막에 있을 때: 이전 노드->pNext = NULL
    {
        prevNode->pNext = NULL;
    }
    else//노드가 중간에 있을 때: 이전노드->pNext를 pNode->pNext로 ... //이전노드를 어떻게 구할까. 다음 노드로 연결할 때 이전 노드를 저장하자..
    {
        prevNode->pNext = pNode->pNext;
    }
    delete pNode;//노드를 delete 한다.
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
    cout << "골라" << endl;
    cout << "1.학생등록 2.삭재 3.찾기 4. 학번바꾸기? 5.전체출력 6. 전체삭제 7.종료" << endl;
    cout << "입력 :";
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
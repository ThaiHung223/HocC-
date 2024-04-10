#include<iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
struct SinhVien{
	int msv;
	float m1,m2,m3,tb;
	char ten[50];
};
struct Node
{
    SinhVien *data;
    Node *pNext;
};
struct SingleList
{
    Node *pHead;
};
void Initialize(SingleList *&list)
{
    list=new SingleList;
    list->pHead=NULL;
}
SinhVien *themsinhvien()
{
    SinhVien *sv=new SinhVien;
    cout<<"Nhap MSSV:";
	cin>>sv->msv;    
	cin.ignore();
    cout<<"Nhap ho va ten:";
    gets(sv->ten);
    return sv;
    cout<<"Nhap diem mon 1:";
    cin>>sv->m1; 
    cout<<"Nhap diem mon 2:";
    cin>>sv->m2; 
    cout<<"Nhap diem mon 3:";
	cin>>sv->m3; 
	cout<<"Diem trung binh la:"<< (sv->m1+sv->m2+sv->m3)/3;
}
Node *CreateNode(SinhVien *sv)
{
    Node *pNode=new Node;
    if(pNode!=NULL)
    {
        pNode->data=sv;
        pNode->pNext=NULL;
    }
    else
    {
        cout<<"cap phat bo nho that bai!!!";
    }
    return pNode;
}
//them node vao cuoi danh sach
void InsertLast(SingleList *&list,SinhVien *sv)
{
    Node *pNode=CreateNode(sv);
    if(list->pHead==NULL)
    {
        list->pHead=pNode;
    }
    else
    {
        Node *pTmp=list->pHead;
         
        while(pTmp->pNext!=NULL)
        {
            pTmp=pTmp->pNext;
        }
        pTmp->pNext=pNode;
    }
}
//hien thi danh sach
void PrintList(SingleList *list)
{
    Node *pTmp=list->pHead;
    if(pTmp==NULL)
    {
        cout<<"Danh sach rong";
        return;
    }
    while(pTmp!=NULL)
    {
        SinhVien *sv=pTmp->data;
        cout<<sv->msv<<"\t"<<sv->ten<<"\t"<<sv->m1<<"\t"<<sv->m2<<"\t"<<sv->m3<<"\n";
        pTmp=pTmp->pNext;
    }
}
//sap xep
void SortList(SingleList *&list)
{
    for(Node *pTmp=list->pHead;pTmp!=NULL;pTmp=pTmp->pNext)
    {
        for(Node *pTmp2=pTmp->pNext;pTmp2!=NULL;pTmp2=pTmp2->pNext)
        {   
            SinhVien *svTmp=pTmp->data;
            SinhVien *svTmp2=pTmp2->data;
            if(svTmp2->msv<svTmp->msv)
            {
                int msv=svTmp->msv;
                char ten[150];
                strcpy(ten,svTmp->ten);
                 
                svTmp->msv=svTmp2->msv;
                strcpy(svTmp->ten,svTmp2->ten);
                svTmp2->msv=msv;
                strcpy(svTmp2->ten,ten);             
            }
        }   
    }
}
//xoa
void RemoveNode(SingleList *&list,int msv)
{
    Node *pDel=list->pHead;
    if(pDel==NULL)
    {
        cout<<"Danh sach rong!";
    }
    else
    {
        Node *pPre=NULL;
        while(pDel!=NULL)
        {
            SinhVien *sv=pDel->data;
            if(sv->msv==msv)
                break;
            pPre=pDel;
            pDel=pDel->pNext;
        }
        if(pDel==NULL)
        {
            cout<<"khong tim thay MSSV: "<<msv;
        }
        else
        {
            if(pDel==list->pHead)
            {
                list->pHead=list->pHead->pNext;
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
            else
            {
                pPre->pNext=pDel->pNext;
                pDel->pNext=NULL;
                delete pDel;
                pDel=NULL;
            }
        }
    }
}
int main(int argc, char** argv) {
    SingleList *list;
    Initialize(list);
    SinhVien *teo=themsinhvien();
    InsertLast(list,teo);
    SinhVien *ty=themsinhvien();
    InsertLast(list,ty);
    SinhVien *bin=themsinhvien();
    InsertLast(list,bin);
    PrintList(list);
    SortList(list);
    cout<<"\nSau khi sap xep:\n";
    PrintList(list);
    cout<<"\nBan muon xoa sinh vien co MSSV: ";
    int msv;
    cin>>msv;
    int m1,m2,m3;
    cin>>m1>>m2>>m3;
    RemoveNode(list,msv);
    cout<<"\nSau khi xoa:\n";
    PrintList(list);
  cout<<"\n---------------------------\n";
}


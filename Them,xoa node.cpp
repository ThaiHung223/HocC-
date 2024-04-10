#include<iostream>
using namespace std;
struct node{
    int data; 
    struct node *pLeft; 
    struct node *pRight; 
};
typedef struct node NODE;
typedef NODE* TREE;
void KhoiTaoCay(TREE &t){
    t = NULL;
}
void ThemNodeVaoCay(TREE &t, int x){
    if (t == NULL){
        NODE *p = new NODE;
        p->data = x;
        p->pLeft = NULL;
        p->pRight = NULL;
        t = p;
    }
    else{
        if (x < t->data){
            ThemNodeVaoCay(t->pLeft, x);
        }
        else if (x > t->data){
            ThemNodeVaoCay(t->pRight, x);
        }
    }
}
void NLR(TREE t){
    if (t != NULL){
        cout << t->data << "  ";
        NLR(t->pLeft);
        NLR(t->pRight);
    }
}
NODE* TimKiem(TREE t, int x){ 
    if (t == NULL){
        return NULL;
    }
    else{
        if (x < t->data){
            TimKiem(t->pLeft, x);
        }
        else if (x > t->data) {
            TimKiem(t->pRight, x);
        }
        else {
            return t; 
        }
    }
}
void NodeThayThe(TREE &X, TREE &Y){
    if (Y->pLeft != NULL){
        NodeThayThe(X, Y->pLeft);
    }
    else {
        X->data = Y->data; 
        X = Y; 
        Y = Y->pRight; 
    }
}
void XoaNode(TREE &t, int data){
    if (t == NULL){
        return;
    }
    else{
        if (data < t->data){
            XoaNode(t->pLeft, data);
        }
        else if (data > t->data){
            XoaNode(t->pRight, data);
        }
        else{
            NODE *X = t;
            if (t->pLeft == NULL){
                t = t->pRight; 
            }
            else if (t->pRight == NULL){
                t = t->pLeft;
            }
            else{
                NodeThayThe(X, t->pRight);
            }
            delete X;
        }
    }
}
void Menu(TREE &t){
    int luachon;
    while(true){
        cout << "\n\n\t\t ============ MENU ============";
        cout << "\n1. Nhap phan tu";
        cout << "\n2. Duyet cay";
        cout << "\n3. Xoa node";
        cout << "\n4. Tim kiem phan tu trong cay";
        cout << "\n0. Thoat";
        cout << "\n\n\t\t =============  END  =============";
  
        cout << "\nNhap lua chon: ";
        cin >> luachon;
  
        if (luachon == 1){
            int x;
            cout << "\nNhap gia tri: ";
            cin >> x;
            ThemNodeVaoCay(t, x);
        }
        else if (luachon == 2){
            cout << "\nCay nhi phan gom\n";
            NLR(t);
        }
        else if (luachon == 3){
            int x;
            cout << "\nNhap gia tri can xoa: ";
            cin >> x;
            XoaNode(t, x);
            }
        else if (luachon == 4){
            int x;
            cout << "\nNhap phan tu can tim kiem: ";
            cin >> x;
            NODE *p = TimKiem(t, x);
            if (p == NULL){
                cout << "\nPhan tu " << x << " Khong ton tai trong cay";
            }
            else{
                cout << "\nPhan tu " << x << " Co ton tai trong cay";
            }
        }
		else{
            break;
        }
    }
}
  
  
int main(){
    TREE t;
    KhoiTaoCay(t);
    Menu(t);
    cout<<"\n---------------------------------\n";
}

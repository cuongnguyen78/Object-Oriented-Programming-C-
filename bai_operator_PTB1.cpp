#include<bits/stdc++.h>
using namespace std;
class PTB1
{
private:
    int a;
    int b;
    int c;
public:
    PTB1()
    {
        a =0;
        b =0;
        c=0;
    }
    PTB1(int A, int B, int C)
    {
        A = a;
        B = b;
        C = c;
    }
    PTB1 operator+(PTB1 M);
    PTB1 operator-(PTB1 M);
    friend istream& operator>>(istream& is,PTB1 &M);
    friend ostream& operator<<(ostream& os,PTB1 M);
};
PTB1 PTB1::operator+(PTB1 M)
{
    PTB1 f;
    f.a = a + M.a;
    f.b = b + M.b;
    f.c = c + M.c;
    return f;
}
PTB1 PTB1::operator-(PTB1 M)
{
    PTB1 f;
    f.a = a - M.a;
    f.b = b - M.b;
    f.c = c - M.c;
    return f;
}
istream& operator>>(istream& is,PTB1 &M)
{
    cout<<"Nhap he so a:";  is>>M.a;
    cout<<"Nhap he so b:";  is>>M.b;
    cout<<"Nhap he so c:";  is>>M.c;
}
ostream& operator<<(ostream& os,PTB1 M)
{
    cout<<"Phuong Trinh:"<<M.a<<"x+"<<M.b<<"y+"<<M.c<<"=0"<<endl;
}
int main()
{
    PTB1 e, f , g, h;
    cout<<"Nhap phuong trinh thu nhat:"<<endl;
    cin>>e;
    cout<<"Nhap phuong trinh thu hai:"<<endl;
    cin>>g;

    cout<<"Tong hai phuong trinh:"<<endl;
     f = e+g;
     cout<<f;
     cout<<"Hieu hai phuong trinh:"<<endl;
     h = e-g;
     cout<<h;
     return 0;
}

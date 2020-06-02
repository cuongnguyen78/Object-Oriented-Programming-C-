#include<bits/stdc++.h>
using namespace std;
class S
{
private:
    float x;
public:
    friend istream& operator>>(istream& is,S &X)
    {
        cout<<"nhap x=";       is>>X.x;
    }
    S operator+(S X)
    {
        S tam;
        tam.x = x+X.x;
        return tam;
    }
    S operator-(S X)
    {
        S tam;
        tam.x = x-X.x;
        return tam;
    }
    friend ostream&operator<<(ostream& os, S X)
    {
        os<<X.x;
    }
};
int main()
{
    S A,B;
    cout<<"nhap vao so thu nhat"<<endl;
    cin>>A;
    cout<<"nhap vao so thu hai"<<endl;
    cin>>B;
    S C=A+B;
    cout<<"tong cua hai so = "<<C;
    S D=A-B;
    cout<<"hieu cua hai so ="<<D;
    return 0;
}

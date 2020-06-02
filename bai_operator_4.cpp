
#include<bits/stdc++.h>
using namespace std;
class PHANSO
{
private:
    float TuSo;
    float MauSo;
public:
    PHANSO()
    {
        TuSo=0;
        MauSo=0;
    }
    PHANSO(float y, float z)
    {
        TuSo=y;;
        MauSo=z;
    }
    friend istream& operator>>(istream& is,PHANSO &X)
    {
        cout<<"nhap tu so:";   is>>X.TuSo;
        cout<<"nhap mau so:";   is>>X.MauSo;
    }
    PHANSO operator/(PHANSO X)
    {
        PHANSO tam;
        tam.TuSo = TuSo * X.MauSo ;
        tam.MauSo = MauSo * X.TuSo;
        return tam;
    }
    friend ostream& operator<<(ostream& , PHANSO X)
    {
        cout<<X.TuSo<<"/"<<X.MauSo;
        cout<<" = "<<1.0*X.TuSo/X.MauSo;
    }

};
int main()
{
    PHANSO A,B;
    cout<<"nhap vao phan so thu nhat"<<endl;
    cin>>A;
    cout<<"nhap vao phan so thu hai"<<endl;
    cin>>B;
    PHANSO C=A/B;
    cout<<"thuong hai phan so = "<<C;
    return 0;
}

 #include<bits/stdc++.h>
using namespace std;
#define max 10

class matran
{
private:
    int a[max][max];
    int n;
public:
    matran(int n)
    {
        this->n =n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                a[i][j] = 0;
            }
        }
    }
    friend istream& operator>>(istream& is, matran &m);
    friend ostream& operator<<(ostream& os, matran m);
    matran operator+(matran &m);
    matran operator-(matran &m);
    matran operator*(matran &m);
};
istream& operator>>(istream& is, matran &m)
{
   cout << endl;
        for (int i = 1; i <= m.n; i++)
        {
            for (int j = 1; j <=m.n ; j++)
            {

                cout << "phan tu thu [" << i << "][" << j << "]: ";
                is>>m.a[i][j];
            }
        }
        return is;
        cout << endl;
}
ostream& operator<<(ostream& os, matran m)
{
    for(int i = 1; i <= m.n; i++)
        {
            for (int j = 1; j <= m.n; j++)
            {
               os<<" "<<m.a[i][j];
            }
            cout << endl;
        }
        return os;
}


matran matran::operator+(matran &m)
{
        matran c(m.n);

        for (int i = 1; i <= m.n; i++)
        {
            for (int j = 1; j <= m.n; j++)
            {

                c.a[i][j] +=this->a[i][j] + m.a[i][j];
            }
        }
    return c;
}
matran matran::operator-(matran &m)
{
       matran c(m.n);

        for (int i = 1; i <= m.n; i++)
        {
            for (int j = 1; j <= m.n; j++)
            {

                c.a[i][j] -=this->a[i][j] + m.a[i][j];
            }
        }
    return c;
}
matran matran::operator*(matran &m)
    {
         matran c(m.n);

        for (int i = 1; i <= m.n; i++)
        {
            for (int j = 1; j <= m.n; j++)
            {
                 for(int k=1; k<=m.n;k++)
                 {
                     c.a[i][j]+= this->a[i][k] * m.a[k][j];
                 }
            }
        }
        return c;
}

int main()
{
     int n;
    cout << "nhap cap cua ma tran: ";
    cin >> n;
    matran e(n),f(n),g(n),h(n),l(n);
    cout << "Nhap ma tran thu nhat:";
    cin>>e;
    cout << "\nNhap ma tran thu hai:";
    cin>>f;
    cout << "\n Ma tran A:\n";
    cout<<e;
    cout << "\n Ma tran B:\n";
    cout<<f;
    g = e + f;
    cout << "\n Tong 2 ma tran AB:\n";
    cout<<g;
    h = e - f;
    cout << "\n Hieu 2 ma tran AB:\n";
    cout<<h;
    l = e * f;
    cout << "\n nhan 2 ma tran AB:\n";
    cout<<l;
    system("pause");
}

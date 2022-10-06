#include <iostream>
using namespace std;

int main()
{
    int luas, keliling;
    int alas, tinggi, sisi;
    
    cout << "Aplikasi Hitung Luas dan Keliling Segitiga" <<endl;
    cout <<"masukkan alas "; cin >> alas;
    
    cout <<"masukkan tinggi "; cin >> tinggi;
    
    cout <<"masukkan sisi "; cin >> sisi;
    
    keliling = sisi+sisi+sisi;
    cout <<"keliling segitiga= "<<keliling<<endl;
    
    luas = 0.5 * alas * tinggi;
    cout <<"luas segitiga= "<<luas;
}
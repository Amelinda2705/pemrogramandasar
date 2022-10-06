#include <iostream>
using namespace std;

int main()
{
    cout << "kalkulator"<<endl;
    cout << "masukkan angka pertama= ";
    int angka1;
    cin >> angka1;
    
    cout << "masukkan angka kedua= ";
    int angka2;
    cin >> angka2;
    
    cout << "masukkan angka ketiga= ";
    int angka3;
    cin >> angka3;
    
    int hasil;
        hasil=(angka1+angka2)/angka3;
        cout <<"hasil rumus= "<<hasil;
}
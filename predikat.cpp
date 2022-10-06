#include <iostream>
using namespace std;

int main()
{
    int nilai ;
    cout <<"masukkan nilai "; cin >> nilai;
    if (nilai >78){
      cout<<"lulus";
      } else if (nilai == 78){
        cout<< "kkm";
      } else {
        cout <<"tidak lulus";
      }
}
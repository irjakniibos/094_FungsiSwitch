#include <iostream>
using namespace std;

int bilSatu,bilDua;  //membuat variabel global 

void input (){
    cout << "Masukan Bilanga Pertama = " ;
    cin >> bilSatu ;
    cout << "Masukan Bilangan kedua = " ;
    cin >> bilDua ;
}

float Penjumlahan(float a,float b)
{
    return a + b ;
}

float pembagian(float a,float b)
{
    return a / b ;
}

float perkalian(float a,float b)
{
    return a * b ;
}


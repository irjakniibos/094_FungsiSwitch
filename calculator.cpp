#include <iostream>
using namespace std;

int bilSatu, bilDua; // membuat variabel global

void input()
{
    cout << "Masukan Bilanga Pertama = ";
    cin >> bilSatu;
    cout << "Masukan Bilangan kedua = ";
    cin >> bilDua;
}

float penjumlahan(float a, float b)
{
    return a + b;
}

float pembagian(float a, float b)
{
    return a / b;
}

float perkalian(float a, float b)
{
    return a * b;
}

float pengurangan(float a, float b)
{
    return a - b;
}

int main()
{
    int pilihan;

    do
    {
        cout << "==================" << endl;
        cout << "Menu" << endl;
        cout << "Pemjumlahan" << endl;
        cout << "Pembagian" << endl;
        cout << "Perkalian" << endl;
        cout << "Pengurangan" << endl;
        cout << "Masukan pilihan 1/2/3/4/5 = ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1 :
            input();
            cout << "hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
            break;
    }
}
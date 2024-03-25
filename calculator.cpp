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
    do{ 
        system("cls");
        cout << "==================" << endl;
        cout << "Menu" << endl;
        cout << "1.Pemjumlahan" << endl;
        cout << "2.Pembagian" << endl;
        cout << "3.Perkalian" << endl;
        cout << "4.Pengurangan" << endl;
        cout << "5.Exit" << endl;
        cout << "Masukan pilihan 1/2/3/4/5 = ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1 :
            input();
            cout << "hasil penjumlahan = " << penjumlahan(bilSatu, bilDua) << endl;
            system("pause");
            break;
        case 2 :
            input();
            cout << "hasil pembagian = " << pembagian(bilSatu, bilDua) << endl;
            system("pause");
            break; 
        case 3 :
            input();
            cout << "hasil perkalian = " << perkalian(bilSatu, bilDua) << endl;
            system("pause");
            break;
        case 4 :
            input();
            cout << "hasil pengurangan = " << pengurangan(bilSatu, bilDua) << endl;
            system("pause");
            break;
        case 5 :
            break;
        default :
            cout << "pilihan tidak ada" << endl;
            system("pause");
            break; }
        }while(pilihan != 5) ;
}
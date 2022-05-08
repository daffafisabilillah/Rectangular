#include <iostream>
#include "include/rectangular.hpp"
using namespace std;

int main()
{
    double x_Center, y_Center,  width_X,  height_Y;

    cout << "Masukkan data persegi panjang pertama" << endl;
    cout << "Panjang        : ";
    cin >> width_X;
    cout << "Lebar          : ";
    cin >> height_Y;
    cout << "Titik tengah X : ";
    cin >> x_Center;
    cout << "Titik tengah Y : ";
    cin >> y_Center;

    PersegiPanjang P1( width_X,  height_Y,  x_Center,  y_Center);

    cout << "\n" << endl;

    cout << "Masukkan data persegi panjang kedua" << endl;
    cout << "Panjang        : ";
    cin >> width_X;
    cout << "Lebar          : ";
    cin >> height_Y;
    cout << "Titik tengah X : ";
    cin >> x_Center;
    cout << "Titik tengah Y : ";
    cin >> y_Center;

    PersegiPanjang P2( width_X,  height_Y,  x_Center,  y_Center);     

    cout << endl 
         << endl;

    cout << "Persegi Panjang 1 : " << endl;
    P1.print();

    cout << "Persegi Panjang 2 : " << endl;
    P2.print();

    cout << endl 
         << endl;

    cout << "Gabungan persegi panjang : " << endl;
    PersegiPanjang P3 = P1 + P2;
    P3.print();

    cout << "Irisan persegi panjang   : " << endl;
    PersegiPanjang P4 = P1 - P2;
    P4.print();

    cout << endl 
         << endl;

    cout << "Persegi Panjang 1                      : " << endl;
    P1.print();
    ++P1;

    cout << "Persegi Panjang 1 dengan operator ++   : " << endl;
    P1.print();
    --P1;

    cout << "Persegi Panjang 2                    : " << endl;
    P2.print();
    ++P2;

    cout << "Persegi Panjang 2 dengan operator ++ : " << endl;
    P2.print();
    --P2;

    cout << endl 
         << endl;
    
    cout << "Persegi Panjang 1                    : " << endl;
    P1.print();
    --P1;

    cout << "Persegi Panjang 1 dengan operator -- : " << endl;
    P1.print();
    ++P1;

    cout << "Persegi Panjang 2: " << endl;
    P2.print();
    --P2;

    cout << "Persegi Panjang 2 dengan operator -- : " << endl;
    P2.print();
    ++P2;

    cout << endl 
         << endl;

    cout << "Melakukan operator == : " << endl;
    if (P1==P2){
        cout << "Kedua persegi panjang beririsan" ;
    }else{
        cout << "Kedua persegi panjang tidak beririsan" ;
    }

    cout << endl 
         << endl;

    return 0;
}
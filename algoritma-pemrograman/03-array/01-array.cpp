#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;
using std::vector;

// ARRAY SATU DIMENSI

// maksimal untuk define sebuah typedef
int contoh = 5;
typedef int Array[10]; // penggunaan typedef ukurannya yang sudah pasti fix saat kompilasi, kompiler harus tahu persis berapa ukuran memori yang dibuthkan
vector<int> array2(contoh); // bisa menggunakan vektor untuk ukuran array yang dinamis atau input

/*  Untuk bisa membuat sebuah program modular melalui passing, maka disarankan untuk menggunakan
typedef, yang membuat sintaksis menjadi seragam*/

/*  pengiriman nilai array data primitif adalah pengiriman pointer ke alamat awal  dari
memori dimana array berada, maka dari itu nilai array bisa diubah oleh fungsi, walaupun pengiriman
dilakukan secara value, tetapi seakan akan seperti pass by reference  */

/*  Kalo elemen bentukan, tetap harus dipanggil menggunakan pass by reference untuk mengubah
nilai dari arrray tersebut*/
void typeDefFunc(){
    Array data; // merupakan suatu variabel array of int dengan ukuran 10 elemen 
    int n; //input tidak boleh dari 10 karena akan out of bounds, dan jika tidak diisi akan mengambil elemen random
    cout << "Banyak Data : "; cin >> n;

    for (int i=0; i < n;i++){
        cout << "Data " << i + 1 << " : "; cin >> data[i];
    }

    for (int i = 0; i < n; i++){
        cout << "Data " << i + 1 << " = " << data[i] << endl;
    }
}

// perulangan untuk elemen dalam array
void forEach(){
    // sebenarnya bisa tidak ditulis angka 5, tapi elegannya ditulis
    int myNumber[5] = {10,20,30,40,50};

    for (int i : myNumber){
        cout << i << endl;
    }
}

void banyakData(int &n){
    cout << "Masukkan banyak data anda: "; cin >> n;
}

void isiArray(Array& x, int n){
    for (int i = 0; i < n; i++){
        cout << "Masukkan data ke - " << i + 1 << " : "; cin >> x[i];
    }
}

float cariRata(Array x, int n){
    float jumlah = 0;

    for (int i = 0; i < n; i++){
        jumlah += x[i];
    }

    return jumlah/n;
}

int maksArray(Array x, int n){
    int maksimum = x[0]; //bisa juga menggunakan data sentinel sebagei placeholder

    for (int i = 1; i < n; i++){
        if (x[i] > maksimum){
            maksimum = x[i];
        }
    }

    return maksimum;
}

void printArray(Array a, int n){
    cout << "\nData yang Sudah dimasukkan: " << endl;

    for (int i = 0; i < n; i++){
        cout << "Data ke - " << i + 1 << " : " << a[i] << endl;
    }

    cout << "Rata rata Array: " << fixed << setprecision(2) << cariRata(a, n) << endl;
    cout << "Maksimum Array : " << maksArray(a, n) << endl;

}

//contoh penggunaan array non primitif (typedef termasuk non primitif)
void arrayNonPrimitif(){
    int n;
    Array x;

    banyakData(n);
    isiArray(x, n);
    printArray(x, n);

}

/*      ARRAY 2D    */
typedef int matriks[10][10];

void Array2D(){
    matriks x;
    int nBaris, nKolom;

    cout << "Banyak baris: "; cin >> nBaris;
    cout << "Banyak Kolom: "; cin >> nKolom;

    for (int i = 0; i < nBaris; i++){
        for (int j = 0; j < nKolom; j++){
            cout << "Data ke - [" << i + 1 << "," << j + 1 << "] : "; cin >> x[i][j];
        }
    }

    cout << "\nPencetakan matriks :" << endl;
    for (int i=0; i < nBaris; i++) {
        for (int j=0; j < nKolom; j++) {
                cout << x[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    Array2D();
    return 0;
}
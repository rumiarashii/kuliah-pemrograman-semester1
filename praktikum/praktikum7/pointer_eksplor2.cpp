#include <iostream>
using namespace std;

int main(){
    // array menyimpan pertmambahan sesuai dengan tipe data didalam elemennya
    int arr[] = {10, 20, 30};
    int *ptr = arr; //merujuk pada elemen 0 arr[0], karena nama  array itu sendiri adalah pereferensian ke alamat dari array tersebut

    cout << *ptr++ << endl; // 10, karena dia postfix, maka ptr akan mencetak nilai 10 dulu, baru ditambah 1 sehingga akan menjadi 20
    cout << *ptr << endl; // 20, hasil dari sebelumnya
    cout << (*ptr)++ << endl; //20, mengambil nilai *ptr yaitu 20, dan akan ditambah dengan 1 di operasi balik layar (mengambil valuenya)
    cout << *ptr << endl; //21 printout nilai 21 dari operasi sebelumnya
    cout << ++*ptr << endl; //22 karena di prefix, maka akan mengambil nilai 21 telebih dahulu dan ditambah sehingga menjadi 22

    // sesuai dengan sebelumnya, ++ atau += 1 itu menmabah sesuai dengan jumlah byte dari tipe data

    return 0;
}
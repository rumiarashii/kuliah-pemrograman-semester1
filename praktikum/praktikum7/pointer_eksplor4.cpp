#include <iostream>
using namespace std;

int main(){
    for (int i = 0; i < 200; i++){
        int *p = new int[250000]; // penggunaan heap

        for (int j = 0; j < 250000; j++){
            p[j] = j;
        } 

        cout << "Iterasi: " << i << " | Alamat: " << p << '\n';

        delete[] p; // untuk mengatasi memory leak, jika kita tak hapus, maka akan terjadi memory leak

        // tanpa menggunakan delete, memory akan leak hingga bergiga giga ram, oleh karena itu penggunaan delete sangat sesnsial demi kesehatan our lovely computer
    }

    cin.get(); // membuat program berhenti untuk pengecekan

    // menarik, pointer to struck bisa di akses menggunakan (ptr -> nama)

    return 0;
}
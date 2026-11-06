#include <iostream>
using namespace std;

// pointer adalah variabel yang hanya bisa menyimpan alamat memori variabel lain, hal ini memungkinkan akses dan manipulasi data langsung dari memori
// penggunaan notasi: int *ptr; -> berarti ptr menyimpan alamat dari variabel lain yang bertipe data int, bukan tipe data ptr tersebut int
// pointer juga memiliki alamat memori sendiri

int main(){
    //contoh
    // char c = 'A';
    // char *cPtr;
    cPtr = &c; // -> assign alamat memori dari c ke cPtr menggunakan reference

    // int n = 5;
    // int *p = &n;
    // cout << "n = " << n << ", &n = " << &n << endl;
    // cout << "p = " << p << ", &p = " << &p << endl;

    // penggunaan reference adalah aliasing untuk variable. Jika salah satu variabel diubah maka seluruhnya kaan berubah, bersifat mengikat
    // int &r = n;

    // mengakses nilai dari pointer bisa menggunakan ini lagi * yang berarti dereference
    
    // operasi pointer
    /*Operasi assignment p = q berarti p akan mencatat alamat yang sama dengan q 
    
    - jika float *p kita ingin mengakses *p maka akan error, salah satu caranya bisa p = new float (memesan memori float)
    - oleh karena itu jika kita ingin memesan alamat memori bisa menggunakan new (dynamic programming)
    - tetapi kita juga bisa menggunakan delete untuk memmbebaskan alamat memori yang dicatat oleh pointer
    delete(p) -> bukan perintah menghapus pointer p, tetapi hanya menghapus nilai yang dirujuk pointer p (alamat memori dari variabel yang dirujuk p) 

    contoh Dynamic Programming: 
    */

    int n = 1;
    int *p = &n;
    int *q;
    int *r;
    int *s;
    cout << " n = " << n << " &n = " << &n << endl;

    /*Pointer to record
    Menggunakan -> untuk melakukan akses nilai, jika record biasa tetap menggunakan dot (.)

    */

    return 0;
}
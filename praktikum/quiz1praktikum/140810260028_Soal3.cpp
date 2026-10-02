#include <iostream>

using namespace std;

int nabung(int n){
    //  base case
    if (n <= 0) {
        return 15;
    } 

    if (n % 5 == 0){
        return nabung(n-1) / 5;
    } else if (n % 2 == 0){
        return 2 * nabung(n-1) - 3;
    } else {
        return nabung(n-1);
    }
 
}

int main(){
    int predict1, predict2;
    int duit = 15;
    cout << "Masukkan prediksi pertama: "; cin >> predict1;
    cout << "Masukkan prediksi kedua: "; cin >> predict2;

    cout << "Hasil prediksi: " << nabung(predict1) + nabung(predict2);
}
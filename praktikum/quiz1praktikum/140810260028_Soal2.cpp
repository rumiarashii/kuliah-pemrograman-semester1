#include <iostream>

using namespace std;

void inputN(int &n){
    cout << "Masukkan nilai N: "; cin >> n;
}

void piramidaTerbalik(int n){
    int counter = 0;
    for (int i = 1; i <= n; i++){
  
        for (int j = 1; j <= i; j++){
            cout << "  ";
        }

        for (int k = i; k <= (2 * n - 1) - (counter); k++){
            cout << "* ";
        }

        counter++;

        cout << endl;
    }
}

int main(){
    int n;

    inputN(n);

    piramidaTerbalik(n);
    
}
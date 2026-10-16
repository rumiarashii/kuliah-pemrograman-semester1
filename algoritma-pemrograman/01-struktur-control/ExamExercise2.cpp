/*
    PROGRAM: Exam Exercise 2 Materi penguatan array
*/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void nilaiMahasiswa();
void frequencyFinder();
void circularArray();
void deleteDuplicate();
void hanoi(int n, char asal, char bantu, char tujuan);

int main(){
    deleteDuplicate();
    return 0;
}

void nilaiMahasiswa(){
    int n;
    int total = 0;
    float rata = 0;
    
    cout << "Masukkan jumlah mahasiswa: "; 
    cin >> n;

    if (n <= 0) return;

    vector<int> mahasiswa(n);

    for (int i = 0; i < n; i++){
        cout << "Masukkan nilai mahasiswa ke " << i + 1 << " : "; 
        cin >> mahasiswa[i];
    }

    int maks = mahasiswa[0];
    int min = mahasiswa[0];
    int terbesar = 1;
    int terkecil = 1;

    cout << "\n\nNILAI MAHASISWA\n\n";
    
    for (int i = 0; i < n; i++){
        total += mahasiswa[i];
        
        if (mahasiswa[i] > maks){
            maks = mahasiswa[i];
            terbesar = i + 1;
        }

        if (mahasiswa[i] < min){
            min = mahasiswa[i];
            terkecil = i + 1;
        }

        cout << "Mahasiswa " << i + 1 << " : " << mahasiswa[i] << endl;
    }

    rata = (float)total / n;

    cout << fixed << setprecision(2);
    cout << "Nilai terbesar : " << maks << " oleh mahasiswa " << terbesar << endl;
    cout << "Nilai terkecil : " << min << " oleh mahasiswa " << terkecil << endl;
    cout << "Rata rata      : " << rata << endl;
}

void frequencyFinder(){
    int n;
    
    cout << "Masukkan jumlah bilangan: "; cin >> n;
    vector<int> arr(n);
    vector<bool> cek(n, false);

    for (int i = 0; i < n; i++){
        cout << "Masukkan bilangan ke " << i + 1 << " : "; cin >> arr[i];
    }


    for (int i = 0; i < n; i++){
        if (cek[i] == true){
            continue; 
        }

        int duplicate = 0;

        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                duplicate++;
                cek[j] = true;  
            }
        }

        if (duplicate > 1){
            cout << "Angka "  << arr[i] << ", duplikat sebanyak " << duplicate << endl;
        } else {
            cout << "Angka " << arr[i] << ", tidak ada yang duplikat" << endl;
        }
    }
}

void circularArray(){
    int n;
    int circular;
    cout << "Masukkan jumlah bilangan: "; cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cout << "Masukkan bilangan ke - " << i + 1 << " : "; cin >> arr[i];
    }

    cout << "Masukkan jumlah pergeseran: "; cin >> circular; 

    

    for (int i = 0; i < circular; i++){
        int last = arr.back();
        arr.pop_back();

        arr.insert(arr.begin(), last);
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
  
}


void deleteDuplicate(){
    int array[] = {5,9,10,4,5,6,9,10,11,12};
    int n = 9;

    for (int i = 0; i < n; i++){
        int minIdx = i;

        for (int j = i; j < n; j++){
            if (array[j] < array[minIdx]){
                minIdx = j;
            }
        }

        int temp = array[i];
        array[i] = array[minIdx];
        array[minIdx] = temp;
    }

    // atau bisa dengan arr.erase(arr.begin() + j)
    for (int i = 0; i < n - 1; i++){
       if (array[i] == array[i + 1]){
            for (int j = i; j < n - 1; j++){
                array[j] = array[j + 1];
            }
            n--;
       }
    }

    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}

void hanoi(int n, char asal, char bantu, char tujuan){
    if (n == 1){
        cout << "Pindahkan piringan 1 dari tiang " << asal << " ke tiang " << tujuan << endl;
        return;
    }

    hanoi(n - 1, asal, tujuan, bantu);

    cout << "Pindahkan piringan " << n << " dari tiang " << asal << " ke tiang " << tujuan << endl;

    hanoi(n-1, bantu, asal, tujuan);
}
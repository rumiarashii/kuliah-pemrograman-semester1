#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::locale;



// menggunakan fungsi void untuk memanggil inputData pada main dengan menggunakan pass by reference (untuk mengubuah variabel pada scope lebih besar)
void inputData(string &namakarakter, int &attackPoint, int &level, float &critRate, float &critDmg, char &classType){
    
    // input utama untuk variabel
    cout << "\n-----------------------------------------------"  << endl;
    cout << "Hai Developer!, Silahkan masukkan data karakter" << endl;
    cout << "-----------------------------------------------" << endl;
    
    cout << "Masukkan nama karakter     : "; cin >> namakarakter;
    cout << "Masukkan ATK               : "; cin >> attackPoint;
    cout << "Masukkan crit rate         : "; cin >> critRate;
    cout << "Masukkan crit DMG          : "; cin >> critDmg;
    cout << "Masukkan Jumlah Level      : "; cin >> level;
    cout << "Masukkan tipe kelas        : "; cin >> classType;

    // mengubah huruf pada tipe kelas menjadi uppercase
    classType = toupper(classType);

    // pengecekan jika tipe data salah, maka fungsi akan menjadi rekursif sampai benar
    if (!(classType == 'W' || classType == 'M' || classType == 'A')){
        cout << "Tipe Kelas SALAH!" << endl;
        inputData(namakarakter, attackPoint, level, critRate, critDmg, classType); //void tidak perlu menggunakan return karena memang tidak mereturn suat value
    }
}

// fungsi untuk output data, kita menggunakan variabel tambahan namaClass sebagai placeHolder untuk nama dari tipe class
void outputData(string namakarakter, int attackPoint, char typeClass, string &namaClass){
    cout << "-----------------------------------------------" << endl;
    cout << "                   DATA KARAKTER               " << endl;

    // set namaClass berdasarkan classType 
    switch(typeClass){
        case 'W': namaClass = "Warrior"; break;
        case 'M': namaClass = "Mage"; break;
        case 'A': namaClass = "Archer"; break;
    }

    // output utama
    cout << "Nama Karakter  : " << namakarakter << endl;
    cout << "ATK            : " << attackPoint << endl;
    cout << "Tipe Kelas     : " << namaClass << endl;
    cout << "-----------------------------------------------" << endl;
}

// fungsi untuk menghitung pengaruh critRate ke attackPoint 
float hitungCritDamage(int attackPoint, float critDmg, float critRate, char typeClass){ 
    
    // cek jika critRate >= 80, maka nilai critDmg akan memengaruhi attackPoint secara signifikan
    if (critRate >= 80){
        return attackPoint * critDmg;
    } else { // jika tidak maka attackPoint akan dikali sesuai dengan pembagian classType
        if ((typeClass == 'A') || (typeClass == 'M')){
            return attackPoint * 1.5;
        } else{
            return attackPoint * 2;
        }
    }

}

bool bossMechanism(int bossHp, int finalDamage){
    
    cout << "Menemukan Bos Besar!" << endl;

    if (finalDamage >= bossHp){
        return 1;
    } else {
        return 0;
    }
}

void levelMechanism (int level, int finalDamage, int bossHP){
     char cont;

    for (int i = 1; i <= level; i++){
        cout << "\n\nSekarang berada di level - " << i << endl;
        cout << "Tidak mendapatkan apa apa, lanjut ke level selanjutnya (y/n): "; cin >> cont;
        
        cont = toupper(cont);

        if (cont == 'n'){
            break;
        } else {
            if (i == 2){
                if (bossMechanism(bossHP, finalDamage)){
                    cout << "Anda Menang melawan boss di level - " << i << endl;
                } else {
                    cout << "ANDA KALAH CUPU!!!!!";
                    break;
                }
            }
        }

    }
}

int main(){
    // set dan declare variable utama
    string namakarakter;
    int level;
    
    //attributes
    int attackPoint;
    float critRate;
    float critDmg;
    float finalDamage;

    //levelandboss
    int bossHp1 = 300;

    //class
    char classType;
    string namaClass;

    // pemanggilan fungsi input data dan output data
    inputData(namakarakter, attackPoint, level, critRate, critDmg, classType);
    outputData(namakarakter, attackPoint, classType, namaClass);

    // pemanggilan fungsi float untuk hitungCritDmg, dengan kita harus cout manual karena fungsi floar hanya return nilai float
    cout << "Hasil hitung: " << hitungCritDamage(attackPoint, critDmg, critRate, classType) << endl;
    finalDamage = hitungCritDamage(attackPoint, critDmg, critRate, classType);

    levelMechanism(level, finalDamage, bossHp1);
    
}


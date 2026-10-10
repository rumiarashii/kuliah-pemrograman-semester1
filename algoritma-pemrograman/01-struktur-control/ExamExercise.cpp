#include <iostream>
#include <string>

using namespace std;


// latihan 1
void sistemInsentif(){
    string id;
    char golongan;
    int status;
    int usia;
    int tahunKerja;
    int performaTahunan;
    string predikat;

    bool isTrue = true;

    int gajiPokok = 0;
    int bonus = 0;
    int totalGaji = 0;

    while (isTrue){
        cout << "INPUT DATA" << endl;
        cout << "Masukkan ID Kamu           : "; getline(cin, id); 
        cout << "Golongan Anda(A/B/C)       : "; cin >> golongan;
        cin.ignore();

        golongan = toupper(golongan);
        if (!(golongan == 'A' || golongan == 'B' || golongan == 'C')){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        cout << "Status pegawai(1/2/3)      : "; cin >> status;
        cin.ignore();
        if (!(status == 1 || status == 2 || status == 3)){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        cout << "Usia                       : "; cin >> usia;

        cout << "Masa Kerja (Tahun)         : "; cin >> tahunKerja;
        cout << "Performa Tahunan (1-100)   : "; cin >> performaTahunan;
        cin.ignore();

        if (performaTahunan < 0 || performaTahunan > 100){
            cout << "\nInput tidak valid! \n";
            continue;
        }

        isTrue = false;
    }


    switch (golongan){
    case 'A': gajiPokok = 5000000; break;
    case 'B': gajiPokok = 7500000; break;
    case 'C': gajiPokok = 10000000; break;
    default:
        break;
    }

    if (status == 1){
        if (tahunKerja >= 5 && usia >= 50){ //diputuskan untuk jika umur 50 udah qualify untuk masuk bonus gede
            bonus += 10000000;
        } else if (tahunKerja >= 5 && usia < 50){
            bonus += 3000000;
        } else if (tahunKerja < 5){
            bonus += 5000000;
        }
    } else {
        if (tahunKerja > 3 && performaTahunan >= 85){
            bonus += 4000000;
        } else if (performaTahunan >= 70){
            bonus += 1500000;
        }
    }

    predikat = (performaTahunan >= 75) ? "Sangat Memuaskan" : "Perlu Evaluasi";

    totalGaji = gajiPokok + bonus;

    cout << "\nHasil" << endl;
    cout << "Karyawan dengan ID " << id << endl;
    cout << "Gaji Akhir     : Rp " << totalGaji << " (Dengan performa " << predikat << ") " << endl;
    
}

//lattihan 2
bool checker(int a){
    if (!(a == 1 || a == 2 || a == 3)){
        return true;
    } else {
        return false;
    }
}

void kendaliLaluLintas() {
    int trafficStatus;
    int speed;
    int vehicleType;
    int condition;

    int denda = 0;
    int dendaDasar = 500000;

    string status;


    while (true){
        
        cout << "\nINPUT NILAI ANDA\n";

        cout << "Masukkan status lampu lalu lintas (1=merah, 2=kuning, 3=Hijau)           : "; cin >> trafficStatus;
        if (checker(trafficStatus)){
            cout << "INPUT ANDA SALAH!" << endl;
            continue;
        } 
        cout << "Masukkan kecepadan kendaraan(km/jam)                                     : "; cin >> speed;
        cout << "Masukkan jenis kendaraan (1=Ambulans/Pemadam Kebakaran, 2=VIP, 3=Pribadi): "; cin >> vehicleType;
        if (checker(vehicleType)) {
            cout << "INPUT ANDA SALAH!" << endl;
            continue;
        } 
        cout << "Masukkan kondisi jalan  (1=kering, 2=Basah/Hujan, 3=Es/Licin)            : "; cin >> condition;
        if (checker(condition)) {
            cout << "INPUT ANDA SALAH!" << endl;
            continue;
        }
            

        break;
    }

    if (vehicleType == 1 || vehicleType == 2){
        cout << "AKSES DIBERIKAN: Prioritas Darurat" << endl;
    } else {
        if (trafficStatus == 1 && speed > 0){
            if (condition == 1) {
                denda += dendaDasar;
            } else if (condition == 2) {
                if (speed > 60){
                    denda += dendaDasar * 2;
                } else {
                    denda = denda - (0.2 * dendaDasar);
                }
            } else {
                if (speed > 80){
                    denda += 300000;
                }
            }
        }
    }
    
    status = (denda > 0) ? "KENA TILANG" : "AMAN";
    cout << "\nKENDARAAN ANDA " << status << endl;

    if (denda > 0) {
        cout << "Jumlah Denda: " << denda << endl;
    }


}


// latihan 3
void patternGenaration(int n){
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j++){
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++){

            if (k == 1 || k == 2 * i - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    
    for (int i = n - 1; i >= 1; i--){
        for (int j = i; j <= n; j++){
            cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; k++){
            if (k == 1 || k == 2 * i - 1){
                cout << "*";
            } else {
                cout << " ";
            }
        }

        cout << endl;
    }
}


// latihan 4
void numberPyramid(int n){
    
    for (int i = 0; i < n; i++){
        for (int j = 1; j <= n - i; j++){
            cout << j << " ";
        }

        cout << endl;
    }


    for (int i = 1; i < n; i++){
        for (int j = 1; j <= i + 1; j++){
            cout << j << " ";
        }

        cout << endl;
    }
}

//latihan 5
int hitungDigit(int angka){
    int count = 0;
    while (angka > 0){
        angka /= 10;
        count++;
    }

    return count;
}

bool isPrima(int n){
    if (n <= 1){
        return false;
    } 

    for (i = 2; i < n; i++){
        if (n % i == 0){
            return false;
        }
    }

    return true;
}

void primeDigit(int n){
    int finalDigit = hitungDigit(n);
    int placeholder = n;

    while (finalDigit > 1){
        int sum = 0;

        while (placeholder > 0){
            sum += placeholder % 10;
            placeholder /= 10;
        }

        finalDigit = hitungDigit(sum);
        placeholder = sum;
    }

    if (isPrima(placeholder)){
        cout << "Digit Terakhir " << placeholder << " : " << " BILANGAN PRIMA " << endl;     
    } else {
        cout << "Digit Terakhir " << placeholder << " : " << " BUKAN BILANGAN PRIMA" << endl;
    }
    
}

int main(){ 
    primeDigit(9875);

    return 0;
}
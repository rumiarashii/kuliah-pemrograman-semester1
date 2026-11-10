/*
Nama Lengkap            : Muhammad Celaleddin Rumi Arashi
Nomor Pokok Mahasiswa   : 140810260028
Kelas                   : Kelas B
*/

// ATURAN = DILARANG MENGUBAH bagian selain /* TODO X */

#include <iostream>
using namespace std;

void moodMarah(int &a, int &b, int faktor) {
    a += faktor;
    b *= 2;
    a = b + faktor;
}

int main() {
    // ===== BAGIAN 1 ===========================================================================================
    // Jean Grey merupakan seorang mutan yang memiliki kekuatan untuk bisa transfer kesadarannya ke
    // tubuh orang lain. Saat ini, Jean Grey sedang dalam misi untuk mencari “V-MAX”. Ia pun mulai
    // merasuki warga New York untuk bisa mendapatkan informasi pemerintah terkait dengan “V-MAX”.
    // 
    // Setiap warga di New York memiliki tingkatan mood yang berbeda. Jean Grey pun memiliki mood
    // awal sebesar 8 dan saat marah moodnya menjadi 25.
    //
    // + TODO 1a : Ubah parameter 'moodMarah()' agar moodJeanGrey menjadi 25
    //
    // + TODO 1b : Panggil fungsi 'moodMarah()' dengan mengirim argumen moodJeanGrey, moodJeanGrey,
    //             dan faktor.
    // ==========================================================================================================
    int moodJeanGrey = 8;
    const int faktor = 3;

    /* TODO 1b */
    moodMarah(moodJeanGrey, moodJeanGrey, faktor);






    // ===== BAGIAN 2 ===========================================================================================
    // Saat ini, Jean Grey ingin mencoba merasuki Peter Parker. Tetapi karena jarak yang terlalu
    // jauh, Jean Grey harus merasuki warga lainnya terlebih dahulu. Sehingga, Jean Grey memutuskan 
    // untuk merasuki tubuh WargaA lalu merasuki tubuh WargaB baru merasuki tubuh Peter Parker.
    //
    // Ternyata, setelah Jean Grey tubuh beberapa warga dan akhirnya berhasil merasuki tubuh Peter
    // Parker, moodnya berubah drastis menjadi 250.
    //
    // + TODO 2a : - Hubungkan 'moodWargaB' agar menunjuk 'moodWargaA'
    //             - Hubungkan 'moodPeterParker' agar menunjuk 'moodWargaB'
    //
    // + TODO 2b : Ubah value 'moodPeterParker' menjadi 250 dengan hanya boleh mengoperasikan
    //             'moodWargaA' dan moodJeanGrey.
    //
    // + TODO 2c : Hitunglah jarak kesadaran yang di dapat dari penjumlahan ukuran memori moodWargaA,
    //             moodWargaB, dan moodPeterParker
    // ==========================================================================================================
    int moodPeterParker = 10;
   
    

    /* TODO 2a */
    int *moodWargaB = &moodPeterParker;
    int **moodWargaA = &moodWargaB;
    

    /* TODO 2b */
    **moodWargaA = 250;
    
    /* TODO 2c */
    int jarak = sizeof(moodWargaA) + sizeof(moodWargaB) + sizeof(moodPeterParker);
    cout << jarak << endl;


    // ===== BAGIAN 3 ===========================================================================================
    // Jean Grey berhasil menemukan berkas rahasia pemerintah yang berisi peta ruangan markas.
    // Peta tersebut tersusun dalam baris dan kolom ruangan. Setiap ruangan pun memiliki 1 penjaga
    // dengan mood yang berbeda-beda. Jean Grey lalu mulai merasuki beberapa penjaga markas.
    //
    // + TODO 3a : Hanya dengan menggunakan 'jejakJeanGrey', rasuki penjaga di ruangan baris 2 kolom 2, lalu
    //             ubah nilai mood penjaga tersebut menjadi 85.
    //
    // + TODO 3b : Dari posisi 'jejakJeanGrey' saat ini, cetak nilai penjaga yang memiliki mood 72
    //             tanpa memindahkan posisi 'jejakJeanGrey'.
    // ==========================================================================================================
    int moodPenjagaRuangan[2][3] = {{12, 24, 36}, {48, 60, 72}};
    int *jejakJeanGrey = &moodPenjagaRuangan[0][0];

    /* TODO 3a */
    *jejakJeanGrey = moodPenjagaRuangan[2][2];
    *jejakJeanGrey = 85;
    

    /* TODO 3b */
    cout << *(jejakJeanGrey + 5) << endl;






    // ===== BAGIAN 4 ===========================================================================================
    // Setelah melewati ruangan markas, Jean Grey menemukan tempat penyimpanan rahasia data "V-MAX".
    // Ia harus menyiapkan ruang memori khusus (Heap), mengumpulkannya ke dalam satu daftar rahasia,
    // menukar jalur datanya, lalu menghapus seluruh jejak keberadaannya sampai bersih.
    //
    // + TODO 4a : Alokasikan memori dinamis di Heap untuk:
    //             - 'ruangMemori1' sebagai array int dengan kapasitas 50 elemen.
    //             - 'ruangMemori2' sebagai array int dengan kapasitas 200 elemen.
    //             Isi elemen pertama dari 'ruangMemori1' dengan nilai 50 dan 'ruangMemori2' dengan nilai 200.
    //
    // + TODO 4b : Alokasikan array dinamis 'daftarVMax' sebanyak 3 elemen int di Heap:
    //             - Elemen ke-0 diisi nilai elemen pertama 'ruangMemori1'.
    //             - Elemen ke-1 diisi nilai elemen pertama 'ruangMemori2'.
    //             - Elemen ke-2 diisi jumlah nilai elemen 'ruangMemori1' dan 'ruangMemori2'.
    //
    // + TODO 4c : Tukar ALAMAT MEMORI Heap yang ditunjuk oleh 'ruangMemori1' dan 'ruangMemori2' 
    //             (bukan menukar nilainya).
    //
    // + TODO 4d : Bebaskan SELURUH memori Heap ('ruangMemori1', 'ruangMemori2', 'daftarVMax') secara aman 
    //             menggunakan delete[] dan atur semua pointer kembali menjadi nullptr.
    // ==========================================================================================================           
    int *ruangMemori1 = nullptr;
    int *ruangMemori2 = nullptr;
    int *daftarVMax = nullptr;

    /* TODO 4a - 4c */
    ruangMemori1 = new int[50];
    ruangMemori2 = new int[200];
    
    ruangMemori1[0] = 50;
    ruangMemori2[0] = 200;

    daftarVMax = new int[3];
    daftarVMax[0] = ruangMemori1[0];
    daftarVMax[1] = ruangMemori2[0];
    daftarVMax[2] = ruangMemori1[0] + ruangMemori2[0];

    int *temp = ruangMemori2;
    ruangMemori2 = ruangMemori1;
    ruangMemori1 = temp;


    // Jangan Ubah yang ini Woy!
    bool testAlloc4 = (ruangMemori1 != nullptr && ruangMemori2 != nullptr && daftarVMax != nullptr);
    bool testSwap4 = testAlloc4 && (*ruangMemori1 == 200 && *ruangMemori2 == 50);
    bool testArr4 = testAlloc4 && (*(daftarVMax + 0) == 50 && *(daftarVMax + 1) == 200 && *(daftarVMax + 2) == 250);
    bool statusHeapAlloc = testSwap4 && testArr4;

    /* TODO 4d */

    delete[] ruangMemori1;
    delete[] ruangMemori2;
    delete[] daftarVMax;
    ruangMemori1 = nullptr;
    ruangMemori2 = nullptr;
    daftarVMax = nullptr;





    // ===== Uji Hasil Pengetesan ==================================================================================           
    // Ini juga jangan di ubah-ubah ya!

    cout << "\n=================================================================" << endl;
    
    cout << "[TEST BAGIAN 1] Status Mood Marah (mood = 25)         : " << ((moodJeanGrey == 25) ? "BENAR" : "SALAH") << endl;
    cout << "[TEST BAGIAN 2] Status Merasuki (mood = 250)         : " << ((moodPeterParker == 250) ? "BENAR" : "SALAH") << endl;
    cout << "[TEST BAGIAN 3] Status Peta Ruangan (*jejak = 85)    : " << ((*jejakJeanGrey == 85) ? "BENAR" : "SALAH") << endl;
    cout << "[TEST BAGIAN 4a-4c] Alokasi & Swap Memori Heap       : " << (statusHeapAlloc ? "BENAR" : "SALAH") << endl;
    bool statusDealokasi = (ruangMemori1 == nullptr && ruangMemori2 == nullptr && daftarVMax == nullptr);
    cout << "[TEST BAGIAN 4d] Dealokasi Memori Heap Aman          : " << (statusDealokasi ? "BENAR" : "SALAH") << endl;

    cout << "=================================================================" << endl;

    return 0;
}
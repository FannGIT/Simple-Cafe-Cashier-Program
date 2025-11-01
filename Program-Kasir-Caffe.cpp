#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

void tampilkanMenu();
string metodePembayaran();
double pilihMenu(
    int kode, 
    string &namaMenu);
void cetakNota(
    const string &nota, 
    const string &nama, 
    string infoPesanan, 
    string modePesan, 
    double total, 
    double diskon, 
    double totalSetelahDiskon, 
    double uang, 
    double kembali, 
    const string &metode);

// ======= Function
// ======= Menampilkan Menu
void tampilkanMenu() {
    cout << "=============================================\n";
    cout << "               MENU UNIBA CAFFE           \n";
    cout << "=============================================\n";
    
    cout << left << setw(5) << "No" << setw(20) << "Menu" << "Harga\n";
    cout << "---------------------------------------------\n";
    cout << left << setw(5) << "1" << setw(20) << "Americano" << "Rp10.000\n";
    cout << left << setw(5) << "2" << setw(20) << "Cappuccino" << "Rp15.000\n";
    cout << left << setw(5) << "3" << setw(20) << "Matcha Latte" << "Rp18.000\n";
    cout << left << setw(5) << "4" << setw(20) << "Strawberry Frappe" << "Rp17.000\n";
    cout << left << setw(5) << "5" << setw(20) << "Roti Bakar" << "Rp14.000\n";
    cout << left << setw(5) << "6" << setw(20) << "Mie Goreng" << "Rp12.000\n";
    cout << left << setw(5) << "7" << setw(20) << "Pukis Coklat" << "Rp13.000\n";
    cout << left << setw(5) << "8" << setw(20) << "Kentang Goreng" << "Rp11.000\n";

    cout << "=============================================\n";
    cout << "PROMO SPESIAL OKTOBER 🎉" << endl;
    cout << "Setiap pembelian minimal Rp150.000 dapat diskon 20%!" << endl;
    cout << "=============================================\n";
}

// ======= Validasi Menu
double pilihMenu(int kode, string &namaMenu) {
    switch (kode) {
        case 1:
            namaMenu = "Americano";
            return 10000;
        case 2:
            namaMenu = "Cappuccino";
            return 15000;
        case 3:
            namaMenu = "Matcha Latte";
            return 18000;
        case 4:
            namaMenu = "Strawberry Milkshake";
            return 17000;
        case 5:
            namaMenu = "Roti Bakar";
            return 14000;
        case 6:
            namaMenu = "Mie Goreng";
            return 12000;
        case 7:
            namaMenu = "Pukis Coklat";
            return 13000;
        case 8:
            namaMenu = "Kentang Goreng";
            return 11000;
        default:
            namaMenu = "Menu Tidak Tersedia.";
            return 0;
    }
}

// ======= Payment Function
string metodePembayaran() {
    string metode;
    do {
        cout << ">> Silahkan pilih metode pembayaran (cash/qris): ";
        cin >> metode;

        if (metode != "cash" && metode != "qris") {
            cout << "Metode tidak tersedia, silakan pilih 'cash' atau 'qris'.\n";
        }
    } while (metode != "cash" && metode != "qris");

    return metode;
}

// ======= Struct Function
void cetakNota(const string &nota, 
    const string &nama, 
    string infoPesanan, 
    string modePesan, 
    double total, 
    double diskon, 
    double totalSetelahDiskon, 
    double uang, 
    double kembali, 
    const string &metode) {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "\n=============================================\n";
    cout << "               UNIBA CAFFE RECEIPT              \n";
    cout << "=============================================\n";
    cout << "Mode Pesanan     : " << modePesan << endl;
    cout << "Tanggal & Waktu  : " << dt;
    cout << "Nama Pelanggan   : " << nama << endl;
    cout << infoPesanan << endl;
    cout << "-----------------------------" << endl;
    cout << nota;
    cout << "-----------------------------" << endl;
    cout << "Total                : Rp" << total << endl;
    if (total >= 150000) {
        float diskon = total * 0.2;
        float totalSetelahDiskon = total - diskon;
        cout << "Diskon (20%)         : Rp" << diskon << endl;
        cout << "Total Setelah Diskon : Rp" << totalSetelahDiskon << endl;
    }
    cout << "Bayar                : Rp" << uang << endl;
    cout << "Kembalian            : Rp" << kembali << endl;
    cout << "Pembayaran Via       : " << metode << endl;
    cout << "-----------------------------" << endl;
    if (total >= 150000) {
        cout << "Pesan: Selamat! Anda mendapat diskon 20%\n";
    } else {
        cout << "Pesan: Belanja lebih banyak untuk dapat diskon!\n";
    }
    cout << "=============================================\n";
    cout << "Terima kasih telah berbelanja di Uniba Caffe!" << endl;
}

// ======= Main Function (Utama)
int main() {
    string ulang, nama, nota = "", namaMenu, metode, dineOption, infoPesanan, modePesan;
    int jumlah, nmr = 1, pilihan;
    double harga = 0, totalItem = 0, totalKeseluruhan = 0, uang, kembali;
    double diskon = 0, totalSetelahDiskon = 0;

    cout << "[ Selamat Datang di UNIBA CAFFE ]" << endl;
    cout << "=============================================\n";
    cout << "Sedang Menampilkan Menu..." << endl;
    cout << "-----------------------------\n" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(4));
// ------- Menu Section (Bagian Menu)
    tampilkanMenu();
    do {
        do {
            cout << ">> Masukkan kode menu (1-8, atau 0 untuk batal): ";
            cin >> pilihan;
            if (cin.fail()) {
                cin.clear(); 
                cin.ignore(1000, '\n');
                cout << "Input tidak valid. Pesanan akan Dibatalkan\nSilahkan jalankan ulang dan Masukkan angka antara 1-8 atau 0 untuk batal.\n";
                continue;
            }
            if (pilihan < 0 || pilihan > 8) {
                cout << "Menu tidak tersedia. Silakan pilih menu antara 1-8, atau 0 untuk batal.\n";
            }
        } while (pilihan < 0 || pilihan > 8);

        if (pilihan == 0) {
            cout << "[⚠️] Pesanan dibatalkan.\n";
            return 0;
        }
// ------- Counting (Menghitung Harga)
        harga = pilihMenu(pilihan, namaMenu);

// ------- Order Amount (Jumlah Pesanan)
        do {
            cout << ">> Masukkan Jumlah Pesanan Untuk " << namaMenu << ": ";
            cin >> jumlah;

            if (jumlah > 100) {
                cout << "[⚠️] Jumlah terlalu Banyak! Silakan hubungi Owner untuk pesan jumlah banyak\n|| Whatsapp: 087777948840." << endl;
            
            }
        } while (jumlah > 100);
        
        totalItem = harga * jumlah;
        totalKeseluruhan += totalItem;

// ------- Add Struct Data (Tambah Data Nota)
        nota += to_string(nmr) 
                + ". " 
                + namaMenu 
                + " (" 
                + to_string(jumlah) 
                + " x " 
                + to_string((int)harga) 
                + ") = " 
                + to_string((int)totalItem) 
                + "\n";
        nmr++;

// ------- Info promo setelah setiap transaksi
        cout << fixed << setprecision(0);
        cout << "[💰] Total Harus Dibayar: Rp" << totalKeseluruhan << endl;

        if (totalKeseluruhan >= 150000) {
            cout << "🎉 SELAMAT! Anda sudah memenuhi syarat diskon 20% promo Oktober 🎉\n";
        } else {
            cout << "💡 Tambah belanja Rp" << (150000 - totalKeseluruhan) 
                 << " lagi untuk dapatkan diskon 20% promo Oktober!\n";
        }

// ------- Add Order (Tambah Pesananan)
        do {
            cout << ">> Apakah ingin menambah pesanan lagi? (ya/tidak): ";
            cin >> ulang;

            if (ulang != "ya" && ulang != "tidak") {
                cout << "Input tidak valid. Silahkan masukkan 'ya' atau 'tidak'\n";
            }
        } while (ulang != "ya" && ulang != "tidak");
    } while (ulang == "ya");

// ------- Hitung Total Harga
    if (totalKeseluruhan >= 150000) {
        diskon = 0.20 * totalKeseluruhan;
        totalSetelahDiskon = totalKeseluruhan - diskon;
    } else {
        diskon = 0;
        totalSetelahDiskon = totalKeseluruhan;
    }

// ------- Order Name (Nama Pelanggan)
    cout << "---------------------------------------------" << endl;
    cout << ">> Masukkan Nama Pelanggan: ";
    cin.ignore();
    getline(cin, nama);

// ------- Order Type (DineIn/TakeAway)
    do {
        cout << ">> Apakah pelanggan Dine In atau Take Away? (dine/take): ";
        cin >> dineOption;;
        for (auto &c : dineOption) c = tolower(c);
        if (dineOption != "dine" && dineOption != "take") {
            cout << "Input tidak valid. Silakan pilih 'dine' untuk makan di tempat, atau 'take' untuk dibawa pulang.\n";
        }
    } while (dineOption != "dine" && dineOption != "take");

    if (dineOption == "dine") {
        string nopesan;
        cout << ">> Masukkan Nomor Pesanan: ";
        cin >> nopesan;
        infoPesanan = "Nomor Pesanan : " + nopesan;
        modePesan = "DINE IN";
    } 
    else {
        string whatsapp;
        cout << ">> Masukkan Nnomor WhatsApp Pelanggan: ";
        cin >> whatsapp;
        infoPesanan = "No. WhatsApp : " + whatsapp;
        modePesan = "TAKE AWAY";
    }

// ------- Payment Type (Metode Pembayaran)
    metode = metodePembayaran();

    cout << "---------------------------------------------" << endl;
    if (totalKeseluruhan >= 150000) {
        cout << "Total       : Rp" << totalKeseluruhan << endl;
        cout << "Diskon      : Rp" << diskon << endl;
    } 
    cout << "Total Bayar : Rp" << totalSetelahDiskon << endl;
    
// ------- Payment Input (Nominal Pembayaran)
    do {
        cout << ">> Masukkan Jumlah Uang Pelanggan: Rp";
        cin >> uang;

        if (uang < totalSetelahDiskon) {
            cout << "[⚠️] Uang kurang! Silakan masukkan nominal pembayaran." << endl;
        }
    } while (uang < totalSetelahDiskon);

    kembali = uang - totalSetelahDiskon;
    cout << "---------------------------------------------" << endl;
    cout << "[💰] Transaksi Berhasil! Sedang Mencectak Nota..." << endl;
    cout << "---------------------------------------------" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(4));
// ------- Struct Print (Cetak Struk)
    cetakNota(nota, nama, infoPesanan, modePesan, totalKeseluruhan, diskon, totalSetelahDiskon, uang, kembali, metode);

    return 0;

}

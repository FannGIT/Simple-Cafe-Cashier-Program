<div align="center">

# ☕ UNIBA CAFFE  
### Program Kasir Sederhana Menggunakan C++

<img src="https://img.shields.io/badge/Language-C++-blue?style=for-the-badge">
<img src="https://img.shields.io/badge/App-Console%20Cashier-green?style=for-the-badge">
<img src="https://img.shields.io/badge/Status-Completed-success?style=for-the-badge">

</div>

---

## 📌 Deskripsi Project
**UNIBA CAFFE Cashier Program** adalah aplikasi kasir berbasis **console (CLI)** yang dibuat menggunakan bahasa **C++**.  
Program ini dirancang untuk mensimulasikan sistem kasir cafe mulai dari **pemilihan menu, perhitungan total, promo diskon, metode pembayaran, hingga pencetakan nota transaksi**.

Project ini cocok sebagai:
- Tugas kuliah
- Latihan algoritma & logika program
- Portfolio GitHub

---

## 🛠️ Teknologi yang Digunakan
| Komponen | Detail |
|--------|--------|
| Bahasa | C++ |
| Library | iostream, iomanip, string, ctime, thread, chrono |
| Tipe | Console Application |
| Konsep | Function, Looping, Conditional, Formatting Output |

---

## ✨ Fitur Utama
- ✔️ Menampilkan menu cafe lengkap dengan harga
- ✔️ Pemesanan lebih dari satu item
- ✔️ Perhitungan total otomatis
- ✔️ **Promo diskon 20%** untuk pembelian ≥ Rp150.000
- ✔️ Mode pesanan **Dine In / Take Away**
- ✔️ Metode pembayaran **Cash / QRIS**
- ✔️ Validasi input pengguna
- ✔️ Pencetakan **nota transaksi lengkap**
- ✔️ Simulasi loading menggunakan `sleep`

---

## ☕ Daftar Menu
| No | Menu | Harga |
|----|------|-------|
| 1 | Americano | Rp10.000 |
| 2 | Cappuccino | Rp15.000 |
| 3 | Matcha Latte | Rp18.000 |
| 4 | Strawberry Frappe | Rp17.000 |
| 5 | Roti Bakar | Rp14.000 |
| 6 | Mie Goreng | Rp12.000 |
| 7 | Pukis Coklat | Rp13.000 |
| 8 | Kentang Goreng | Rp11.000 |

---

## 🎉 Promo Spesial
```

Diskon 20% untuk total belanja minimal Rp150.000

````

---

## 🧠 Alur Program
1. Program menampilkan menu cafe
2. User memilih menu dan jumlah pesanan
3. User dapat menambah pesanan berkali-kali
4. Program menghitung total & promo diskon
5. User memilih mode pesanan (Dine In / Take Away)
6. User memilih metode pembayaran
7. Program mencetak nota transaksi

---

## ⚙️ Cara Menjalankan Program

### 1️⃣ Compile Program
```bash
g++ kasir_uniba.cpp -o kasir_uniba
````

### 2️⃣ Jalankan Program

```bash
./kasir_uniba
```

---

## 🧾 Contoh Output Nota

```text
=============================================
           UNIBA CAFFE RECEIPT
=============================================
Mode Pesanan     : DINE IN
Tanggal & Waktu  : Tue Oct 17 14:20:10 2025
Nama Pelanggan   : Andi
Nomor Pesanan    : 12
-----------------------------
1. Cappuccino (2 x 15000) = 30000
2. Matcha Latte (1 x 18000) = 18000
-----------------------------
Total                : Rp48000
Bayar                : Rp50000
Kembalian            : Rp2000
Pembayaran Via       : cash
=============================================
Terima kasih telah berbelanja di Uniba Caffe!
```

---

## 👤 Author

**Fannn**
Mahasiswa | C++ | Algoritma | Sistem Kasir

---

## 🚀 Pengembangan Selanjutnya

* 🔹 Penyimpanan transaksi ke file
* 🔹 Login kasir
* 🔹 Menu admin
* 🔹 Laporan penjualan harian
* 🔹 Database integration

---

⭐ Jika project ini bermanfaat, jangan lupa beri **Star** di repository!

---

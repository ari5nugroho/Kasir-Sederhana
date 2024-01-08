// Kelompok 6
//23.11.5751_Galuh Anggoro Wati
//23.11.5753_Anita Dewi Purwanti
//23.11.5768_Alwi Edi Nugroho
//23.11.5796_Ari Nugroho

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using namespace std;

struct Kasir
{
    string name;
    double harga;
    int jumlah;
};

double UangBelanjaan = 0.0;
string gen_id(int len);

void open(string& idPengguna)
{
    system("cls");
    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(T, { 25, 4 });
    cout << "==== Selamat datang di Rumah Makan Sederhana! ====";
    SetConsoleCursorPosition(T, { 38, 6 });
    idPengguna = gen_id(10);
    cout << "ID pengguna : " << idPengguna;
}

void showMenu()
{
    system("cls");
    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(T, { 30, 4 });
    cout << "Menu:";
    SetConsoleCursorPosition(T, { 30, 5 });
    cout << "1. Tampilkan Menu Makanan dan Minuman";
    SetConsoleCursorPosition(T, { 30, 6 });
    cout << "2. Pesan Menu";
    SetConsoleCursorPosition(T, { 30, 7 });
    cout << "3. Tampilkan Pesanan dan Total Harga";
    SetConsoleCursorPosition(T, { 30, 8 });
    cout << "4. Selesai";
}

void Menu()
{

    system("cls");
    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(T, { 4, 4 });
    cout << "================ Menu Makanan =================";
    SetConsoleCursorPosition(T, { 6, 6 });
    cout << "+-----------------------------------------+";
    SetConsoleCursorPosition(T, { 6, 7 });
    cout << "|No.|     Menu Makanan      |     Harga   |";
    SetConsoleCursorPosition(T, { 6, 8 });
    cout << "|-----------------------------------------|";
    SetConsoleCursorPosition(T, { 6, 9 });
    cout << "|1. | Mie Goreng            |  Rp.  8.000 |";
    SetConsoleCursorPosition(T, { 6, 10 });
    cout << "|2. | Ayam Geprek           |  Rp. 15.000 |";
    SetConsoleCursorPosition(T, { 6, 11 });
    cout << "|3. | Magelangan            |  Rp. 10.000 |";
    SetConsoleCursorPosition(T, { 6, 12 });
    cout << "|4. | Nasi Goreng           |  Rp. 12.000 |";
    SetConsoleCursorPosition(T, { 6, 13 });
    cout << "|5. | Mie Goreng telur      |  Rp. 10.000 |";
    SetConsoleCursorPosition(T, { 6, 14 });
    cout << "|6. | Nasi Oseng ayam       |  Rp. 12.000 |";
    SetConsoleCursorPosition(T, { 6, 15 });
    cout << "|7. | Nasi Ayam Rica        |  Rp. 12.000 |";
    SetConsoleCursorPosition(T, { 6, 16 });
    cout << "|8. | Ayam Geprek Krisbar   |  Rp. 17.000 |";
    SetConsoleCursorPosition(T, { 6, 17 });
    cout << "|9. | Ayam Geprek Mozarella |  Rp. 17.000 |";
    SetConsoleCursorPosition(T, { 6, 18 });
    cout << "|10 | Nasi                  |  Rp.  3.000 |";
    SetConsoleCursorPosition(T, { 6, 19 });
    cout << "+-----------------------------------------+";

    SetConsoleCursorPosition(T, { 63, 4 });
    cout << "=============== Menu Minuman =================";
    SetConsoleCursorPosition(T, { 63, 5 });
    cout << "+--------------------------------------------+";
    SetConsoleCursorPosition(T, { 63, 6 });
    cout << "|No.|     Menu Minuman      |     Harga      |";
    SetConsoleCursorPosition(T, { 63, 7 });
    cout << "|--------------------------------------------|";
    SetConsoleCursorPosition(T, { 63, 8 });
    cout << "|11.| Tea Es/Panas          |  Rp. 3.000,00  |";
    SetConsoleCursorPosition(T, { 63, 9 });
    cout << "|12.| Jeruk Es/Panas        |  Rp. 4.000,00  |";
    SetConsoleCursorPosition(T, { 63, 10 });
    cout << "|13.| Milk Tea              |  Rp. 5.000,00  |";
    SetConsoleCursorPosition(T, { 63, 11 });
    cout << "|14.| Kopi                  |  Rp. 3.000,00  |";
    SetConsoleCursorPosition(T, { 63, 12 });
    cout << "|15.| Es Lemon Tea          |  Rp. 5.000,00  |";
    SetConsoleCursorPosition(T, { 63, 13 });
    cout << "|16.| Air Minerak 600 Ml    |  Rp. 3.000,00  |";
    SetConsoleCursorPosition(T, { 63, 14 });
    cout << "+--------------------------------------------+";

}


vector<Kasir> pesanMenu()
{
    vector<Kasir> pesanan;
    int nomorMenu, jumlah;

    do
    {
        system("cls");
        const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(T, { 4, 4 });
        cout << "================ Menu Makanan =================";
        SetConsoleCursorPosition(T, { 6, 6 });
        cout << "+-----------------------------------------+";
        SetConsoleCursorPosition(T, { 6, 7 });
        cout << "|No.|     Menu Makanan      |     Harga   |";
        SetConsoleCursorPosition(T, { 6, 8 });
        cout << "|-----------------------------------------|";
        SetConsoleCursorPosition(T, { 6, 9 });
        cout << "|1. | Mie Goreng            |  Rp.  8.000 |";
        SetConsoleCursorPosition(T, { 6, 10 });
        cout << "|2. | Ayam Geprek           |  Rp. 15.000 |";
        SetConsoleCursorPosition(T, { 6, 11 });
        cout << "|3. | Magelangan            |  Rp. 10.000 |";
        SetConsoleCursorPosition(T, { 6, 12 });
        cout << "|4. | Nasi Goreng           |  Rp. 12.000 |";
        SetConsoleCursorPosition(T, { 6, 13 });
        cout << "|5. | Mie Goreng telur      |  Rp. 10.000 |";
        SetConsoleCursorPosition(T, { 6, 14 });
        cout << "|6. | Nasi Oseng ayam       |  Rp. 12.000 |";
        SetConsoleCursorPosition(T, { 6, 15 });
        cout << "|7. | Nasi Ayam Rica        |  Rp. 12.000 |";
        SetConsoleCursorPosition(T, { 6, 16 });
        cout << "|8. | Ayam Geprek Krisbar   |  Rp. 17.000 |";
        SetConsoleCursorPosition(T, { 6, 17 });
        cout << "|9. | Ayam Geprek Mozarella |  Rp. 17.000 |";
        SetConsoleCursorPosition(T, { 6, 18 });
        cout << "|10 | Nasi                  |  Rp.  3.000 |";
        SetConsoleCursorPosition(T, { 6, 19 });
        cout << "+-----------------------------------------+";

        SetConsoleCursorPosition(T, { 63, 4 });
        cout << "=============== Menu Minuman =================";
        SetConsoleCursorPosition(T, { 63, 5 });
        cout << "+--------------------------------------------+";
        SetConsoleCursorPosition(T, { 63, 6 });
        cout << "|No.|     Menu Minuman      |     Harga      |";
        SetConsoleCursorPosition(T, { 63, 7 });
        cout << "|--------------------------------------------|";
        SetConsoleCursorPosition(T, { 63, 8 });
        cout << "|11.| Tea Es/Panas          |  Rp. 3.000,00  |";
        SetConsoleCursorPosition(T, { 63, 9 });
        cout << "|12.| Jeruk Es/Panas        |  Rp. 4.000,00  |";
        SetConsoleCursorPosition(T, { 63, 10 });
        cout << "|13.| Milk Tea              |  Rp. 5.000,00  |";
        SetConsoleCursorPosition(T, { 63, 11 });
        cout << "|14.| Kopi                  |  Rp. 3.000,00  |";
        SetConsoleCursorPosition(T, { 63, 12 });
        cout << "|15.| Es Lemon Tea          |  Rp. 5.000,00  |";
        SetConsoleCursorPosition(T, { 63, 13 });
        cout << "|16.| Air Minerak 600 Ml    |  Rp. 3.000,00  |";
        SetConsoleCursorPosition(T, { 63, 14 });
        cout << "+--------------------------------------------+";

        cout << endl;
        SetConsoleCursorPosition(T, { 6, 24 });
        cout << "\tPilih nomor menu (0 untuk selesai) : ";
        cin >> nomorMenu;

        if (nomorMenu >= 1 && nomorMenu <= 16)
        {
            Kasir item;
            item.jumlah = 0;

            // Menentukan item berdasarkan nomorMenu
            switch (nomorMenu)
            {
            case 1:
                item.name = "Mie Goreng";
                item.harga = 8000;
                break;
            case 2:
                item.name = "Ayam Geprek";
                item.harga = 15000;
                break;
            case 3:
                item.name = "Magelangan";
                item.harga = 10000;
                break;
            case 4:
                item.name = "Nasi Goreng";
                item.harga = 12000;
                break;
            case 5:
                item.name = "Mie Goreng Telur";
                item.harga = 10000;
                break;
            case 6:
                item.name = "Nasi Oseng Ayam";
                item.harga = 12000;
                break;
            case 7:
                item.name = "Nasi Ayam Rica";
                item.harga = 12000;
                break;
            case 8:
                item.name = "Ayam Geprek Krisbar";
                item.harga = 17000;
                break;
            case 9:
                item.name = "Ayam Geprek Mozarella";
                item.harga = 17000;
                break;
            case 10:
                item.name = "Nasi";
                item.harga = 3000;
                break;
            case 11:
                item.name = "Tea Es/Panas";
                item.harga = 3000;
            case 12:
                item.name = "Jeruk Es/Panas";
                item.harga = 4000;
                break;
            case 13:
                item.name = "Milk Tea";
                item.harga = 5000;
                break;
            case 14:
                item.name = "Kopi";
                item.harga = 3000;
                break;
            case 15:
                item.name = "Es Lemon Tea";
                item.harga = 5000;
                break;
            case 16:
                item.name = "Air Mineral 600 Ml";
                item.harga = 3000;
                break;
            default:
                cout << "Nomor menu tidak valid!" << endl;
                continue;
            }

            cout << "\tJumlah pesanan: ";
            cin >> jumlah;
            item.jumlah = jumlah;

            pesanan.push_back(item);
        }
        else if (nomorMenu != 0)
        {
            cout << "\tNomor menu tidak valid!" << endl;
        }

    } while (nomorMenu != 0);

    return pesanan;
}

void tampilkanPesanan(vector<Kasir>& pesanan)
{
    system("cls");

    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(T, { 30, 8 });
    cout << "Pesanan Anda:" << endl;
    SetConsoleCursorPosition(T, { 30, 9 });
    cout << "+---+---------------------------+--------+----------------+" << endl;
    SetConsoleCursorPosition(T, { 30, 10 });
    cout << "| No| Menu\t\t      | Jumlah |     Harga      |" << endl;
    SetConsoleCursorPosition(T, { 30, 11 });
    cout << "+---+---------------------------+--------+----------------+" << endl;

    double totalHarga = 0;

    for (size_t i = 0; i < pesanan.size(); ++i)
    {
        SetConsoleCursorPosition(T, { 30, static_cast<short>(12 + i) });
        cout << "| " << setw(1) << i + 1 << " | " << setw(25) << left << pesanan[i].name << " | "
            << setw(6) << pesanan[i].jumlah << " | Rp. " << setw(10) << fixed << setprecision(2)
            << pesanan[i].jumlah * pesanan[i].harga << " |" << endl;
        totalHarga += pesanan[i].jumlah * pesanan[i].harga;
    }

    SetConsoleCursorPosition(T, { 30, static_cast<short>(12 + pesanan.size()) });
    cout << "+---+---------------------------+--------+----------------+" << endl;
    SetConsoleCursorPosition(T, { 30, static_cast<short>(13 + pesanan.size()) });
    cout << "Total Harga: Rp. " << fixed << setprecision(2) << totalHarga << endl;
    SetConsoleCursorPosition(T, { 30, static_cast<short>(14 + pesanan.size()) });
    cout << "Masukkan uang belanjaan  : ";
    cin >> UangBelanjaan;
}

void tampilkanStruk(vector<Kasir>& pesanan, const string& idPengguna)
{
    system("cls");

    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(T, { 30, 8 });
    cout << "Struk Belanja";
    SetConsoleCursorPosition(T, { 30, 9 });
    cout << "ID Pengguna: " << idPengguna;
    SetConsoleCursorPosition(T, { 30, 10 });
    cout << "+----+---------------------------+--------+----------------+";
    SetConsoleCursorPosition(T, { 30, 11 });
    cout << "| No | Menu\t\t       | Jumlah |      Harga     |" << endl;
    SetConsoleCursorPosition(T, { 30, 12 });
    cout << "+----+---------------------------+--------+----------------+" << endl;

    double totalHarga = 0;

    for (size_t i = 0; i < pesanan.size(); ++i)
    {
        SetConsoleCursorPosition(T, { 30, static_cast<short>(13 + i) });
        cout << "| " << setw(2) << i + 1 << " | " << setw(25) << left << pesanan[i].name << " | "
            << setw(6) << pesanan[i].jumlah << " | Rp. " << setw(10) << fixed << setprecision(2)
            << pesanan[i].jumlah * pesanan[i].harga << " |" << endl;
        totalHarga += pesanan[i].jumlah * pesanan[i].harga;
    }

    SetConsoleCursorPosition(T, { 30, static_cast<short>(13 + pesanan.size()) });
    cout << "+----+---------------------------+--------+----------------+";
    SetConsoleCursorPosition(T, { 59, static_cast<short>(14 + pesanan.size()) });
    cout <<"Total Harga  : Rp. " << fixed << setprecision(2) << totalHarga;
    SetConsoleCursorPosition(T, { 59, static_cast<short>(15 + pesanan.size()) });
    cout << "Uang Belanja : Rp. " << fixed << setprecision(2) << UangBelanjaan;
    SetConsoleCursorPosition(T, { 30, static_cast<short>(16 + pesanan.size()) });
    cout << "+----+---------------------------+--------+----------------+";
    double kembalian = UangBelanjaan - totalHarga;
    SetConsoleCursorPosition(T, { 59, static_cast<short>(17 + pesanan.size()) });
    cout << "Kembalian    : RP. " << fixed << setprecision(2) << kembalian;
    SetConsoleCursorPosition(T, { 30, static_cast<short>(19 + pesanan.size()) });
    cout << "Terima kasih telah berbelanja di Rumah Makan Sederhana!" << endl;
}



int main()
{
    const HANDLE T = GetStdHandle(STD_OUTPUT_HANDLE);
    vector<Kasir> pesanan;
    int pilihan;
    string idPengguna;

    open(idPengguna);

    SetConsoleCursorPosition(T, { 30, 11 });
    cout << "Tekan [Enter] untuk melanjutkan...";
    cin.ignore();
    cin.get();

    do
    {
        showMenu();
        SetConsoleCursorPosition(T, { 30, 13 });
        cout << "Pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            Menu();
            break;
        case 2:
            pesanan = pesanMenu();
            break;
        case 3:
            tampilkanPesanan(pesanan);
            break;
        case 4:
            tampilkanStruk(pesanan, idPengguna);
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
        }

        // Menunggu input sebelum membersihkan layar
        SetConsoleCursorPosition(T, { 63, 24 });
        cout << "Tekan [Enter] untuk melanjutkan...";
        cin.ignore();
        cin.get();
    } while (pilihan != 4);

    return 0;
}

string gen_id(int len)
{
    string charlist = "FFF0123456789";
    string id = "";

    srand(time(NULL));
    for (int i = 0; i < len; ++i)
        id += charlist[rand() % charlist.length()];

    return id;
}

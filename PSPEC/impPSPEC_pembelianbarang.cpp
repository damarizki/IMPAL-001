#include <iostream>

void tampilkanBarang(int a);
int hitungTotal(int item, int harga);
int stokHabis(int item, int stock, int harga);
void beliBarang(char beli);

using namespace std;
int main(){

    cout <<"---------------LOCOSHOP---------------\n" << endl;
    cout <<"-----Local Online Shop. Est. 1993-----\n" << endl;
    cout <<"---------LIST OF READY STOCK--------\n" << endl;
    cout <<"Code Barang || Name                 \n" << endl;
    cout <<"1 || Keris Dari Jawa" << endl;
    cout <<"2 || Kayu Jati Ukir dari Jepara by Sugeng" <<endl;
    cout <<"3 || batik tulis purwakarta asli" << endl;
    int kode;
    
    cout << "Input kode barang disini: ";
    cin >> kode;
    tampilkanBarang(kode);

    return 0;
}

int hitungTotal(int item, int harga){
    return (item*harga);
}

int stockHabis(int item, int stock, int harga){
    if (stock-item <0){
        cout <<"maaf stock tidak mencukupi";
    }else{
        cout << "Beli Produk ini (Y/T)?" ;
        cout << "Total Harga: " << hitungTotal(item,harga) << endl;
    }
}

void beliBarang(char beli){
    if(beli == 'y' || beli == 'Y'){
        cout << "Pembelian berhasil. segera melakukan pembayaran melalui rekening berikut 30012828389" << endl;
    }else{
        cout << "Pembelian dibatalkan" ;
    }
}
void tampilkanBarang(int a){
    char beli;
    if(a == 1){
        int item;
        int harga = 2000000;
        int stock = 10;
        cout << "Keris" << endl;
        cout << "Harga  : IDR 2.000.000,-" << endl;
        cout << "Stock tersedia  : " << stock << endl;
        cout << "Jumlah item yang dibeli: ";
        cin >> item;
        stockHabis(item,stock,harga);
        cin >> beli; 
        beliBarang(beli);
    }
    if(a == 2){
        int item;
        int harga = 1000000;
        int stock = 12;
        cout << "Kayu Jati Ukir Jepara" << endl;
        cout << "Harga  : IDR 1.000.000,-" << endl;
        cout << "Stock tersedia  : " << stock << endl;
        cout << "Jumlah item yang dibeli: ";
        cin >> item;
        stockHabis(item,stock,harga);
        cin >> beli; 
        beliBarang(beli);
    }
    if(a == 3){
        int item;
        int harga = 12000;
        int stock = 12;
        cout << "Samsu" << endl;
        cout << "Harga  : IDR 12.000,-" << endl;
        cout << "Stock tersedia  : " << stock << endl;
        cout << "Jumlah item yang dibeli: ";
        cin >> item;
        stockHabis(item,stock,harga);
        cin >> beli; 
        beliBarang(beli);
    }
}



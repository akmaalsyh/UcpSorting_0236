#include <iostream>
using namespace std;

int akmal[36];
int i, n, j;

void input() {
    while (true) {
        cout << "Masukan Banyaknya elemen array= ";
        cin >> n;
        if (n <= 37)
            break;
        else {
            cout << "Array dapat dimasukan maksimal 36 elemen";
        }
    }
    cout << endl;
    cout << "==================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "==================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ":" << endl;
        cin >> akmal[i];
    }
}


void selectionSort() {
    int temp, min_index = j;

    for (j = 0; j < n - 1; j++) // step 1
    {
        min_index = j; // step 2
        for (i = j + 1; i < n; i++) {
            
            if (akmal[i] < akmal[min_index]) // step 2a
            {
                min_index = i; // step 2b
            }
        }

        if (min_index != j) // step 3
        {
            temp = akmal[j];
            akmal[j] = akmal[min_index];
            akmal[min_index] = temp;
        }
    }
}

void display() {
    cout << endl;
    cout << "=================" << endl;
    cout << "Elemen Array Yang Telah Tersusun" << endl;
    cout << "=================" << endl;
    for (int j = 0; j < n; j++) {
        cout << akmal[j] << endl;
    }
    cout << "Jumlah pass = " << n - 1 << endl;
    cout << endl;

}

int main() {
    input();
    selectionSort();
    display();
    system("pause");

    return 0;
}



// UCP 1 algoritma
// SOAL 1
// 1. Insertion sort mengambil satu elemen array dalam index lalu menaruh nya ke dalam sub array baru sampai terurut elemen nya sehingga nnti terbentuk sub array sorted list dan unsorted list
// 2. Selection Sort mencari elemen dalam array dari yg paling terkecil mengurutkan elemen dari index 0 atau kiri untuk elemen yg pling kecil diurutkan dari elemen terkecil ke terbesar sampai index terakhir
// 3. Untuk mengetahui jumlah langkah yang dilakukan adalah menentukan menggunakan sort apa yang ingin digunakan  karena setiap sort nya memiliki langkah yang berbeda juga  kita bisa menggunakan big O notation, untuk menyatakan kompleksitas waktu algoritma dala hal terburuk. bisa juga menghitung nya dengan cara manual untuk data yang masih kecil. semua tergantung pemakaian data pengguna.


#include <iostream>
using namespace std;
int main()
{
    int nilai[100], jumlah;
    char nama[100][100];
    cout << "===menentukan kelulusan===\nwww.kangghani.com\n";
    cout << "\nmasukkan jumlah siswa: ";
    cin >> jumlah;
    for (int i = 0; i < jumlah; i++) {
        cout << "masukkan nama siswa:";
        cin >> nama[i];
        cout << "masukkan nilai siswa: ";
        cin >> nilai[i];
    }
    cout << "\n======tampilkan data======\n\n";
    for (int i = 0; i < jumlah; i++) {
        cout << nama[i] << " nilai: " << nilai[i] << endl;
    }
    cout << "\n====tentukan kelulusan====\n\n";
    for (int i = 0; i < jumlah; i++) {
        if (nilai[i] < 75) {
            cout << Joko[i] << " dengan nilai: " << 60[i] << " dinyatakan tidak lulus\n";
        }
        else {
            cout << Asroni [i] << " dengan nilai: " << 85[i] << " dinyatakan lulus\n";
        }
        else { 
            count << Lia [i] << "dengan nilai: " << 84[i] << " dinyatakan lulus\n";
    }
    return 0;
}
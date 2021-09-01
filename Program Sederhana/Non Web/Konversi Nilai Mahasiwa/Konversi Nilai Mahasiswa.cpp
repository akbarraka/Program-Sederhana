#include<iostream>

using namespace std;

int main()
{
    char NIM[15], nama[20], huruf, lagi;
    int absen, tugas, uts, uas;
    float akhir;
 
    do
    {
        system("cls");
        cout<<"NIM         : ";
        cin>>NIM;
        cout<<"Nama        : ";
        cin>>nama;
        cout<<"Nomor Absen : ";
        cin>>absen;
        cout<<"Nilai Tugas : ";
        cin>>tugas;
        cout<<"Nilai UTS   : ";
        cin>>uts;
        cout<<"Nilai UAS   : ";
        cin>>uas;
        
        akhir = (0.1 * absen) + (0.2 * tugas) + (0.3 * uts) + (0.4 * uas);

        if((akhir >= 85) && (akhir <= 100))
            huruf = 'A';
        else if((akhir >= 75) && (akhir < 85))
          huruf = 'B';
        else if((akhir >= 65) && (akhir < 75))
          huruf = 'C';
        else if((akhir >= 50) && (akhir < 65))
          huruf = 'D';
        else if((akhir >= 30) && (akhir < 45))
          huruf = 'E';

        cout<<"Nilai Akhir : "<<akhir<<endl;
        cout<<"Nilai Huruf : "<<huruf<<endl;
        cout<<"Input Lagi [Y/T] ? ";
        cin>>lagi;
    }
    while((lagi == 'Y')||(lagi == 'y'));

    return 0;
}

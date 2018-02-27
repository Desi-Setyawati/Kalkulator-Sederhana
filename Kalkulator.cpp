#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <math.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
 float x,y,hasil,pilih;
 
 
	system("cls");
   cout<<"\t\t\t  ****************************\n"<<endl;
   cout<<"\t\t\t  --- KALKULATOR SEDERHANA ---"<<endl<<endl;
   cout<<"\t\t\t  ****************************"<<endl;

   kalkulator :
   //operator perhitungan
   cout<<"Operator Perhitungan :"<<endl;
   string jumlah ="(1) Penjumlahan (+)";
   cout<<jumlah<<endl;
   string pengurangan ="(2) Pengurangan (-)";
   cout<<pengurangan<<endl;
   string perkalian ="(3) Perkalian   (*)";
   cout<<perkalian<<endl;
   string pembagian ="(4) Pembagian   (/)";
   cout<<pembagian<<endl<<endl;
   
   //mulai menghitung
   cout<<"Masukan Angka A = ";cin>>x;
   cout<<"Masukan Angka B = ";cin>>y;
   
   int z;
   cout<<"Pilih Operator Perhitungan = ";cin>>z;

   if(z==1)
   {
   hasil=x+y;
   cout<<"Hasil Penjumlahan = "<<hasil<<endl;
   }
   else if(z==2)
   {
   hasil=x-y;
   cout<<"Hasil Pengurangan = "<<hasil<<endl;
   }
   else if(z==3)
   {
   hasil=x*y;
   cout<<"Hasil Perkalian = "<<hasil<<endl;
   }
   else if(z==4)
   {
   hasil=x/y;
   cout<<"Hasil Pembagian = "<<hasil<<endl;
   }
   cout<<"********************************************************************************";
    cout<<"Coba lagi [1]"<<endl;
    cout<<"Keluar [2]"<<endl;
    cout<<"********************************************************************************";
    cout<<"Masukkan Pilihan : ";cin>>pilih;
    if (pilih==1){
        goto kalkulator;
    }
    if (pilih==2){
    system("cls");
     cout<<"********************************************************************************";
    cout<<"\tTerima Kasih Telah Menggunakan Kalkulator Ini"<<endl;
    cout<<"********************************************************************************";
    cout<<"\t\t\t  Desi Setyawati"<<endl<<endl;
    cout<<"\tTeknologi Rekayasa Internet-Sekolah Vokasi UGM"<<endl<<endl;
    cout<<"\t\t\t16/400621/SV/11125"<<endl;
    cout<<"********************************************************************************"<<endl;
    system("pause");
    }
 return 0;
}

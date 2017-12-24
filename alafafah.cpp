#include<iostream>
#include<cstring>
using namespace std;
main()
{
int code, jumlah1, jumlah2, jumlah3, hari, CANNON=130000, FUJI=150000, NIKON=100000;
string nama;
char alafafah;
cout<<"\n              -=ALAFAFAH CAMERA=-\n";
cout<<"\n\n               Sewa Camera DSLR\n";
cout<<"                Daftar Kamera\n";
cout<<" ___________________________________________\n";
cout<<" | KODE CAMERA |  NAMA/JENIS | TARIF CAMERA |\n";
cout<<" |     DSLR    |    CAMERA   |     /HARI    |\n";
cout<<" |_____________|_____________|______________|\n";
cout<<" |______1______|___CANNON____|____130000____|\n";
cout<<" |______2______|____FUJI_____|____150000____|\n";
cout<<" |______3______|____NIKON____|____100000____|\n";
cout<<" |_____________|_____________|______________|\n";

cout<<"\n Masukan Nama Anda : "; cin>>nama;
cout<<" Selamat Datang " <<nama <<" di -=ALAFAFAH CAMERA=- \n";
cout<<" Kami menyewakan berbagai macam jenis Camera " <<nama <<",\n";
cout<<" Seperti CANNON, FUJI dan NIKON. \n";
cout<<" Apakah " <<nama <<" Minat? \n";
cout<<" "<<nama <<" bisa menyewanya dalam beberapa hari loh,\n";
cout<<" "<<nama <<" dapat mengisi form dibawah ini jika " <<nama <<" ingin minat\n";
{
cout<<"\n\n Apakah " <<nama <<" Ingin Lanjut ? (y=yes / n=no) : "; cin>>alafafah;
if(alafafah =='y' || alafafah =='Y')
goto mulai;
else
goto end;
}
mulai:
cout<<"\n Masukkan jumlah hari yang ingin "<<nama <<" sewa : "; cin>>hari;
sewa:
cout<<"\n Masukkan Kode cameranya: "; cin>>code;
if(code==1){ 
	cout<<"\n ________________________________________\n";
	cout<<"\n Tarif Sewa CAMERA/HARI Rp. 130000\n";
	cout<<" Nama Camera : CANNON \n";
	cout<<" Atas Nama :" <<nama ;
	jumlah1=hari*CANNON;
	cout<<"\n\n Jumlah Bayaran " <<nama <<" Sebesar Rp. " <<jumlah1<<endl;
	cout<<" ________________________________________\n";

{
cout<<"\n\n Apakah " <<nama <<" Ingin Mengulanginya ? (y=yes / n=no) : "; cin>>alafafah;
if(alafafah =='y' || alafafah =='Y')
goto sewa;
else
goto end;
}

}

else if(code==2){
	cout<<"\n ________________________________________\n";
	cout<<"\n Tarif Sewa CAMERA/HARI Rp. 150000\n";
	cout<<" Nama Camera : FUJI\n";
	cout<<" Atas Nama : " <<nama;
	jumlah2=hari*FUJI;
	cout<<"\n\n Jumlah Bayaran " <<nama <<" Sebesar Rp. " <<jumlah2<<endl;
	cout<<" ________________________________________\n";

{
cout<<"\n\n Apakah " <<nama <<" Ingin Mengulanginya ? (y=yes / n=no) : "; cin>>alafafah;
if(alafafah =='y' || alafafah =='Y')
goto sewa;
else
goto end;
}

}
else if(code==03){
	cout<<"\n ________________________________________\n";
	cout<<"\n Tarif Sewa CAMERA/HARI Rp. 100000\n";
	cout<<" Nama Camera : NIKON\n";
	cout<<" Atas Nama : " <<nama;
	jumlah3=hari*NIKON;
	cout<<"\n\n Jumlah Bayaran " <<nama <<" Sebesar Rp. " <<jumlah3<<endl;
	cout<<" ________________________________________\n";

{
cout<<"\n\n Apakah " <<nama <<" Ingin Mengulanginya ? (y=yes / n=no) : "; cin>>alafafah;
if(alafafah =='y' || alafafah =='Y')
goto sewa;
else
goto end;
}

}

else
{
cout<<"\n WARNING!!! " <<nama <<" \n Kode Camera Yang " <<nama <<" Masukkan Salah! \n Silahkan Ulangi Kembali!\n";
goto sewa;
}

end:
cout<<"\n\n_______________________________";
cout<<"\n\n Terimakasih Atas Kunjungannya " <<nama <<".";
cout<<"\n_______________________________";

}

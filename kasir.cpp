#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int jum_beli, bayar,diskon, jumlah[50], harga[50], sub_tot[50];
string nama_barang[50];
float tot;
	string opera;
	int no_hp, no_pulsa;
	
void beli_barang(){
	system("cls");
	
	cout<<"----------------- KASIR UAD -----------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Masukan jumlah barang yang dibeli : ";
	cin>>jum_beli;
	
	for (int i=0; i<jum_beli; i++){
		cout<<endl;
		cout<<"Masukan Barang Ke-"<<i+1<<endl;
		
		cout<<"Nama Barang 	: ";
		cin>>nama_barang[i];
		
		cout<<"Jumlah		: ";
		cin>>jumlah[i];
		
		cout<<"Harga		: ";
		cin>>harga[i];
		
		sub_tot[i]=jumlah[i]*harga[i];
		tot+=sub_tot[i];
	}
	
	cout<<endl;	
	cout<<"------- TOTAL BELANJA MINI MARKET UAD -------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	
	for (int i=0; i<jum_beli; i++){
		cout<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
		cout<<"---------------------------------------------"<<endl;
		
	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	//menampilkan keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl; //menampilkan jumlah bayar(belum termasuk diskon)
	cout<<"Diskon       : Rp."<<diskon<<endl; //menampilkan diskon
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	cout<<"Bayar        : Rp.";cin>>bayar;
	cout<<"kembali      : Rp."<<(bayar-(tot-diskon))<<endl; //uang kembalian
}
void isi_pulsa(){
	system("cls");
	
	cout<<"----------------- KASIR UAD -----------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	
	char pilih;
	
	cout<<"Masukan Nama Operator : "; cin>>opera;
	cout<<"Masukan Nomor Handphone  : "; cin>>no_hp;
	cout<<endl;
	
	cout<<"------------PILIH NOMINAL PULSA--------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"No                Nominal               Harga"<<endl;
	cout<<"1.                10.000	    Rp.12.000"<<endl;
	cout<<"2.                15.000	    Rp.17.000"<<endl;
	cout<<"3.                20.000	    Rp.22.000"<<endl;
	cout<<"4.                25.000	    Rp.24.000"<<endl;
	cout<<"5.                30.000	    Rp.32.000"<<endl;
	cout<<"6.                50.000	    Rp.52.000"<<endl;
	cout<<"7.                100.000	    Rp.102.000"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Pilih Nomimal Pulsa: "; cin>>pilih;
	cout<<endl;
	if (pilih=='1'){
		cout<<opera<<endl;
		tot=12000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 10.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='2'){
		cout<<opera<<endl;
		tot=17000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 15.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='3'){
		cout<<opera<<endl;
		tot=22000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 20.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='4'){
		cout<<opera<<endl;
		tot=27000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 25.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='5'){
		cout<<opera<<endl;
		tot=32000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 30.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='6'){
		cout<<opera<<endl;
		tot=52000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 50.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	} else if (pilih=='7'){
		cout<<opera<<endl;
		tot=102000;
		cout<<"No. Handphone : 0"<<no_hp<<endl;
		cout<<"Nominal       : 100.000"<<endl;
		cout<<"Total Bayar   : Rp."<<tot<<endl;
		cout<<"Bayar         : Rp."; cin>>bayar;
		cout<<"Kembali       : Rp."<<bayar-tot<<endl;
		
	}
}

void belanjaOnline(){
	system("cls"); //clearScreen
	cout<<"----------------- Online Shooping -----------------"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<endl;

	//searchProduct
	cout<<"Mau cari apa hari ini?"<<endl;
	cout<<"==================Pencarian Populer=================="<<endl;
	cout<<"||                                                 ||"<<endl;
	cout<<"||   Kaos Polos Pria         Sepatu Full Black     ||"<<endl;
	cout<<"||   Laptop Gaming           Botol Minum Lucu      ||"<<endl;
	cout<<"||   Lampu Belajar           Jaket kulit           ||"<<endl;
	cout<<"||                                                 ||"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl;

	int i,j,pilihan,produkPilihan,kategori;
	int k,total;//variabeTemporary

	cout<<"Kategori: \n1. Elektronik\n2. Komputer\n";
	cout<<endl;
	cout<<"Masukkan jenis Kategori dengan text: ";
	cin>>kategori;

	if(kategori == 1){ //Electronic
		struct kategoriElektronik
		{
			int hargaPs5 = 9000000,hargaPs2 = 320000,hargaNintendo = 4000000,hargaJoyStick = 2000000,proteksi = 10000,totalHarga,kembalian;
			float diskonHarga,totalSekarang,bayarSekarang;
			string pengiriman = "SiKilat",nota,pilihan;
		}hargaElektronik;

		system("cls");//clearScreen

		cout<<"Kategori Elektronik"<<endl;
		cout<<"Konsol game";
		cout<<"Masukkan pilihan dengan angka: ";cin>>pilihan;
		switch(pilihan){
		case 1:
			cout<<"Kategori Konsol Game"<<endl;
			cout<<"1. Playstasion 5\n2. Playstasion 2\n3. Joystick Razer Chroma\n\n";
			cout<<"~~~ Rekomendasi untuk kamu ~~~"<<endl;
			cout<<"Playstation 5 dan Nintendo Switch Lite"<<endl;
			cout<<"Pilih: ";cin>>produkPilihan;

			if(produkPilihan == 1){
				cout<<endl;
				cout<<"PS5 Digital Edition - Bundle Game"<<endl;
				cout<<"Rp "<<hargaElektronik.hargaPs5<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"PS5 Digital Edition - Bundle Game\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<hargaElektronik.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<hargaElektronik.pengiriman<<"Rp.0"<<endl;
				cout<<"Akan diterima pada tanggal 11-20 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				hargaElektronik.totalHarga=jum_beli*hargaElektronik.hargaPs5;
				cout<<"Total Pembayaran Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>hargaElektronik.pilihan;
				if(hargaElektronik.pilihan == "y","yes"){
					if(hargaElektronik.totalHarga>=5000000){
						hargaElektronik.diskonHarga=0.03*hargaElektronik.totalHarga;
					} else if(hargaElektronik.totalHarga>=600000){
						hargaElektronik.diskonHarga=0.01*hargaElektronik.totalHarga;
					} else {
						hargaElektronik.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls"); //clearScreen
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<hargaElektronik.diskonHarga<<endl;;

				hargaElektronik.totalSekarang=hargaElektronik.totalHarga;
				cout<<"Total Bayar  : Rp"<<hargaElektronik.diskonHarga-hargaElektronik.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>hargaElektronik.bayarSekarang;
				hargaElektronik.kembalian=(hargaElektronik.bayarSekarang-(hargaElektronik.totalSekarang-hargaElektronik.diskonHarga));
				cout<<"Kembali      : Rp"<<hargaElektronik.kembalian<<endl;
			} else if(produkPilihan == 2){
				cout<<endl;
				cout<<"PS2 Limited Edition"<<endl;
				cout<<"Rp "<<hargaElektronik.hargaPs2<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"PS2 Limited Edition\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<hargaElektronik.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<hargaElektronik.pengiriman<<"Rp.0"<<endl;
				cout<<"Akan diterima pada tanggal 11-20 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				hargaElektronik.totalHarga=jum_beli*hargaElektronik.hargaPs2;
				cout<<"Total Pembayaran Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>hargaElektronik.pilihan;
				if(hargaElektronik.pilihan == "y","yes"){
					if(hargaElektronik.totalHarga>=5000000){
						hargaElektronik.diskonHarga=0.03*hargaElektronik.totalHarga;
					} else if(hargaElektronik.totalHarga>=600000){
						hargaElektronik.diskonHarga=0.01*hargaElektronik.totalHarga;
					} else {
						hargaElektronik.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls"); //clearScreen
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<hargaElektronik.diskonHarga<<endl;;

				hargaElektronik.totalSekarang=hargaElektronik.totalHarga;
				cout<<"Total Bayar  : Rp"<<hargaElektronik.diskonHarga-hargaElektronik.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>hargaElektronik.bayarSekarang;
				hargaElektronik.kembalian=(hargaElektronik.bayarSekarang-(hargaElektronik.totalSekarang-hargaElektronik.diskonHarga));
				cout<<"Kembali      : Rp"<<hargaElektronik.kembalian<<endl;
			} else if(produkPilihan == 3){
				cout<<endl;
				cout<<"Joystick Razer Chroma"<<endl;
				cout<<"Rp "<<hargaElektronik.hargaJoyStick<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Joystick Razer Chroma\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<hargaElektronik.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<hargaElektronik.pengiriman<<"Rp.0"<<endl;
				cout<<"Akan diterima pada tanggal 11-20 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				hargaElektronik.totalHarga=jum_beli*hargaElektronik.hargaJoyStick;
				cout<<"Total Pembayaran Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>hargaElektronik.pilihan;
				if(hargaElektronik.pilihan == "y","yes"){
					if(hargaElektronik.totalHarga>=5000000){
						hargaElektronik.diskonHarga=0.03*hargaElektronik.totalHarga;
					} else if(hargaElektronik.totalHarga>=600000){
						hargaElektronik.diskonHarga=0.01*hargaElektronik.totalHarga;
					} else {
						hargaElektronik.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls"); //clearScreen
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<hargaElektronik.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<hargaElektronik.diskonHarga<<endl;;

				hargaElektronik.totalSekarang=hargaElektronik.totalHarga;
				cout<<"Total Bayar  : Rp"<<hargaElektronik.diskonHarga-hargaElektronik.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>hargaElektronik.bayarSekarang;
				hargaElektronik.kembalian=(hargaElektronik.bayarSekarang-(hargaElektronik.totalSekarang-hargaElektronik.diskonHarga));
				cout<<"Kembali      : Rp"<<hargaElektronik.kembalian<<endl;
			}
			break;
		default:
			break;
		}
	//ini adalah kategori komputer
	} else if(kategori == 2){
		//classComputers
		struct kategoriKomputer
		{
			int laptopRogScar = 15000000,laptopAcerNitro = 13000000,laptopApple = 42000000,monitorAsus = 22000000,monitorBenq = 8000000,monitorAcer = 4000000,totalHarga,kembalian,proteksi = 0;
			float diskonHarga,totalSekarang,bayarSekarang;
			string pengiriman = "JNE",nota,pilihan;
		}Komputer;

		system("cls");

		cout<<"Kategori Komputer"<<endl;
		cout<<"Laptop\nMonitor\n";
		cout<<"Masukkan pilihan dengan angka: ";cin>>pilihan;
		switch(pilihan){
		case 1: //Laptop
			cout<<"Kategori Laptop"<<endl;
			cout<<"1. Laptop Asus Rog Scar19H1\n2. Laptop Acer Nitro 152F13H\n3. Laptop Apple M1 Max";
			cout<<"Pilih: ";cin>>produkPilihan;

			if(produkPilihan == 1){
				cout<<endl;
				cout<<"Laptop Asus Rog Scar19H1 - Edition"<<endl;
				cout<<"Rp "<<Komputer.laptopRogScar<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Laptop Asus Rog Scar19H1 - Edition\n";
				cout<<"Proteksi Elektronik Rp"<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.laptopRogScar;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls");
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			//Produk ke dua
			} else if(produkPilihan == 2){
				cout<<endl;
				cout<<"Laptop Acer Nitro i5"<<endl;
				cout<<"Rp "<<Komputer.laptopAcerNitro<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Laptop Acer Nitro i5\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.laptopAcerNitro;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"\nPesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			} else if(produkPilihan == 3){
				cout<<endl;
				cout<<"Laptop Apple M1 Max"<<endl;
				cout<<"Rp "<<Komputer.laptopApple<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Laptop Asus Rog Scar19H1 - Edition\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.laptopApple;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"\nPesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls");
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			}
			break;
		case 2: //Monitor
		cout<<"Kategori Monitor"<<endl;
			cout<<"1. Monitor Asus\n2. Monitor Acer\n3. Monitor Benq"<<endl;
			cout<<"Pilih: ";cin>>produkPilihan;

			if(produkPilihan == 1){
				cout<<endl;
				cout<<"Monitor Asus Pro Edition - Limited Edition"<<endl;
				cout<<"Rp "<<Komputer.monitorAsus<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Monitor Asus Pro Edition - Limited Edition\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.monitorAsus;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls");
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			} else if(produkPilihan == 2){
			cout<<endl;
				cout<<"Monitor Acer Penq2415f"<<endl;
				cout<<"Rp "<<Komputer.monitorAcer<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Monitor Acer Penq2415f\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.monitorAcer;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls");
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			} else if(produkPilihan == 3){
			cout<<endl;
				cout<<"Monitor Benq Zowie 32curve"<<endl;
				cout<<"Rp "<<Komputer.monitorBenq<<endl;
				cout<<"Kualitas Terjamin Barang Ori"<<endl;
				cout<<endl;

				cout<<"jumlah barang ingin dibeli : ";cin>>jum_beli;

				system("cls");

				cout<<"Monitor Benq Zowie 32curve\n";
				cout<<"Proteksi Elektronik Rp"<<setw(5)<<Komputer.proteksi<<endl;
				cout<<"Opsi Pengiriman "<<Komputer.pengiriman<<endl;
				cout<<"Akan diterima pada tanggal 24-3 februari"<<endl;
				cout<<"Total pesanan ("<<jum_beli<<" Produk)"<<endl;

				Komputer.totalHarga=jum_beli*Komputer.monitorBenq;
				cout<<"Total Pembayaran Rp"<<Komputer.totalHarga<<endl;
				cout<<"Pesan Sekarang jawab (y atau n)";cin>>Komputer.pilihan;
				if(Komputer.pilihan == "y","yes"){
					if(Komputer.totalHarga>=5000000){
						Komputer.diskonHarga=0.03*Komputer.totalHarga;
					} else if(Komputer.totalHarga>=600000){
						Komputer.diskonHarga=0.01*Komputer.totalHarga;
					} else {
						Komputer.diskonHarga=0;
					}
				} else {
					break;
				}
				system("cls");
				//menampilkan keterangan
				cout<<"Jumlah Bayar : Rp"<<Komputer.totalHarga<<endl;
				cout<<"Diskon       : Rp"<<Komputer.diskonHarga<<endl;;

				Komputer.totalSekarang=Komputer.totalHarga;
				cout<<"Total Bayar  : Rp"<<Komputer.diskonHarga-Komputer.totalSekarang<<endl;
				cout<<"Bayar        : Rp";cin>>Komputer.bayarSekarang;
				Komputer.kembalian=(Komputer.bayarSekarang-(Komputer.totalSekarang-Komputer.diskonHarga));
				cout<<"Kembali      : Rp"<<Komputer.kembalian<<endl;
			}
		default:
			break;
		}
	}
}

void cetak_strukBelanja(){
	ofstream strukBelanja;
	strukBelanja.open("strukBelanja.txt");
	
	strukBelanja<<"------- STRUK BELANJA MINI MARKET UAD -------"<<endl;
	strukBelanja<<"---------------------------------------------"<<endl;
	strukBelanja<<"No   Barang    Jumlah     Harga     Sub Total"<<endl;
	
	for (int i=0; i<jum_beli; i++){
		strukBelanja<<i+1<<setw(8)<<nama_barang[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl;
	}
		strukBelanja<<"---------------------------------------------"<<endl;
		
	if (tot>=100000){
		diskon=0.06*tot;
	} else if (tot>=50000){
		diskon=0.04;
	}else if (tot>=25000){
		diskon=0.02;
	}else {
		diskon=0;
	}
	
	//menampilkan keterangan
	strukBelanja<<"Jumlah Bayar : Rp."<<tot<<endl;
	strukBelanja<<"Diskon       : Rp."<<diskon<<endl;
	strukBelanja<<"Total Bayar  : Rp."<<tot-diskon<<endl;
	strukBelanja<<"Bayar        : Rp."<<bayar<<endl;
	strukBelanja<<"kembali      : Rp."<<(bayar-(tot-diskon))<<endl;
}

void cetak_strukPulsa(){
	ofstream strukPulsa;
	strukPulsa.open("strukPulsa.txt");
	
	strukPulsa<<"------- STRUK BELANJA MINI MARKET UAD -------"<<endl;
	strukPulsa<<"---------------------------------------------"<<endl;
	strukPulsa<<endl;
	
	strukPulsa<<"-----------------ISI PULSA-------------------"<<endl;
	strukPulsa<<"---------------------------------------------"<<endl;
	strukPulsa<<opera<<endl;
	strukPulsa<<"No. Handphone : 0"<<no_hp<<endl;
	strukPulsa<<"Nominal       : 10.000"<<endl;
	strukPulsa<<"Total Bayar   : Rp."<<tot<<endl;
	strukPulsa<<"Bayar         : Rp."<<bayar<<endl;
	strukPulsa<<"Kembali       : Rp."<<bayar-tot<<endl;
}

void strukBelanjaOnline(){
	ofstream strukBelanjaOnline;
	strukBelanjaOnline.open("strukBelanjaOnline.txt"); //format txt
	strukBelanjaOnline<<"Terima kasih telah berbelanja"<<endl;
}

void menu(){
	int pil_menu;
	
	cout<<"----------------- KASIR UAD -----------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"---------------MENU PEMBAYARAN---------------"<<endl;
	cout<<"---------------------------------------------"<<endl;
	cout<<"1. Belanja Barang"<<endl;
	cout<<"2. Isi Pulsa"<<endl;
	cout<<"3. Belanja Online"<<endl;
	cout<<endl;
	
	cout<<"Masukan pilihan menu pembayaran : "; cin>>pil_menu;
	if (pil_menu==1){
		beli_barang();
	} else if (pil_menu==2){
		isi_pulsa();
	} else if(pil_menu==3){
		belanjaOnline();
	}
}
int main(){
	menu();
	cetak_strukBelanja();
	cetak_strukPulsa();
	return 0;
}
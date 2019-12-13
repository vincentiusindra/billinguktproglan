#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <stdlib.h>
#include "effect_ketik.h"
struct mahasiswa{
char npm[20];
char nama[50];
float amount;
}s;
void ketik();
void fullscreen();
void tambah();
void daftar();
void ganti();
void cari();
void bayar();
void help();
void arrow();
int deletefile();
char get;
int main(){	
fullscreen();
int password;
int npm;
char choice;
	system("cls");
	system("COLOR 0B");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t     .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
	printf("\t\t\t\t    | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
	printf("\t\t\t\t    | | _____  _____ | || |  _________   | || |   _____      | || |     ______   | || |     ____     | || | ____    ____ | || |  _________   | |\n");
	printf("\t\t\t\t    | ||_   _||_   _|| || | |_   ___  |  | || |  |_   _|     | || |   .' ___  |  | || |   .'    `.   | || ||_   \\  /   _|| || | |_   ___  |  | |\n");
	printf("\t\t\t\t    | |  | | /\\ | |  | || |   | |_  \\_|  | || |    | |       | || |  / .'   \\_|  | || |  /  .--.  \\  | || |  |   \\/   |  | || |   | |_  \\_|  | |\n");
	printf("\t\t\t\t    | |  | |/  \\| |  | || |   |  _|  _   | || |    | |   _   | || |  | |         | || |  | |    | |  | || |  | |\\  /| |  | || |   |  _|  _   | |\n");
	printf("\t\t\t\t    | |  |   /\\   |  | || |  _| |___/ |  | || |   _| |__/ |  | || |  \\ `.___.'\\  | || |  \\  `--'  /  | || | _| |_\\/_| |_ | || |  _| |___/ |  | |\n");
	printf("\t\t\t\t    | |  |__/  \\__|  | || | |_________|  | || |  |________|  | || |   `._____.'  | || |   `.____.'   | || ||_____||_____|| || | |_________|  | |\n");
	printf("\t\t\t\t    | |              | || |              | || |              | || |              | || |              | || |              | || |              | |\n");
	printf("\t\t\t\t    | '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
	printf("\t\t\t\t     '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		int posisiarrow = 1;
		int pilihan = 0;
		while(pilihan!=13){
		system("cls");
		printf("\t\t\t   .----------------.  .----------------.  .----------------.  .-----------------.       .----------------.  .----------------.  .-----------------. .----------------. \n");
		printf("\t\t\t  | .--------------. || .--------------. || .--------------. || .--------------. |      | .--------------. || .--------------. || .--------------. || .--------------. |\n");
		printf("\t\t\t  | | ____    ____ | || |      __      | || |     _____    | || | ____  _____  | |      | | ____    ____ | || |  _________   | || | ____  _____  | || | _____  _____ | |\n");
		printf("\t\t\t  | ||_   \\  /   _|| || |     /  \\     | || |    |_   _|   | || ||_   \\|_   _| | |      | ||_   \\  /   _|| || | |_   ___  |  | || ||_   \\|_   _| | || ||_   _||_   _|| |\n");
		printf("\t\t\t  | |  |   \\/   |  | || |    / /\\ \\    | || |      | |     | || |  |   \\ | |   | |      | |  |   \\/   |  | || |   | |_  \\_|  | || |  |   \\ | |   | || |  | |    | |  | |\n");
		printf("\t\t\t  | |  | |\\  /| |  | || |   / ____ \\   | || |      | |     | || |  | |\\ \\| |   | |      | |  | |\\  /| |  | || |   |  _|  _   | || |  | |\\ \\| |   | || |  | '    ' |  | |\n");
		printf("\t\t\t  | | _| |_\\/_| |_ | || | _/ /    \\ \\_ | || |     _| |_    | || | _| |_\\   |_  | |      | | _| |_\\/_| |_ | || |  _| |___/ |  | || | _| |_\\   |_  | || |   \\ `--' /   | |\n");
		printf("\t\t\t  | ||_____||_____|| || ||____|  |____|| || |    |_____|   | || ||_____|\\____| | |      | ||_____||_____|| || | |_________|  | || ||_____|\\____| | || |    `.__.'    | |\n");
		printf("\t\t\t  | |              | || |              | || |              | || |              | |      | |              | || |              | || |              | || |              | |\n");
		printf("\t\t\t  | '--------------' || '--------------' || '--------------' || '--------------' |      | '--------------' || '--------------' || '--------------' || '--------------' |\n");
		printf("\t\t\t   '----------------'  '----------------'  '----------------'  '----------------'        '----------------'  '----------------'  '----------------'  '----------------' \n");	
		printf("\n\n\n\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(1,posisiarrow); printf("A : Menambahkan Data Baru\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(2,posisiarrow); printf("B : Melihat Daftar Data\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(3,posisiarrow); printf("C : Mengubah Data\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(4,posisiarrow); printf("D : Pembayaran\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(5,posisiarrow); printf("E : Mencari Data\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(6,posisiarrow); printf("F : Hapus File Database\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(7,posisiarrow); printf("G : Bantuan\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t");
		arrow(8,posisiarrow); printf("H : Keluar\n");
		pilihan = getch();
		fflush(stdin);
		if(pilihan==80 && posisiarrow!=8){
			posisiarrow++;
		}
		else if (pilihan==72 && posisiarrow!=1){
			posisiarrow--;
		}
		else{
			posisiarrow=posisiarrow;
		}
		}
		switch(posisiarrow)
		{
			case 1:
				tambah();
				break;
			case 2:
				daftar();
				break;
			case 3:
				ganti();
				break;
			case 4:
				bayar();
				break;
			case 5:
				cari();
				break;
			case 6:
				deletefile();
				break;
			case 7:
				help();
				break;
			case 8:
				system("cls");
				ketik("Terimakasih Telah Menggunakan Aplikasi Kami",30);
				Sleep(2000);
				exit(0);
			default:
				system("cls");
				ketik("Input Anda Salah",30);
				ketik("\nPencet tombol apapun untuk kembali",30);
				getch();
		}
	}
}
void fullscreen(){
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}
void tambah(){
	FILE *f;
	char test;
	f=fopen("database.txt","ab+");
	if(f==0)
	{   f=fopen("database.txt","wb+");
		system("cls");
		printf("Harap tunggu");
		printf("/nPencet tombol apapun untuk melanjutkan");
		getch();
	}
	while(1)
	{
		system("cls");
		printf("\n NPM: ");
		scanf("%s",&s.npm);
		printf("\n Nama: ");
		fflush(stdin);
		scanf("%[^\n]",&s.nama);
		printf("\n UKT: ");
		scanf("%f",&s.amount);
		fwrite(&s,sizeof(s),1,f);
		fflush(stdin);
		system("cls");
		printf("Data berhasil ditambahkan");
		printf("\nPencet tombol enter untuk keluar");
		test=getche();
		if(test==13)
			break;
	}
	fclose(f);
}
void daftar(){
	FILE *f;
	int i;
	if((f=fopen("database.txt","rb"))==NULL)
		exit(0);
	system("cls");
	printf("NPM\t\t\tNama\t\t\t\tUKT\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%-10s\t\t%-20s\t\tRp. %.2f ",s.npm,s.nama,s.amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");

fclose(f);
getch();
}

void cari(){
	FILE *f;
	char npm[20];
	int flag=1;
	f=fopen("database.txt","rb+");
	if(f==0)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Masukkan NPM Yang Ingin Dicari: ");
	scanf("%s", npm);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.npm,npm)==0)
		{	system("cls");
			printf(" Data Ditemukan ");
			printf("\n\nNPM: %s\nNama: %s\nUKT: Rp.%0.2f\n",s.npm,s.nama,s.amount);
			flag=0;
			break;
		}
		else if(flag==1)
		{	system("cls");
			printf("NPM tidak ditemukan di database kami");
		}
	}
	getch();
	fclose(f);
}
void ganti(){
	FILE *f;
	char npm[20];
	long int size=sizeof(s);
	if((f=fopen("database.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	ketik("Masukkan NPM yang ingin dimodifikasi datanya: ",30);
	scanf("%[^\n]",npm);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.npm,npm)==0)
		{
			system("cls");
			printf("\n Masukkan NPM: ");
			scanf("%s",&s.npm);
			printf("\n Masukkan Nama: ");
			fflush(stdin);
			scanf("%[^\n]",&s.nama);
			printf("\n Masukkan UKT: ");
			scanf("%f",&s.amount);
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	fclose(f);
}
void bayar(){
	FILE *f;
	char npm[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((f=fopen("database.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Masukkan NPM target pembayaran");
	scanf("%[^\n]",npm);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.npm,npm)==0)
		{
			system("cls");
			printf("\n NPM: %s",s.npm);
			printf("\n Nama: %s",s.nama);
			printf("\n UKT: %f",s.amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nMasukkan Jumlah Pembayaran:");
			fflush(stdin);
			scanf(" %f",&amt);
			s.amount=s.amount-amt;
			fseek(f,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,f);
			break;
		}
	}
	system("cls");
	printf("Terimakasih %s atas pembayaran yang tepat waktu",s.nama);
	getch();
	fclose(f);
}
void help(){
system("cls");
printf("===================================== Petunjuk Penggunaan ==================================================\n\n");
printf("1. Menu A digunakan untuk menambahkan data baru\n\n");
printf("2. Menu B digunakan untuk melihat data-data yang ada\n\n");
printf("3. Menu C digunakan untuk mengubah data\n\n");
printf("4. Menu D digunakan untuk melakukan pembayaran\n\n");
printf("5. Menu E digunakan untuk mencari data\n\n");
printf("6. Menu F digunakan untuk menghapus file database\n\n");
printf("7. Menu G digunakan untuk meminta bantuan\n\n");
printf("8. Menu H digunakan untuk keluar dari program\n\n");
printf("10.Pencet tombol panah di keyboard untuk memilih menu yang diinginkan\n");
printf("============================================================================================================\n");
getch();
system("cls");
}

void arrow(int posisi, int tujuan){
if(posisi==tujuan){
	printf("------->");
}
else{
	printf("        ");
}	
}

int deletefile(){
FILE *f;
f = fopen("database.txt", "w");
printf("\t\t\t\t\t\t\t\t\t\t\t\tFile deleted successfully");
getch();
system("cls");   
return(0);
}

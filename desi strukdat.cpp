#include<iostream>
#include<cstring>
#include<stdlib.h>
#include<string.h>
#define max 20

using namespace std;

typedef struct queue {

int head;

int tail;

string data [20];

}antrian;

queue antri;

void inisialisasi();
int isFull();
int isEmpty();
void enqueue(string d);
void dequeue();
void cari(string d);
void rubah(string d);
void clear();



int main(){
	
int pil;
string d,c,data,nama,umur,alamat;

inisialisasi();

string dt;
do {
cout<<"\n========================================="<<endl;
cout<<"**** PROGRAM ANTRIAN SEMBAKO ****"<<endl;
cout<<"========================================="<<endl;
cout<<"\t1. Masukan antrian"<<endl;
cout<<"\t2. Layani antrian"<<endl;
cout<<"\t3. Cari antrian"<<endl;
cout<<"\t4. Rubah antrian"<<endl;
cout<<"\t5. Bersihkan antrian"<<endl;
cout<<"\t6. Keluar"<<endl;
cout<<"------------------------------------------"<<endl;
cout<<" Antrian"<<endl;
cout<<"Start | ";
for(int i=0;i<=antri.tail;i++)
cout<<"["<<antri.data[i]<<"] ";
cout<<"|";
cout<<"\nMasukan pilihan : ";
cin>>pil;
switch(pil)
{
case 1:

if(!isFull())

{

cout<<"Nama Anda = ";
cin>>dt;
enqueue(dt);
}

else

cout<<"\nSudah penuh!"<<endl;
break;

case 2:

if(!isEmpty())
dequeue();
else
cout<<"\nMasih kosong!"<<endl;
break;

case 3:

cout<<"Masukan antrian yang ingin dicari : ";
cin>>d;
cari(d);
break;
case 4:
cout<<"Masukan antrian yang ingin di rubah : ";
cin>>d;
rubah(d);
break;

case 5:

clear();
cout<<"\nSudah kosong!"<<endl;
break;
case 6:

cout<<"\nTekan enter untuk keluar"<<endl;

break;

default :

system("cls");

cout<<"Error!";

break;

}
}

while(pil !=6);

	return 0;
}



// fungsi
void inisialisasi(){

antri.head=antri.tail=-1;

}

int isFull()

{

if(antri.tail==max-1)


return 1;

else

return 0;
}

int isEmpty()

{

if(antri.tail==-1)

{

antri.head=-1;

return 1;

}

else

return 0;
}

void enqueue(string d)

{

system("cls");

antri.head=0;

antri.tail++;

antri.data[antri.tail]=d;
}


void dequeue()


{
system("cls");
cout<<"Antrain "<<antri.data[antri.head]<<" sudah dilayani"<<endl;
for(int i=antri.head;i<=antri.tail;i++)
antri.data[i],antri.data[i+1];
antri.tail--;

}

void cari(string d)

{

system("cls");
for(int i=antri.head;i<=antri.tail;i++)
{
	
if(antri.data[i]==d)
{
cout<<"Antrian "<<d<<" di temukan di urutan "<<i+1<<endl;
}
}
}

void rubah(string d)
{
char s[20];
int i;
system("cls");
for(i=0;i<=antri.tail;i++)
{
if(antri.data[i]==d)
{
cout<<"\nRubah dengan : ";
cin>>s;
antri.data[i]=s;
cout<<"Antrian "<<d<<" dirubah dengan "<<antri.data[i];
}
}
}
void clear(){
system("cls");
antri.head=antri.tail=-1;
cout<<"Semua data terhapus";
}
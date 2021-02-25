/*
Nama : Rizky Mahardika
NPM : 140810200010
Tanggal buat : 4-12-2020
Nama program : Program Screensaver
Deskripsi :  
*/

#include <iostream>
#include <windows.h>
#include<conio.h>
using namespace std;

void gotoxy (int x, int y)
    {
         COORD kordinat;     
         kordinat.X = x;     
         kordinat.Y = y;     
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),kordinat);       
    }

void pola_1(){
    for(int i=5; i<=14; i++){
        gotoxy(8,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=9; j<=20; j++){
        gotoxy(j,14);
        cout << "#";
        Sleep(500);
    }
    for (int i=14; i>=5; i--){
        gotoxy(20,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=21; j<=31; j++){
        gotoxy(j,5);
        cout << "#";
        Sleep(500);
    }
    for (int i=6; i<=14; i++){
        gotoxy(31,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=32; j<=42; j++){
        gotoxy(j,14);
        cout << "#";
        Sleep(500);
    }
}

void pola_2(){
    gotoxy(31,14);
    cout << "###########";
    for (int i=14; i>=5; i--){
        gotoxy(42,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=42; j>=32; j--){
        gotoxy(j,5);
        cout << "#";
        Sleep(500);
    }
    for (int i=5; i<=13; i++){
        gotoxy(32,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=33; j<=40; j++){
        gotoxy(j,13);
        cout << "#";
        Sleep(500);
    }
    for (int i=13; i>=6; i--){
        gotoxy(40,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=40; j>=34; j--){
        gotoxy(j,6);
        cout << "#";
        Sleep(500);
    }
    for (int i=6; i<=12; i++){
        gotoxy(34,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=34; j<=38; j++){
        gotoxy(j,12);
        cout << "#";
        Sleep(500);
    }
    for (int i=12; i>=7; i--){
        gotoxy(38,i);
        cout << "#";
        Sleep(500);
    }
    for (int j=38; j>=36; j--){
        gotoxy(j,7);
        cout << "#";
        Sleep(500);
    }
    for (int i=7; i<=11; i++){
        gotoxy(36,i);
        cout << "#";
        Sleep(500);
    }

}

void pola_3(){
cout<<"\n\n\n\n\n";
 
 for(int i=0;i<15;i++)
 cout<<" ";
 cout<<"*         *";
 cout<<endl;
 Sleep(500);
 for(int j=0;j<13;j++)
 cout<<" ";
 cout<<"*   *     *   *";
 cout<<endl;
 Sleep(500);
 for(int k=0;k<11;k++)
 cout<<" ";
 cout<<"*      *   *      *";
 cout<<endl;
 Sleep(500);
 for(int l=0;l<11;l++)
 cout<<" ";
 cout<<"*       * *       *";
 cout<<endl;
 Sleep(500);
 for(int m=0;m<11;m++)
 cout<<" ";
 cout<<"*        *        *";
 cout<<endl;
 Sleep(500);
 for(int n=0;n<11;n++)
 cout<<" ";
 cout<<"*                 *";
 cout<<endl;
 Sleep(500);
 for(int o=0;o<12;o++)
 cout<<" ";
 cout<<"*               *";
 cout<<endl; 
 Sleep(500);
 for(int p=0;p<13;p++)
 cout<<" ";
 cout<<"*             *";
 cout<<endl;
 Sleep(500);
 for(int q=0;q<14;q++)
 cout<<" ";
 cout<<"*           *";
 cout<<endl;
 Sleep(500);
 for(int r=0;r<15;r++)
 cout<<" ";
 cout<<"*         *";
 cout<<endl;
 Sleep(500);
 for(int s=0;s<17;s++)
 cout<<" ";
 cout<<"*     *";
 cout<<endl;
 Sleep(500);
 for(int t=0;t<20;t++)
 cout<<" ";
 cout<<"**";
 cout<<endl;
 
}


int main() {

    system("cls");
    pola_1();
    system("cls");
    pola_2();
    Sleep(1500);
    system("cls");
    pola_3();
    

}

#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    float a,b;
    int kode;
    
    cout<<"pilihan menu : \n";
    cout<<"1.perkalian (*)\n";
    cout<<"2.pembagian (/)\n";
    cout<<"silahkan masukkan kode menu :";cin>>kode;
    
        cout<<"masukkan angka pertama :";cin>>a;
        cout<<"masukkan angka kedua :";cin>>b;
        if(kode== 1){
            cout<<"\n Hasil perkalian dari"<<a<<" * "<<b<<"adalah :"<<a*b<<endl;
         }
         else if(kode== 2){
            cout<<"\n Hasil pembagian dari"<<a<<" / "<<b<<"adalah :"<<a/b<<endl;
         }
         
   return 0;
   
}

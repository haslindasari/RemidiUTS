#include<iostream>
using namespace std;

struct data_mhs
{
  string nama;
  int nim;
  float ipk;
 }a,b;
 
 int main()
 {
    a.nama = "Ajis Gagap";
    a.nim  = 102904049;
    a.ipk  = 2.5;
    b.nama = "Tumming";
    b.nim  = 102904050;
    b.ipk  = 3.0;
    
    cout<<"Nama  :"<<a.nama<<endl;
    cout<<"NIM   :"<<a.nim<<endl;
    cout<<"IPK   :"<<a.ipk<<endl;
    cout<<"\n";
    cout<<"Nama  :"<<b.nama<<endl;
    cout<<"NIM   :"<<b.nim<<endl;
    cout<<"IPK   :"<<b.ipk<<endl;
    
return 0;
}

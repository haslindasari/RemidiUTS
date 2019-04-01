#include<iostream>
using namespace std;
int main()
{
  int bil[4][4];
  
  for(int a=0; a<4; a++){
  for(int b=0; b<4; b++){
          cout<<"matriks"<<a<<","<<b<<"=";
          cin>>bil[a][b];
 }
 }
 
 cout<<"hasil yang anda masukkan,tampilannya adalah"<<endl;
 for(int a=0; a<4; a++){
 for(int b=0; b<4; b++){
          cout<<bil[a][b]<<" ";
 }cout<<endl;
 }
 
 return 0;
}

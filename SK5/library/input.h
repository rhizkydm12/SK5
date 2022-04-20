#include <iostream>
using namespace std;

class input{
public:
  void cetak(){ 
  cout <<"Nama mahasiswa      : "; cin >> nama;
  cout <<"NIM mahasiswa      :"; cin >> nim;
  cout <<"Jumlah Mata Kuliah    : "; cin >> matkul;
  }
 void toFile(){
   tulis_data.open("api_data.txt");
      tulis_data << nama <<endl;
      tulis_data << nim <<endl;
      tulis_data << matkul;
			tulis_data.close();
 } 

private: 
  ofstream tulis_data;
  char nama[20], nim[20];
  int matkul;
};
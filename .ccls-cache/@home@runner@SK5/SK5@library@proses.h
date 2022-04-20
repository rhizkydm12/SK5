 using namespace std;

class proses {
	public :
		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data>>nama;
        ambil_data>>nim;
        ambil_data>>matkul;
        }
			ambil_data.close();
		}

		void toFile(){
      tulis_data.open("api_data.txt");
      tulis_data<<matkul<<endl;
			tulis_data.close();
      cout<<"\n======================="<<endl;
      cout << "\nMasukkan nama matkul :"; cin >> nmmatkul;
      cout << "Masukkan jumlah sks : "; cin >> sks;
      spp = (sks * 150000) * 0.75;
      total = total + spp;
      }
      cout << "\n------------------------------------\n";  
			tulis_data.open("api_data.txt",ios::app);
      tulis_data<<nama<<endl;
      tulis_data<<nim<<endl;
      tulis_data<<matkul<<endl;
			tulis_data<<total;
			tulis_data.close();
		}

	private :
		ifstream ambil_data;
		ofstream tulis_data;
    char nama[20], nim[20], nmmatkul[20];
    int matkul, sks, spp, diskon, bayar; 
    int total=0; 
};
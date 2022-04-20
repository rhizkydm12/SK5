using namespace std;

class output {
	public :
		void cetak(){
			cout << "=============================="<<endl;;
			cout<< "Nama              : "  << data_file[1]<<endl;
			cout<< "NIM               : "  << data_file[2]<<endl;
			cout<< "Harga per sks       : Rp.150.000" <<endl;
      cout<< "Jumlah Mata kuliah   : "<<data_file[3]<<endl;
			cout<< "Total Spp          : "   << data_file[4]<<endl;
		}

		void getData(){
			ambil_data.open("api_data.txt");
			while(!ambil_data.eof()){
				ambil_data >> data_file[index];
				index += 1;
			}
			ambil_data.close();
		}

	private :
		ifstream ambil_data;
		string data_file[30];
		int index = 0;
};
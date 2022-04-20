if (bayar.program == 1)  //pemilihan perhitungan program studi d3
 {
  tetap = 500;
  var = bayar.sks * 250;  //proses
  cout << "Biaya SPP 1 Semester Rp. " << tetap << endl;  
  cout << "Biaya SKS 1 Semester Rp. " << var;  //hasil
 }
 else
  if (bayar.program == 2)  //pemilihan perhitungan program studi s1
  {
   tetap = 750;
   var = bayar.sks * 500;  //proses
   cout << "Biaya SPP 1 Semester Rp. " << tetap << endl;
   cout << "Biaya SKS 1 Semester Rp. " << var;  //hasil
  }
 return 0;
}
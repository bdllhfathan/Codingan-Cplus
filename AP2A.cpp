// #include <iostream>
// using namespace std;

// int faktorial (int n);
// int main()
// {


//     int angka, hasil;
//     cout << "menghitung faktorial dari : ";
//     cin >> angka;

//     hasil = faktorial (angka);
//     cout << "\nnilai faktorial adalah : " << hasil << endl;

//     cin.get();
//         return 0;
//  }
 
//  int faktorial (int n){
//      if (n <= 1){
//          cout << n;
//          return n;
//      }else{
//          cout << n << "*";
//          return n * faktorial (n - 1);
//      }
//  }

// #include <iostream>
// using namespace std;
// void printarray (int arg[], int length)
// {
//  for (int n=0; n<length; n++)
//  cout << arg[n] << " ";
//  cout << "\n";
// }
// int main ()
// {
//  int firstarray[] = {5, 10, 15};
//  int secondarray[] = {2, 4, 6, 8, 10};
//  printarray (firstarray,3);
//  printarray (secondarray,5);
//  return 0;
// } 

// #include <iostream>
// using namespace std;

// char coba[10] ;

// int main()
// {
//     cout << "Masukan kata yang di inginkan..." <<endl ;
//     cin.getline(coba,10) ;

//     cout << "kamu menulis.." ;
//     cout << coba[10] ;

//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// using namespace std;

// union Myunions
// {
//     unsigned int x ;
//     unsigned int y;

    
// };


// int main()
// {
//       union MyUnion init = { 0x1441 };

//       cout<<setiosflags(ios::showbase);
//       cout<<hex<<"x    : "<<init.x<<endl;
//       cout<<hex<<"y[0] : "<<(int)init.y[0]<<endl;
//       cout<<hex<<"y[1] : "<<(int)init.y[1]<<endl;
    
//     return 0;

// }

// #include <iostream>
// using namespace std;

// /*buatlah sebuah unions dengan nama MyUnion yang memiliki
// 2 anggota bertipe integer dengan nama elemen x dan y*/
// union Myunion
// {
//     int x,y ;
// };


// int main()
// {
//     //definisikan unions dengan nama variabel data//
//     Myunion variabelData;

//     //beri nilai x = 100//
//     variabelData.x = 100;
    


//     //pemanggilan elemen y untuk mencetak nilai yang tersimpan//
//     cout<<"Nilai y = "<< variabelData.y << endl ;
    

//     return 0;

// }

// #include <iostream>
// using namespace std;
// //kelas dasar
// class seseorang{ // membuat base class yang bernama mahasiswa
//     public:
//     // virtual function
//     virtual void pesan(){ // membuat vitrual function yang bernama nilai dengan tipe data void
//         cout<<"nilai mahasiswa adalah A"<<endl;
//     }
// };
// //kelas budi turunan dari kelas seseorang
// class budi:public seseorang{ // membuat derived class yang bernama budi 
//     public:
//     void nilai(){ 
//          cout<<"nilai budi adalah A"<<endl;
//     }
// };
// //kelas andi turunan dari kelas seseorang
// class andi:public seseorang{ // membuat derived class yang bernama andi
//     public:
//     void nilai(){
//         cout<<"nilai andi adalah A"<<endl;
//     }
// };
// int main(){
//     //deklarasi objek
//     seseorang *obyek;
//     budi a;
//     andi b;
//     //menunjuk objek dari kelas budi
//     obyek = &a;
//     obyek->pesan();
//     //menunjuk objek dari kelas andi
//     obyek = &b;
//     obyek->pesan();
//     return 0;
// }

    #include <iostream>
    using namespace std;
    //kelas dasar
    // membuat base class yang bernama mahasiswa
    class mahasiswa{
        public:
        // virtual function
        virtual void nilai(){ // membuat vitrual function yang bernama nilai dengan tipe data void
            cout<<"nilai mahasiswa adalah A"<<endl;
        }
    };
    //kelas budi turunan dari kelas seseorang
    class budi:public mahasiswa{ // membuat derived class yang bernama budi 
        public:
        void nilai(){
            cout<<"nilai budi adalah A"<<endl;
        }
    };
    //kelas andi turunan dari kelas seseorang
    class andi:public mahasiswa{ // membuat derived class yang bernama andi
        public:
        void nilai(){
            cout<<"nilai andi adalah A"<<endl;
        }
    };
    int main(){
        //deklarasi objek
        mahasiswa *obyek;
        budi a;
        andi b;
        //menunjuk objek dari kelas budi
        obyek = &a;
        obyek ->nilai();
        //menunjuk objek dari kelas andi
        obyek = &b;
        obyek->nilai();
        return 0;
    }
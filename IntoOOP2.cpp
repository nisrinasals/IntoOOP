#include <iostream>
using namespace std;

class bangunDatar{

    //akses modifer
    private:
        float panjang, lebar;
    public:
        float luas;

        void input(){ //metode input persegi panjang
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "Masukkan Lebarnya = ";
            cin >> lebar;
        }

        float hitungLuas(){
            return panjang * lebar;
        }

        void display(){
            cout << "Panjangnya = " << panjang << endl;
            cout << "Lebarnya = " << lebar << endl;
            cout << "Luasnya = " << luas << endl;
        }
};

int main(){
    bangunDatar pp;
    pp.input();
    pp.display();

    return 0;
}
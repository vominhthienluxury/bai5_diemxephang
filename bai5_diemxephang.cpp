// bai5_diemxephang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>  
using namespace std;
int main() {
    int num;
    cout << "Nhap 1 so de kiem tra diem:\n";
    cin >> num; // nhap diem
    if (num < 0 || num >= 11) { // gioi han
        cout << "Ban hay nhap so tu 1 den 10 de kiem tra"; //thong bao
    }
    else if (num > 0 && num < 5) {
        cout << "------------\nKet Qua:Yeu\n------------"; //ket qua
    }
    else if (num >= 5 && num < 6) {
        cout << "------------\nKet Qua:TB\n------------"; //ket qua
    }
    else if (num >= 7 && num < 7.5) {
        cout << "------------\nKet Qua:kha\n------------"; //ket qua
    }
    else if (num >= 8 && num < 11)
        cout << "------------\nKet Qua:gioi\n------------"; //ket qua
}



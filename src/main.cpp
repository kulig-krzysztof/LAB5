#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include <matrix.hpp>

int main(){
    Matrix m1(6,6); // tworzenie trzech macierzy 5x6
    Matrix m2(6,6);
    Matrix m3(6,6);
    m1.set(1,1,5); // zmiana wartości pierwszej komórki macierzy m1 na 5
    m2.set(1,1,6); // zmiana wartości pierwszej komórki macierzy m2 na 6
    
    //operator +
    m3 = m1+m2;
    m3.print();
    cout << endl;
    
    //operator -
    m3 = m1-m2;
    m3.print();
    cout << endl;

    //operator <<
    std::ofstream file;
    file.open("matrix.txt");
    file<<m1;
    file.close();
    
    //operator *
    m3 = m1*m2;
    m3.print();
    cout << endl;

    //opertator []
    m3[0];
    cout << endl;

    //operator ==
    m1==m2;
    cout << endl;
}
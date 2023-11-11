#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Uczen
{
    string imie;
    string nazwisko;
    string pesel;
    string dataurodzenia;
    string miejsce_urodzniea;
    int klasaId;
    int adreszamieszkania;
    //struct Klasa klasa;
    //struct Adres adreszamieszkania;
    //struct Adres adreszameldowania;
    //struct Adres adresKorespondencji;
};

struct Klasa
{
    int id;
    string nazwa;
    string specjalnosc;
    string rok_szkolny;
    string semestr;
};

struct Adres
{
    int id;
    string ulica;
    string nrdomu;
    string nrlokalu;
    string miasto;
    string kod_pocztowy;
    string panstwo;
};

int main()
{
    //Uczen ucznesk("stas", "kepka", "3242424424423", "2009-12-5", "warszawa");
    Uczen uczenesk;
    uczenesk.imie = "stas";
    uczenesk.nazwisko = "kepka";
    uczenesk.pesel = "3242424424423";
    uczenesk.dataurodzenia = "2009-12-5";
    uczenesk.miejsce_urodzniea = "warszawa";
    cout << "sdasd";
    ofstream fout("d:\\uczniowe.txt");
    fout << uczenesk.imie << "\t" << uczenesk.nazwisko << "\t" << uczenesk.pesel << "\t" << uczenesk.dataurodzenia << "\t" << uczenesk.miejsce_urodzniea;
    fout.close();
    cout << "odczyt z dysku" << endl;
    Uczen odzyskanyuczenesk;
    ifstream fin("d:\\uczniowe.txt");

    fin >> odzyskanyuczenesk.imie >> odzyskanyuczenesk.nazwisko >> odzyskanyuczenesk.pesel >> odzyskanyuczenesk.dataurodzenia >> odzyskanyuczenesk.miejsce_urodzniea;
    fin.close();
    cout << "From RAM" << endl;
    cout << uczenesk.imie << "\t" << uczenesk.nazwisko << "\t" << uczenesk.pesel << "\t" << uczenesk.dataurodzenia << "\t" << uczenesk.miejsce_urodzniea;

    cout << endl
         << "From file hdd" << endl;
    cout << odzyskanyuczenesk.imie << "\t" << odzyskanyuczenesk.nazwisko << "\t" << odzyskanyuczenesk.pesel << "\t" << odzyskanyuczenesk.dataurodzenia << "\t" << odzyskanyuczenesk.miejsce_urodzniea;
}

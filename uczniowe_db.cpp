#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Uczen
{
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
    string imie;
    string nazwisko;
    string pesel;
    string dataurodzenia;
    string miejsce_urodzniea;
    //int klasaId;
    //int adreszamieszkania;
    struct Klasa klasa;
    struct Adres adreszamieszkania;
    //struct Adres adreszameldowania;
    //struct Adres adresKorespondencji;
};

int main()
{
    //Uczen ucznesk("stas", "kepka", "3242424424423", "2009-12-5", "warszawa");
    Uczen uczenesk;
    uczenesk.imie = "Stas";
    uczenesk.nazwisko = "Kepka";
    uczenesk.pesel = "3242424424423";
    uczenesk.dataurodzenia = "2009-12-5";
    uczenesk.miejsce_urodzniea = "warszawa";

    uczenesk.adreszamieszkania.id = 1;
    uczenesk.adreszamieszkania.ulica = "Osmanczyka";
    uczenesk.adreszamieszkania.nrdomu = "1";
    uczenesk.adreszamieszkania.nrlokalu = "1";
    uczenesk.adreszamieszkania.miasto = "Warszawa";
    uczenesk.adreszamieszkania.kod_pocztowy = "01-494";
    uczenesk.adreszamieszkania.panstwo = "POLSKA";

    uczenesk.klasa.id = 1;
    uczenesk.klasa.nazwa = "1A";
    uczenesk.klasa.rok_szkolny = "2023";
    uczenesk.klasa.semestr = "I";
    uczenesk.klasa.specjalnosc = "MAT-INF";

    cout << "Zapis do pliku" << endl;
    ofstream fout("d:\\uczniowe.txt");
    fout << uczenesk.imie << "\t" << uczenesk.nazwisko << "\t" << uczenesk.pesel
         << "\t" << uczenesk.dataurodzenia << "\t" << uczenesk.miejsce_urodzniea
         << "\t" << uczenesk.adreszamieszkania.id << "\t" << uczenesk.adreszamieszkania.ulica
         << "\t" << uczenesk.adreszamieszkania.nrdomu << "\t" << uczenesk.adreszamieszkania.nrlokalu
         << "\t" << uczenesk.adreszamieszkania.miasto << "\t" << uczenesk.adreszamieszkania.kod_pocztowy
         << "\t" << uczenesk.adreszamieszkania.panstwo << "\t" << uczenesk.klasa.id
         << "\t" << uczenesk.klasa.nazwa << "\t" << uczenesk.klasa.rok_szkolny
         << "\t" << uczenesk.klasa.semestr << "\t" << uczenesk.klasa.specjalnosc;

    fout.close();
    cout << "odczyt z dysku" << endl;
    Uczen odzyskanyuczenesk;
    ifstream fin("d:\\uczniowe.txt");

    fin >> odzyskanyuczenesk.imie >> odzyskanyuczenesk.nazwisko >> odzyskanyuczenesk.pesel >> odzyskanyuczenesk.dataurodzenia >> odzyskanyuczenesk.miejsce_urodzniea >> odzyskanyuczenesk.adreszamieszkania.id >> odzyskanyuczenesk.adreszamieszkania.ulica >> odzyskanyuczenesk.adreszamieszkania.nrdomu >> odzyskanyuczenesk.adreszamieszkania.nrlokalu >> odzyskanyuczenesk.adreszamieszkania.miasto >> odzyskanyuczenesk.adreszamieszkania.kod_pocztowy >> odzyskanyuczenesk.adreszamieszkania.panstwo >> odzyskanyuczenesk.klasa.id >> odzyskanyuczenesk.klasa.nazwa >> odzyskanyuczenesk.klasa.rok_szkolny >> odzyskanyuczenesk.klasa.semestr >> odzyskanyuczenesk.klasa.specjalnosc;

    fin.close();
    cout << "From RAM" << endl;
    cout << uczenesk.imie << "\t" << uczenesk.nazwisko << "\t" << uczenesk.pesel
         << "\t" << uczenesk.dataurodzenia << "\t" << uczenesk.miejsce_urodzniea
         << "\t" << uczenesk.adreszamieszkania.id << "\t" << uczenesk.adreszamieszkania.ulica
         << "\t" << uczenesk.adreszamieszkania.nrdomu << "\t" << uczenesk.adreszamieszkania.nrlokalu
         << "\t" << uczenesk.adreszamieszkania.miasto << "\t" << uczenesk.adreszamieszkania.kod_pocztowy
         << "\t" << uczenesk.adreszamieszkania.panstwo << "\t" << uczenesk.klasa.id
         << "\t" << uczenesk.klasa.nazwa << "\t" << uczenesk.klasa.rok_szkolny
         << "\t" << uczenesk.klasa.semestr << "\t" << uczenesk.klasa.specjalnosc;

    cout << endl
         << "From file hdd" << endl;

    cout << odzyskanyuczenesk.imie << "\t" << odzyskanyuczenesk.nazwisko << "\t"
         << odzyskanyuczenesk.pesel << "\t" << odzyskanyuczenesk.dataurodzenia << "\t"
         << odzyskanyuczenesk.miejsce_urodzniea << "\t"
         << odzyskanyuczenesk.adreszamieszkania.id << "\t" << odzyskanyuczenesk.adreszamieszkania.ulica << "\t"
         << odzyskanyuczenesk.adreszamieszkania.nrdomu << "\t" << odzyskanyuczenesk.adreszamieszkania.nrlokalu << "\t"
         << odzyskanyuczenesk.adreszamieszkania.miasto << "\t" << odzyskanyuczenesk.adreszamieszkania.kod_pocztowy << "\t"
         << odzyskanyuczenesk.adreszamieszkania.panstwo << "\t" << odzyskanyuczenesk.klasa.id << "\t"
         << odzyskanyuczenesk.klasa.nazwa << "\t" << odzyskanyuczenesk.klasa.rok_szkolny << "\t"
         << odzyskanyuczenesk.klasa.semestr << "\t" << odzyskanyuczenesk.klasa.specjalnosc;
}

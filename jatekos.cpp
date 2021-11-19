#include <string>

using namespace std;

class Jatekos {
private:
   string nev;
   int szint;

public:
   string get_nev() {
       return nev;
   }

   int get_szint() {
       return szint;
   }

   void set_nev(string uj_nev) {
       nev = uj_nev;
   }

   void set_szint(int uj_szint) {
       szint = uj_szint;
   }
};

/*
#include <string>

using namespace std;

class Jatekos {
private:
   string nev;
   int szint;

public:
   string get_nev() {
       return nev;
   }

   int get_szint() {
       return szint;
   }

   void set_nev(string& nev) {
       this->nev = nev;
   }

   void set_szint(int szint) {
       this->szint = szint;
   }
};
*/

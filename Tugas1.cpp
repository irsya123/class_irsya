#include <iostream>
#include <string>
using namespace std;

class Spesiespiranha

{
private:

	string namapiranha;
    string jenispiranha;
    string namalatin;
    string warnasisik;
    int panjanggigi;
    int habitatpiranha;
    
public:


    Jenispiranha (string namapiranha, string jenispiranha, string namalatin, string warnasisik, 
	int panjanggigi, int habitatpiranha )

    {
    	Spesiespiranha::namapiranha = namapiranha;
        Spesiespiranha::jenispiranha = jenispiranha;
        Spesiespiranha::namalatin = namalatin;
        Spesiespiranha::warnasisik = warnasisik;
        Spesiespiranha::panjanggigi = panjanggigi;
        Spesiespiranha::habitatpiranha = habitatpiranha;
        
    }
    
    void perolehInfo (void)

    {
    	cout << "---------------------------------------------------------------- " << endl;
    	cout << "-----------------------SP-------------------------------------- " << endl;

    	
        cout << "Nama Piranha         : " << namapiranha << endl;
        cout << "Jenis Piranha             : " << jenispiranha << endl;
        cout << "Nama Latin            : " << namalatin << endl;
        cout << "Warna Sisik      	      : " << warnasisik << endl;
        cout << "Panjang Gigi     : " << panjanggigi <<"Cm"<< endl;
        cout << "Habitat Piranha      : " << habitatpiranha << endl;
        
        cout << endl;
    };
    };

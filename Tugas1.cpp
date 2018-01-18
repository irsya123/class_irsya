#include <iostream>
#include <string>
using namespace std;

class Speciespiranha

{
private:

	string namapiranha;
    string warnasisik;
    string namalatin;
    string habitatpiranha;
    int panjanggigi;
    int panjangtubuh;
    

public:


    Speciespiranha (string namapiranha, string warnasisik, string namalatin, string habitatpiranha, 
	int panjanggigi, int panjangtubuh )

    {
    	Speciespiranha::namapiranha = namapiranha;
        Speciespiranha::warnasisik = warnasisik;
        Speciespiranha::namalatin = namalatin;
        Speciespiranha::habitatpiranha = habitatpiranha;
        Speciespiranha::panjanggigi = panjanggigi;
        Speciespiranha::panjangtubuh = panjangtubuh;
        
    }


    void perolehInfo (void)

    {
    	cout << "---------------------------------------------------------------------------------" << endl;
    	cout << "--------------------------------SPECIES PIRANHA----------------------------------" << endl;

    	
        cout << "Nama Piranha          	: " << namapiranha << endl;
        cout << "Warna Sisik             : " << warnasisik << endl;
        cout << "Nama Latin            	: " << namalatin << endl;
        cout << "Habitat Piranha      	: " << habitatpiranha << endl;
        cout << "Panjang Gigi (CM)    	: " << panjanggigi << endl;
        cout << "Panjang Tubuh (CM)      : " << panjangtubuh << endl;
        
        cout << endl;
    };
    };

int main()

    { 
	Speciespiranha PiranhaA("Boy Piranha", "Rainbow", 
	"Pygopristis Denticulata","Blue Sea", 5, 20);
	
	 Speciespiranha PiranhaB("Syntax Error", "Kuning", 
	"Pygocentrus nattereri","Laut Merah", 4, 30);
	
	 Speciespiranha PiranhaC("Kardon", "Merah", 
	"Pygocentrus cariba","Laut palung maria", 10, 35);

    PiranhaA.perolehInfo();
    
    PiranhaB.perolehInfo();
    
    PiranhaC.perolehInfo();
    
    return 0;
}

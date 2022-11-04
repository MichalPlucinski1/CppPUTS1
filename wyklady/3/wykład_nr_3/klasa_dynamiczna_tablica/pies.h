#include <string>

using namespace std;

class CPies{
public:
	CPies();
	CPies(string argImie);
	~CPies();
	void BawSie(int czas);
	void Nakarm(int iloscJedzenia);
	void Spij(int czas);
	void Stan();
private:
	int energia;
	int glod;
	string imie;
};


#include <iostream>
using namespace std;


class persona
{

private:
	string nom;
	int edat;

public:


	persona (string nompersona, int edatpersona)
	{
		nom = nompersona;
		edat = edatpersona;
	}


	void mostrar_edat()
	{
		cout << "edat: "
			<< edat << endl;
			
	}

	void mostrar_nom()
	{
		cout << "nom: "
			<< nom << endl;
	}

	bool major_edat()
	{
		if (edat >= 18)
		{
			return true;
		}

		else
	    {
			return false;
		}

	}


};


int main()
{

	persona persona1("Pau", 20);

	persona1.mostrar_nom();
	persona1.mostrar_edat();

	if (persona1.major_edat())
	{
		cout << "Es major d'edat" << endl;
	}

	else
	{
		cout << "Es menor de edat" << endl;
	}

	


}
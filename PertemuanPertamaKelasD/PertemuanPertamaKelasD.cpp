#include <iostream>
using namespace std;

int main()
{//begin
	
	//numeric nAlas, ntinggi, nLuas
	//display 'Masukan Alasnya= '
	//accept nAlas
	//display 'Masukan Tingginya= '
	//accept nTinggi
	//compute nLuas = 0.5 * nAlas * nTinggi
	//display 'Luasnya adalah = ' + nLuas

	int nAlas, nTinggi, nluas;
	double nLuas;
	cout << "Masukan Alasnya= ";
	cin >> nAlas;
	cout << "Masukan Tingginya= ";
	cin >> nTinggi;
	nLuas = 0.5 * (nAlas * nTinggi);
	cout << "Luasnya adalah= " << nLuas << endl;


}//end
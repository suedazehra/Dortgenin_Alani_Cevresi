#include <iostream>
using namespace std;

int main(){
	double kisaKenar;
	double uzunKenar;
	
	cout<< "Lutfen dortgenin kisa kenarini giriniz = " ;
	cin >> kisaKenar;
	
	cout << "Lutfen dortgenin uzun kenarini giriniz =" ;
	cin >> uzunKenar;
	
	double dikdortgenCevresi = 2*(uzunKenar+kisaKenar);
	cout <<"Dortgenin Cevresi = " << dikdortgenCevresi << endl ;
	
	double dikdortgeninAlani = kisaKenar*uzunKenar ;
	cout <<"Dortgenin Alani =" << dikdortgeninAlani ;
	
	return 0 ;
	

	
	
}

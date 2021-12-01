#include <iostream>
#include <cmath>
using namespace std;

int main(){
	system ("color 0B");
	
	string Nama;
	string GolDarah;
	float BeratBadan;
	float TinggiBadan;
	
	getline (cin, Nama);
	getline (cin, GolDarah);
	cin>> BeratBadan;
	cin>> TinggiBadan;

	cout<<endl;

	cout<< "Nama 			: " << Nama <<endl;
	cout<< "Gol Darah		: " << GolDarah <<endl;
	cout<< "Berat Badan 		: " << BeratBadan <<endl;
	cout<< "Tinggi Badan 		: " << TinggiBadan <<endl;
	cout<< "Berat Badan Ideal	: " << TinggiBadan-100-((TinggiBadan-100)*10/100) <<endl;
	
	return 0;
}

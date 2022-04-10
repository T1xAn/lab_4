// Lab4.cpp: определяет точку входа для консольного приложения.
//

//#include "stdafx.h"
/*#include <set>
#include <iostream>
using namespace std;

void main()
{
	set <int> SetOne;
	cout << "Enter the number of elements: ";
	int n, ni;
	cin >> n;
	cout << endl;

	for(int i = 0; i < n; i++){
		int num;
		cin >> num;
		SetOne.insert(num);
	}
	set <int> :: iterator U = SetOne.begin();
	for(int i = 0; i < SetOne.size(); i++){ cout << *U << " "; U++;}
	cout << "Enter num for La'BAGET: " ;
	cin >> n;

	if(SetOne.find(n) != SetOne.end()){
	SetOne.erase(n);
	cout << endl << " La'BAGET was deleteeeeeeeeeeeeeeeeed";
	set <int> :: iterator U = SetOne.begin();
	for(int i = 0; i < SetOne.size(); i++){ cout << *U << " "; U++;}
	}
	else{
	cout << endl << "La'BAGET does not exist";
	}

	system("pause");

	return;
}*/
#include "Header.h"
int main() {
	setlocale(LC_ALL, "rus");

	Set<int>TSet(1);
	int delNum;
	TSet.PrintSet();
	system("pause");
	cout << "Enter La'BAGET:" << endl;
	cin >> delNum;
	TSet- delNum;
	TSet.PrintSet();
	Set<int>PODSet(1);
	if (TSet>PODSet)
	cout << endl << "YES";
	else cout << endl << "NO";
	if (TSet != PODSet)
		cout << "DICK";
	else cout << "COCK";
	/*std::cout<"Пересечение множеств:"<<std::endl;
	Set<int> TSetMul1(1);
	Set<int> TSetMul2(1);
		TSetMul1 = TSetMul1 * TSetMul2;

	std::cout<< std::endl;
	std::cout<<"Сравнениемножеств:"<< std::endl;
	Set<int> TSetComp1(1);
	Set<int> TSetComp2(1);
	std::cout<< (TSetComp1 < TSetComp2 ?  "Первое множество меньше второго" :"Второе множество меньше первого") <<std::endl;*/
	system("pause");
	return 0;
}


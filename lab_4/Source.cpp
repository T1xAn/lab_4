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
//int main() {
//	setlocale(LC_ALL, "rus");
//	int num;
//	Set<int>TSet(1);
//	int delNum;
//	TSet.PrintSet();
//	system("pause");
//	cout << "Enter element to delete:" << endl;
//	cin >> delNum;
//	TSet - delNum;
//	TSet.PrintSet();
//	Set<int>PODSet(1);
//	cout << endl << "Set 2 is multiplicity for Set 1: ";
//	if (TSet>PODSet)
//	cout  << "YES" << endl;
//	else cout << "NO" << endl;
//	cout << "Set 1 and Set 2 are not equal: ";
//	if (TSet != PODSet)
//		cout << "YES";
//	else cout << "NO";
//	cout << endl;
//	cin >> num;
//	TSet + num;
//	cout << endl;
//	TSet.PrintSet();
//	system("pause");
//	return 0;
//}

int main() {

	try {
		Translate trans;
		trans.GetNum(); //считываем число для перевода
		trans.TranslateToEight();
	}
	catch (Translate::TranslateEx) //ловим исключение
	{
		cout << "\nВведено некорректное значение!";
	}
	return 0;
}



#include "Header.h"
int main() {
	try{
		setlocale(LC_ALL, "rus");
		int num;
		Set<int>TSet(1);
		int delNum;
		TSet.PrintSet();
		system("pause");
		cout << "Enter element to delete:" << endl;
		cin >> delNum;
		Set<int>PODSet;
		PODSet - delNum;
		TSet.PrintSet();
		
		cout << endl << "Set 2 is multiplicity for Set 1: ";
		if (TSet > PODSet)
			cout << "YES" << endl;
		else cout << "NO" << endl;
		cout << "Set 1 and Set 2 are not equal: ";
		if (TSet != PODSet)
			cout << "YES";
		else cout << "NO";
		cout << endl;
		cin >> num;
		TSet + num;
		cout << endl;
		TSet.PrintSet();
		system("pause");
	}
	catch (Set<int>::NORMALNO_POIMAL) {
		cout << "ZDOROVENNI ILI MALENKI";
	}
	catch (Set<int>::bI) {
		cout << "NETY SETA";
	}
	catch (Set<int>::YAZs) {
		cout << "NO YAAAAZZZZ";
	}
	return 0;
}

//int main() {
//
//	try {
//		Translate trans;
//		trans.GetNum(); //ñ÷èòûâàåì ÷èñëî äëÿ ïåðåâîäà
//		trans.TranslateToEight();
//	}
//	catch (Translate::TranslateEx) //ëîâèì èñêëþ÷åíèå
//	{
//		cout << "\nÂâåäåíî íåêîððåêòíîå çíà÷åíèå!";
//	}
//	return 0;
//}



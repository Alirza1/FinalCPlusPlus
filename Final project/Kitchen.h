#include <iostream>
#include <fstream>
using namespace std;
class Kitchen {
	Stock stock;
public:
	Kitchen() {}
	string showOrdersFromTableNo(const string& tableNumber) {
		string defaultWord = "ordersFromTableNo";
		string txt = ".txt";
		string filename = defaultWord + tableNumber + txt;
		ifstream fin(filename, ios::in);
		string result = "";
		if (fin.is_open()) {
			while (!fin.eof())
			{
				string value;
				fin >> value;
				result.append(value + " ");
			}
		}
		else {
			throw string("This file : " + filename + " does not exists");
		}
		return result;
	}
	void showAllTables() {
		cout << showOrdersFromTableNo("1") << endl;
		cout << showOrdersFromTableNo("2") << endl;
		cout << showOrdersFromTableNo("3") << endl;
		cout << showOrdersFromTableNo("4") << endl;
		cout << showOrdersFromTableNo("5") << endl;
		cout << showOrdersFromTableNo("6") << endl;
		cout << showOrdersFromTableNo("7") << endl;
		cout << showOrdersFromTableNo("8") << endl;
		cout << showOrdersFromTableNo("9") << endl;
		cout << showOrdersFromTableNo("10") << endl;
	}
	void showStock() {
		stock.showStock();
	}
	void showAllMeals() {
		cout << capitalSalad->getName() << endl;
		cout << chickenSalad->getName() << endl;
		cout << capitalSalad->getName() << endl;
		cout << kingSalad->getName() << endl;
		cout << pomegranateSauce->getName() << endl;
		cout << ketchupSauce->getName() << endl;
		cout << mayonnaiseSauce->getName() << endl;
		cout << kingPilaf->getName() << endl;
		cout << sabziPilaf->getName() << endl;
		cout << pumpkinPilaf->getName() << endl;
		cout << sweetPilaf->getName() << endl;
		cout << dushbara->getName() << endl;
		cout << xangal->getName() << endl;
		cout << gurza->getName() << endl;
		cout << yarpaqDolmasi->getName() << endl;
		cout << uchBaciDolmasi->getName() << endl;
		cout << langet->getName() << endl;
		cout << broiledLamb->getName() << endl;
		cout << sturgeonKebab->getName() << endl;
		cout << belugaKebab->getName() << endl;
		cout << salmonKebab->getName() << endl;
		cout << pikeperchKebab->getName() << endl;
		cout << luleKebab->getName() << endl;
		cout << tikeKebab->getName() << endl;
		cout << antrikot->getName() << endl;
		cout << blackCaviar->getName() << endl;
		cout << redCaviar->getName() << endl;
		cout << meatQutab->getName() << endl;
		cout << vealTongue->getName() << endl;
		cout << greenQutab->getName() << endl;
		cout << pumpkinQutab->getName() << endl;
		cout << cheeseQutab->getName() << endl;
		cout << blinchik->getName() << endl;
		cout << pawnWithTartarSauce->getName() << endl;
		cout << pawnWithChilliSauce->getName() << endl;
		cout << vegetableAssort->getName() << endl;
		cout << merci->getName() << endl;
		cout << noodle->getName() << endl;
		cout << dovga->getName() << endl;
		cout << chickenSoup->getName() << endl;
		cout << tiramisu->getName() << endl;
		cout << cheeseCake->getName() << endl;
		cout << hotChocolateCake->getName() << endl;
		cout << fanta05l->getName() << endl;
		cout << fanta1l->getName() << endl;
		cout << cocaCola05l->getName() << endl;
		cout << cocaCola1l->getName() << endl;
		cout << sprite05l->getName() << endl;
		cout << sprite1l->getName() << endl;
		cout << orangeJuice->getName() << endl;
		cout << mixedJuice->getName() << endl;
	}
	void kitchenFunc() {
		int opt;
		cout << "Return previous menu: 0" << endl;
		cout << "Show All Orders: 1" << endl;
		cout << "Show Stock: 2" << endl;
		cout << "Show All Meals: 3" << endl;
		cout << "Your Choice: "; cin >> opt;
		if (opt == 0) {
			startProgramWithTableNo();
		}
		if (opt == 1) {
			showAllTables();
		}
		if (opt == 2) {
			showStock();
	}
		if (opt == 3) {
			showAllMeals();
		}
	}
};

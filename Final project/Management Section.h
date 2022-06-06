#include "ExceptionClass.h"
#include <Windows.h>
#include <conio.h>
#include "Meal Functions.h"
#include "Kitchen.h"
using namespace std;
void selectionMenu();
void startProgramWithTableNo();
class Admin {
	const string username1 = "admin";
	const string password1 = "admin";
	string username;
	string password;
	int adminMenuOpt;
	static int tryCount;
public:
	Admin() {}

	string GetUsername()const {
		return username1;
	}

	string GetPassword()const {
		return password1;
	}

	void admin() {
		system("cls");
		cout << "Loading...";
		Sleep(2000);
		system("cls");
		cout << "Username:";
		cin >> username;
		if (username != username1) {
			tryCount++;
			if (tryCount == 5) {
				writeToCriticalNotificationLog("Error 102", __DATE__, __TIME__);
				throw HackAttempException("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
			}
		}
		if (username != username1) {
			system("cls");
			cout << "INVALID USERNAME. Press any key to continue\n";
			_getch();
			system("cls");
			return startProgramWithTableNo();
		}
		if (username == username1) {
			cout << "Password:"; cin >> password;
			if (password == password1) {
				system("cls");
				cout << "Welcome " << GetUsername() << endl;
				cout << "Stock:1" << endl;
				cout << "Kitchen:2" << endl;
				cin >> adminMenuOpt;
				if (adminMenuOpt == 1) {
					system("cls");
					Stock stock;
					stock.stock();
				}
				if (adminMenuOpt == 2) {
					system("cls");

					Kitchen kitchen;
					kitchen.kitchenFunc();
				}
				if (adminMenuOpt > 2 || adminMenuOpt < 0) {
					writeErrorToFile("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
					throw InvalidArgumentException("Error 102", __FILE__, __LINE__, __DATE__, __TIME__);
				}
			}
		}

	}
};
Stock stock;
int Admin::tryCount = 0;
class Restaurant {
	string name;
	string address;
	string city;
	double budget;
	Admin admin;
public:
	Restaurant() :name(""), address(""), city(""), budget(0) {}
	Restaurant(const string& name, const string& address, const string& city) {
		setName(name);
		setAddress(address);
		setCity(city);
	}
	void setName(const string& name) {
		if (!name.empty()) {
			this->name = name;
		}
	}
	string getName() {
		return name;
	}
	void setAddress(const string& address) {
		if (!address.empty()) {
			this->address = address;
		}
	}
	string getAddress() {
		return address;
	}
	void setCity(const string& city) {
		if (!city.empty()) {
			this->city = city;
		}
	}
	string getCity() {
		return city;
	}
	void printInfoAboutRestaurant() {
		cout << "Restaurant Name:" << getName() << endl;
		cout << "Restaurant Address:" << getAddress() << endl;
		cout << "City:" << getCity() << endl;
		cout << "Online Service:" << "Available" << endl;
		cout << "Delivery Service:" << "6/23 Available" << endl;
	}
};
Restaurant restaurant("Rastaurant STEP MMC", "Koroghlu Rahimov 70", "Baku");
void startProgramWithTableNo() {
	Admin adminObj;
	string tableNo;
	cout << "\t\t\t\t" << endl;
	cout << "\t\t\t\t" << "      Welcome to " << restaurant.getName() << endl;
	cout << "\n\t\t\t\t\t     Table Number: ";
	cin >> tableNo;
	static Table tableNumber(tableNo);
	if (tableNo == "10" || tableNo == "9" || tableNo == "8" || tableNo == "7" || tableNo == "6" || tableNo == "5" || tableNo == "4" || tableNo == "3" || tableNo == "2" || tableNo == "1" && tableNo != "0") {
		writeToProgramLog("Customer logged in", __DATE__, __TIME__);
		selectionMenu();
	}
	if (tableNo != "10" && tableNo != "9" && tableNo != "8" && tableNo != "7" && tableNo != "6" && tableNo != "5" && tableNo != "4" && tableNo != "3" && tableNo != "2" && tableNo != "1" && tableNo != "0") {
		writeErrorToFile("Error 100", __FILE__, __LINE__, __DATE__, __TIME__);
		throw InvalidArgumentException("Error 100", __FILE__, __LINE__, __DATE__, __TIME__);
	}
	if (tableNo == "0") {
		writeToProgramLog("Admin logged in", __DATE__, __TIME__);
		adminObj.admin();
	}

}
class StartSystem {
public:
	void startSystem() {
		try {
			startProgramWithTableNo();
		}
		catch (const Exception& ex) {
			ex.printMessage();
		}
	}
};
void client() {
	system("cls");
	cout << "\t\t\t\t\t" << "       1.Starters        " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "        2.Salads         " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "        3.Rices         " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "      4.Dough Meals      " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "      5.Meat Meals       " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "        6.Kebabs         " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "        7.Soups          " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "        8.Sauces         " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "       9.Desserts        " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "       10.Drinks         " << endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t"<< endl;
	cout << "\t\t\t\t\t" << "     Previous Menu:0     " << endl;
	cout << "\t\t\t\t\t"<< endl;

	int opt;
	cout << "\n\t\t\t\t\t      Your Choice: "; 
	cin >> opt;
	switch (opt) {
	case 0: {
		system("cls");
		selectionMenu();
		break;
	}
	case 1: {
		startersFunc();
		break;
	}
	case 2: {
		saladFunc();
		break;
	}
	case 3: {
		pilafFunc();
		break;
	}
	case 4: {
		doughMealsFunc();
		break;
	}
	case 5: {
		meatMealsFunc();
		break;
	}
	case 6: {
		kebabsFunc();
		break;
	}
	case 7: {
		soupFunc();
		break;
	}
	case 8: {
		sauceFunc();
		break;
	}
	case 9: {
		dessertsFunc();
		break;
	}
	case 10: {
		drinksFunc();
		break;
	}
		   break;
	}
	if (opt > 10 || opt <= 0) {
		writeErrorToFile("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
		throw InvalidArgumentException("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
	}
}
void selectionMenu() {
	cout << "\t\t\t\t\t"  << "       Main Menu         " << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << "       Meal List:1       "  << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << "      Search Meal:2      " << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << " Info About Restaurant:3 " << endl;
	cout << "\t\t\t\t\t" << endl;
	int option;
	cout << "\n\t\t\t\t\t      Your Choice:"; cin >> option;
	if (option == 0) {
		Admin admin;
		admin.admin();
	}
	if (option == 1) {
		client();
	}
	if (option == 2) {
		searchMeal();
	}
	if (option == 3) {
		restaurant.printInfoAboutRestaurant();
		Sleep(5000);
		system("cls");
		selectionMenu();
	}

	else {
		throw InvalidArgumentException("Error 103", __FILE__, __LINE__, __DATE__, __TIME__);
		writeToCriticalNotificationLog("Wrong Menu Selected", __DATE__, __TIME__);
	}
}

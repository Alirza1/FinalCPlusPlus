#include "Stock.h"
#include <fstream>
#include "Table.h"
#include <string>
void selectionMenu();
void deleteIngredients() {
	delete beetroot;
	delete carrot;
	delete cheese;
	delete chestnut;
	delete chickenFillet;
	delete chilli;
	delete cream;
	delete cucumber;
	delete dill;
	delete driedFruit;
	delete egg;
	delete eggplant;
	delete	flour;
	delete	garlic;
	delete	greens;
	delete ketchup;
	delete lavash;
	delete lentil;
	delete milk;
	delete meat;
	delete mint;
	delete mustard;
	delete oil;
	delete olive;
	delete onion;
	delete parsley;
	delete pea;
	delete pepper;
	delete pomegranate;
	delete potato;
	delete pumpkin;
	delete raisin;
	delete rice;
	delete yougurt;
	delete sauce;
	delete tomato;
	delete walnut;
}
void Ingredientss::printAvaiableIngredientsList();
Meal meal;
void client();
void startersFunc() {
	system("cls");
	Starters::BlackCaviar blackCaviar("Black Caviar");
	Starters::RedCaviar redCaviar("Red Caviar");
	Starters::MeatQutab meatQutab("Meat Qutab");
	Starters::VealTongue vealTongue("Veal Tongue");
	Starters::GreenQutab greenQutab("Green Qutab");
	Starters::PumpkinQutab pumpkinQutab("Pumpkin Qutab");
	Starters::CheeseQutab cheeseQutab("Cheese Qutab");
	Starters::Blinchik blinchik("Blinchik");
	Starters::PawnWithChilliSauce pawn1("Pawn with Chilli Sauce");
	Starters::PawnWithTartarSauce pawn2("Pawn with Tartar Sauce");
	Starters::VegetableAssort assort2("Pawn with Tartar Sauce");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "        Starters         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cout << "1."; blackCaviar.printMealandPrice();
	cout << "2."; redCaviar.printMealandPrice();
	cout << "3."; meatQutab.printMealandPrice();
	cout << "4."; greenQutab.printMealandPrice();
	cout << "5."; cheeseQutab.printMealandPrice();
	cout << "6."; pumpkinQutab.printMealandPrice();
	cout << "7."; blinchik.printMealandPrice();
	cout << "8."; pawn1.printMealandPrice();
	cout << "9."; pawn2.printMealandPrice();
	cout << "10."; vealTongue.printMealandPrice();
	cout << "11."; assort2.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start blackCaviar.png");
		meal.unableToAddIngredient(blackCaviar);
		break;}
	case 2: {
		system("start redCaviar.png");
		meal.unableToAddIngredient(redCaviar);
		break;}
	case 3: {
		system("start meatQutab.png");
		meal.unableToAddIngredient(meatQutab);
		break;}
	case 4: {
		system("start greenQutab.png");
		meal.unableToAddIngredient(greenQutab);
		break;
	}
	case 5: {		
		system("start cheeseQutab.png");
		meal.unableToAddIngredient(cheeseQutab);
		break;
	}
	case 6: {
		system("start pumpkinQutab.png");
		meal.unableToAddIngredient(pumpkinQutab);
		break;
	}
	case 7: {
		system("start blinchik.png");
		meal.unableToAddIngredient(blinchik);
		break;
	}
	case 8: {
		system("start pawn1.png");
		meal.unableToAddIngredient(pawn1);
		break;
	}
	case 9: {		
		system("start pawn2.png");
		meal.unableToAddIngredient(pawn2);
		break;
	}
	case 10:{
		system("start vealTongue.png");
		meal.unableToAddIngredient(vealTongue);
		break;
	}
	case 11:{
		system("start vegetableAssort.png");
		meal.unableToAddIngredient(assort2);
		break;
	}
    break;
	}
}
void saladFunc() {
	system("cls");
	Salads::CapitalSalad capitalSalad("Capital Salad");
	Salads::ChickenSalad chickenSalad("Chicken Salad");
	Salads::KingSalad kingSalad("King Salad");
	Salads::MimosaSalad mimosaSalad("Mimosa Salad");
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << "         Salads          " << char(179) << endl;
	cout << "\t\t\t\t\t" << endl;
	cout << "1."; capitalSalad.printMealandPrice();
	cout << "2."; chickenSalad.printMealandPrice();
	cout << "3."; kingSalad.printMealandPrice();
	cout << "4."; mimosaSalad.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu: 0" << endl;
	cout << "\t\t\t\tEnter id to get more information about meal" << endl;
	cout << "\t\t\t\t\t    Your Choice: "; 
	cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start capitalSalad.png");
		meal.addingIngredientToMeal(capitalSalad);
			break;
	}
	case 2: {
		system("start chickenSalad.png");
		meal.addingIngredientToMeal(chickenSalad);
			break;
	}
	case 3: {
		system("start kingSalad.png");
		meal.addingIngredientToMeal(kingSalad);
			break;
	}
	case 4: {
		system("start mimosaSalad.png");
		meal.addingIngredientToMeal(mimosaSalad);
	break;
	}
	break;
	}

}
void pilafFunc() {
	system("cls");
	cout << "\t\t\t\t\t" << endl;
	cout << "\t\t\t\t\t" << "         Rices          " << endl;
	cout << "\t\t\t\t\t" << endl;
	Pilafs::KingPilaf kingPilaf("King Rice");
	Pilafs::PumpkinPilaf pumpkinPilaf("Pumpkin Rice");
	Pilafs::SabziPilaf sabziPilaf("Sabzi Rice");
	Pilafs::SweetPilaf sweetPilaf("Sweet Rice");
	cout << "1."; kingPilaf.printMealandPrice();
	cout << "2."; sabziPilaf.printMealandPrice();
	cout << "3."; pumpkinPilaf.printMealandPrice();
	cout << "4."; sweetPilaf.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu: 0" << endl;
	cout << "\t\t\t\tEnter id to get more information about meal" << endl;
	cout << "\t\t\t\t\t    Your Choice:";
	cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start kingPilaf.png");
		meal.addingIngredientToMeal(kingPilaf);
		break;
	}
	case 2: {
		system("start pumpkinPilaf.png");
		meal.addingIngredientToMeal(pumpkinPilaf);
		break;
	}
	case 3: {
		system("start sabziPilaf.png");
		meal.addingIngredientToMeal(sabziPilaf);
		break;
	}
	case 4: {
		system("start sweetPilaf.png");
		meal.addingIngredientToMeal(sweetPilaf);
		  break;
	}
		  break;
	}
}
void doughMealsFunc() {
	system("cls");
	DoughMeals::Dushbara dushbara("Dushbara");
	DoughMeals::Gurza gurza("Gurza");
	DoughMeals::Xangal xangal("Xangal");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       Dough Meals       " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; dushbara.printMealandPrice();
	std::cout << "2."; gurza.printMealandPrice();
	std::cout << "3."; xangal.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start dushbara.png");
		meal.addingIngredientToMeal(dushbara);
		break;
	}
	case 2: {
		system("start gurza.png");
		meal.addingIngredientToMeal(gurza);
		break;
	}
	case 3: {
		system("start xangal.png");
		meal.addingIngredientToMeal(xangal);
		break;
	}
		  break;
	}

}
void meatMealsFunc() {
	system("cls");
	MeatMeals::BroiledLamb broiledLamb("Broiled Lamb");
	MeatMeals::Langet langet("Langet");
	MeatMeals::UchBaciDolmasi uchBaciDolmasi("Uch Baci Dolmasi");
	MeatMeals::YarpaqDolmasi yarpaqDolmasi("Yarpaq Dolmasi");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       Meat Meals        " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; broiledLamb.printMealandPrice();
	std::cout << "2."; uchBaciDolmasi.printMealandPrice();
	std::cout << "3."; langet.printMealandPrice();
	std::cout << "4."; yarpaqDolmasi.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start broiledLamb.png");
		meal.addingIngredientToMeal(broiledLamb);
		break;
	}
	case 2: {
		system("start uchBaciDolmasi.png");
		meal.addingIngredientToMeal(uchBaciDolmasi);
		break;
	}
	case 3: {
		system("start langet.png");
		meal.addingIngredientToMeal(langet);
		break;
	}
	case 4: {
		system("start yarpaqDolmasi.png");
		meal.addingIngredientToMeal(yarpaqDolmasi);
		break;
	}
		  break;
	}
}
void kebabsFunc() {
	system("cls");
	Kebabs::Antrikot antrikot("Antrikot");
	Kebabs::BelugaKebab belugaKebab("Beluga Kebab");
	Kebabs::LuleKebabMutton luleKebab("Lule Kebab");
	Kebabs::PikeperchKebab pikeperchKebab("Pike Perch Kebab");
	Kebabs::SalmonKebab salmonKebab("Salmon Kebab");
	Kebabs::SturgeonKebab sturgeonKebab("Sturgeon Kebab");
	Kebabs::TikeKebab tikeKebab("Tike Kebab");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "         Kebabs          " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; antrikot.printMealandPrice();
	std::cout << "2."; belugaKebab.printMealandPrice();
	std::cout << "3."; salmonKebab.printMealandPrice();
	std::cout << "4."; pikeperchKebab.printMealandPrice();
	std::cout << "5."; luleKebab.printMealandPrice();
	std::cout << "6."; tikeKebab.printMealandPrice();
	std::cout << "7."; sturgeonKebab.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start antrikotKebab.png");
		meal.addingIngredientToMeal(antrikot);
			break;
	}
	case 2: {
		system("start belugaKebab.png");
		meal.addingIngredientToMeal(belugaKebab);
		break;
	}
	case 3: {
		system("start salmonKebab.png");
		meal.addingIngredientToMeal(salmonKebab);
		break;
	}
	case 4: {
		system("start pikeperchKebab.png");
		meal.addingIngredientToMeal(pikeperchKebab);
		break;
	}
	case 5: {
		system("start luleKebab.png");
		meal.addingIngredientToMeal(luleKebab);
		break;
	}

	case 6: {
		system("start tikeKebab.png");
		meal.addingIngredientToMeal(tikeKebab);
		break;
	}
	case 7: {
		system("start sturgeonKebab.png");
		meal.addingIngredientToMeal(sturgeonKebab);
		break;
	}
		  break;
	}
}
void soupFunc() {
	system("cls");
	Soups::ChickenSoup chickenSoup("Chicken Soup");
	Soups::Dovga dovga("Dovga");
	Soups::Merci merci("Merci");
	Soups::MushroomSoup mushroomSoup("Mushroom Soup");
	Soups::Noodle noodle("Noodle");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "         Soups           " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; merci.printMealandPrice();
	std::cout << "2."; mushroomSoup.printMealandPrice();
	std::cout << "3."; noodle.printMealandPrice();
	std::cout << "4."; dovga.printMealandPrice();
	std::cout << "5."; chickenSoup.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start merci.png");
		meal.addingIngredientToMeal(merci);
		break;
	}
	case 2: {
		system("start mushroomSoup.png");
		meal.addingIngredientToMeal(mushroomSoup);
		break;
	}
	case 3: {
		system("start noodle.png");
		meal.addingIngredientToMeal(noodle);
		break;
	}
	case 4: {
		system("start dovga.png");
		meal.addingIngredientToMeal(dovga);
		break;
	}
	case 5: {
		system("start chickenSoup.png");
		meal.addingIngredientToMeal(chickenSoup);
		break;
	}
		 break;
	}
}
void dessertsFunc() {
	system("cls");
	Desserts::CheeseCake cheeseCake("Cheese Cake");
	Desserts::HotChocolateCake hotChocolateCake("Hot Chocolate Cake");
	Desserts::Tiramisu tiramisu("Tiramisu");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "         Sauces          " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; tiramisu.printMealandPrice();
	std::cout << "2."; cheeseCake.printMealandPrice();
	std::cout << "3."; hotChocolateCake.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1:{
		system("start tiramisu.png");
		meal.unableToAddIngredient(tiramisu);
		break;
	}
	case 2:{
		system("start cheeseCake.png");
		meal.unableToAddIngredient(cheeseCake);
		break;
	}
	case 3: {
		system("start hotChocolateCake.png");
		meal.unableToAddIngredient(hotChocolateCake);
		break;
	}
	 break;
	}

}
void drinksFunc() {
	system("cls");
	Drinks::AppleJuice1l appleJuice1l("Apple Juice 1l");
	Drinks::CocaCola05l cocaCola05l("Coca Cola 0.5l");
	Drinks::CocaCola1l cocaCola1l("Coca Cola 1l");
	Drinks::Fanta05l fanta05l("Fanta 0.5l");
	Drinks::Fanta1l fanta1l("Fanta 1l");
	Drinks::MixedFruit1l mixedFruit1l("Mixed Fruit Juice 1l");
	Drinks::OrangeJuice1l orangeJuice1l("Orange Juice 1l");
	Drinks::Sprite05l sprite05l("Sprite 0.5l");
	Drinks::Sprite1l sprite1l("Sprite 1l");
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       10.Drinks         " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	std::cout << "1."; fanta05l.printMealandPrice();
	std::cout << "2."; fanta1l.printMealandPrice();
	std::cout << "3."; cocaCola05l.printMealandPrice();
	std::cout << "4."; cocaCola1l.printMealandPrice();
	std::cout << "5."; sprite05l.printMealandPrice();
	std::cout << "6."; sprite1l.printMealandPrice();
	std::cout << "7."; orangeJuice1l.printMealandPrice();
	std::cout << "8."; appleJuice1l.printMealandPrice();
	std::cout << "9."; mixedFruit1l.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}
	switch (opt2) {
	case 1: {
		system("start fanta0.5l.png");
		meal.unableToAddIngredient(fanta05l);
		break;}
	case 2: {
		system("start fanta1l.png");
    		meal.unableToAddIngredient(fanta1l);
    break;
    	}
    	case 3: {
		system("start cocaCola0.5l.png");
    		meal.unableToAddIngredient(cocaCola05l);
    break;
    	}
    	case 4: {
			system("start cocaCola1l.png");
    		meal.unableToAddIngredient(cocaCola1l);
    break;
    	}
    	case 5: {
		system("start sprite0.5l.png");
    		meal.unableToAddIngredient(sprite05l);
    break;
    	}
    	case 6: {
		system("start sprite1l.png");
    		meal.unableToAddIngredient(sprite1l);
			
    break;
    	}
    	case 7: {
		system("start orangeJuice1l.png");
    		meal.unableToAddIngredient(orangeJuice1l);
			
    break;
	}
	case 8: {
		system("start appleJuice1l.png");
		meal.unableToAddIngredient(appleJuice1l);
    break;
	}
	case 9: {
		system("start mixedFruit1l.png");
		meal.unableToAddIngredient(mixedFruit1l);
		break;
	}
		  break;
	}
}
void sauceFunc() {
	system("cls");
	Sauces::KetchupSauce ketchupSauce("Ketchup");
	Sauces::MayonnaiseSauce mayonnaiseSauce("Mayonnaise");
	Sauces::PomegranateSauce pomegranateSauce("Pomegranate");
	std::cout << "1."; pomegranateSauce.printMealandPrice();
	std::cout << "2."; ketchupSauce.printMealandPrice();
	std::cout << "3."; mayonnaiseSauce.printMealandPrice();
	int opt2;
	cout << "\t\t\t\t\t\Return to previous menu:0\n";
	cout << "\t\t\t\tEnter id to get more information about meal\n";
	cout << "\t\t\t\t\t    Your Choice:"; cin >> opt2;
	if (opt2 == 0) {
		client();
	}	switch (opt2) {
	case 1: {
		system("start pomegranateSauce.png");
		meal.unableToAddIngredient(pomegranateSauce);
		break;
	}
	case 2: {
		system("start ketchupSauce.png");
		meal.unableToAddIngredient(ketchupSauce);
		break;
	}
	case 3: {
		system("start mayonnaiseSauce.png");
		meal.unableToAddIngredient(mayonnaiseSauce);
		break;
	}
		  break;
	}
}
	Meal* capitalSalad = new Salads::CapitalSalad("Capital Salad");
	Meal* chickenSalad = new Salads::ChickenSalad("Chicken Salad");
	Meal* kingSalad = new Salads::KingSalad("King Salad");
	Meal* mimosaSalad = new Salads::MimosaSalad("Mimosa Salad");
	Meal* pomegranateSauce = new Sauces::PomegranateSauce("Pomegranate Sauce");
	Meal* ketchupSauce = new Sauces::KetchupSauce("Ketchup Sauce");
	Meal* mayonnaiseSauce = new Sauces::MayonnaiseSauce("Mayonnaise Sauce");
	Meal* kingPilaf = new Pilafs::KingPilaf("King Pilaf");
	Meal* sabziPilaf = new Pilafs::SabziPilaf("Sabzi Pilaf");
	Meal* pumpkinPilaf = new Pilafs::PumpkinPilaf("Pumpkin Pilaf");
	Meal* sweetPilaf = new Pilafs::SweetPilaf("Sweet Pilaf");
	Meal* dushbara = new DoughMeals::Dushbara("Dushbara");
	Meal* xangal = new DoughMeals::Xangal("Xangal");
	Meal* gurza = new DoughMeals::Gurza("Gurza");
	Meal* yarpaqDolmasi = new MeatMeals::YarpaqDolmasi("Yarpaq Dolmasi");
	Meal* uchBaciDolmasi = new MeatMeals::UchBaciDolmasi("Uch Baci Dolmasi");
	Meal* langet = new MeatMeals::Langet("Langet");
	Meal* broiledLamb = new MeatMeals::BroiledLamb("Broiled Lamb");
	Meal* sturgeonKebab = new Kebabs::SturgeonKebab("Sturgeon Kebab");
	Meal* belugaKebab = new Kebabs::BelugaKebab("Beluga Kebab");
	Meal* salmonKebab = new Kebabs::SalmonKebab("Salmon Kebab");
	Meal* pikeperchKebab = new Kebabs::PikeperchKebab("PikeperchKebab");
	Meal* luleKebab = new Kebabs::LuleKebabMutton("Lule Kebab with Mutton");
	Meal* tikeKebab = new Kebabs::TikeKebab("Tike Kebab");
	Meal* antrikot = new Kebabs::Antrikot("Antrikot");
	Meal* blackCaviar = new Starters::BlackCaviar("Black Caviar");
	Meal* redCaviar = new Starters::RedCaviar("Red Caviar");
	Meal* meatQutab = new Starters::MeatQutab("Meat Qutab");
	Meal* vealTongue = new Starters::VealTongue("Veal Tongue");
	Meal* greenQutab = new Starters::GreenQutab("Green Qutab");
	Meal* pumpkinQutab = new Starters::PumpkinQutab("Pumpkin Qutab");
	Meal* cheeseQutab = new Starters::CheeseQutab("Cheese Qutab");
	Meal* blinchik = new Starters::Blinchik("Blinchik");
	Meal* pawnWithTartarSauce = new Starters::PawnWithTartarSauce("Pawn with Tartar Sauce");
	Meal* pawnWithChilliSauce = new Starters::PawnWithChilliSauce("Pawn with Chilli Sauce");
	Meal* vegetableAssort = new Starters::VegetableAssort("Vegetable Assort");
	Meal* mushroomSoup = new Soups::MushroomSoup("Mushroom Soup");
	Meal* merci = new Soups::Merci("Merci");
	Meal* noodle = new Soups::Noodle("Noodle");
	Meal* dovga = new Soups::Dovga("Dovga");
	Meal* chickenSoup = new Soups::ChickenSoup("Chicken Soup");
	Meal* tiramisu = new Desserts::Tiramisu("Tiramisu");
	Meal* cheeseCake = new Desserts::CheeseCake("Cheese Cake");
	Meal* hotChocolateCake = new Desserts::HotChocolateCake("Hot Chocolate Cake");
	Meal* fanta05l = new Drinks::Fanta05l("Fanta 0.5l");
	Meal* fanta1l = new Drinks::Fanta1l("Fanta 1l");
	Meal* cocaCola05l = new Drinks::CocaCola05l("Coca Cola 0.5l");
	Meal* cocaCola1l = new Drinks::CocaCola1l("Coca Cola 1l");
	Meal* sprite05l = new Drinks::Sprite05l("Sprite 0.5l");
	Meal* sprite1l = new Drinks::Sprite1l("Sprite 1l");
	Meal* orangeJuice = new Drinks::OrangeJuice1l("Orange Juice 1l");
	Meal* mixedJuice = new Drinks::MixedFruit1l("Mixed Fruit Juice 1l");
	void startProgramWithTableNo();
    void searchMeal() {
		system("cls");
		string searchWord;
	int orderOrNot;
	cout << "\t\t\t\t\t" << char(218); for (int i = 0; i < 25; i++)cout << char(196); cout << char(191) << endl;
	cout << "\t\t\t\t\t" << char(179) << "       Meal Search       " << char(179) << endl;
	cout << "\t\t\t\t\t" << char(192); for (int i = 0; i < 25; i++)cout << char(196); cout << char(217) << endl;
	cin.ignore();
	cout << endl;
	cout << "Search Meal:"; getline(cin, searchWord);

	Meal** meals = new Meal * [51]{capitalSalad,chickenSalad,kingSalad,mimosaSalad,pomegranateSauce,ketchupSauce,mayonnaiseSauce,kingPilaf,sabziPilaf,pumpkinPilaf,sweetPilaf,dushbara,xangal,gurza,yarpaqDolmasi,uchBaciDolmasi,langet,broiledLamb,sturgeonKebab,belugaKebab,salmonKebab,pikeperchKebab,tikeKebab,antrikot,blackCaviar,redCaviar,meatQutab,vealTongue,greenQutab,pumpkinQutab,cheeseQutab,blinchik,pawnWithTartarSauce,pawnWithChilliSauce,vegetableAssort,merci,mushroomSoup,noodle,dovga,chickenSoup,tiramisu,cheeseCake,hotChocolateCake,fanta05l,fanta1l,cocaCola05l,cocaCola1l,sprite05l,sprite1l,orangeJuice,mixedJuice
	};
	for (size_t i = 0; i < 51; i++) {
		if (meals[i]->getName() == searchWord) {
			system("cls");
			meals[i]->printRecipe();

			std::cout << "Return previous menu:0\n";
			std::cin >> orderOrNot;
			if (orderOrNot == 0) {
				system("cls");
				selectionMenu();
			}
		}
	}
}

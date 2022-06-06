#include <iostream>
#include "Meals.h"
#include <fstream>
using namespace std;
void startProgramWithTableNo();
void deleteIngredients();
class Admin;
struct Item {
    Ingredient* ingredient;
    int amount;
    double gr;
    Item() :amount(0), gr(0) {}
    Item(const string& name, const int& amount, const double& gr) {
        ingredient->setName(name);
        setAmount(amount);
        setGram(gr);
    }
    void setAmount(const int& amount) {
        if (amount > -1) {
            this->amount = amount;
        }
    }
    void setGram(const double& gr) {
        if (gr > -1) {
            this->gr = gr;
        }
    }
    int getAmount() {
        return amount;
    }
    double getGram() {
        return gr;
    }
    void show() {
        ingredient->show();
        if (amount != 0) {
            cout << "Amount:" << getAmount() << endl;
        }
        if (amount == 0) {
            cout << "Gram:" << getGram() << endl;
        }
    }
    ~Item()
    {
        delete ingredient;
    }
};
class Stock{
protected:
    Item** ingredients;
    int count = 0;
    double price;
    string name;
    double rating;
    int mealAmount;
public:
    Stock() :name("") {
        addIngredientToStock(beetroot, 200, 0);
        addIngredientToStock(carrot, 200, 0);
        addIngredientToStock(chestnut, 0, 50000);
        addIngredientToStock(chickenFillet, 100, 0);
        addIngredientToStock(chilli, 0, 10000);
        addIngredientToStock(cream, 0, 20000);
        addIngredientToStock(cucumber, 300, 0);
        addIngredientToStock(dill, 400, 0);
        addIngredientToStock(egg, 2000, 0);
        addIngredientToStock(eggplant, 300, 0);
        addIngredientToStock(flour, 0, 200000);
        addIngredientToStock(garlic, 200, 0);
        addIngredientToStock(greens, 2000, 0);
        addIngredientToStock(ketchup, 0, 200000);
        addIngredientToStock(lavash, 200, 0);
        addIngredientToStock(lentil, 0, 20000);
        addIngredientToStock(lettuce, 200, 0);
        addIngredientToStock(meat, 0, 20000);
        addIngredientToStock(mint, 0, 2000);
        addIngredientToStock(mushroom, 2000, 0);
        addIngredientToStock(mustard, 0, 20000);
        addIngredientToStock(oil, 0, 200000);
        addIngredientToStock(olive, 2000, 0);
        addIngredientToStock(onion, 2000, 0);
        addIngredientToStock(parsley, 2000, 0);
        addIngredientToStock(pea, 0, 20000);
        addIngredientToStock(pepper, 400, 0);
        addIngredientToStock(pomegranate, 0, 20000);
        addIngredientToStock(potato, 400, 0);
        addIngredientToStock(pumpkin, 400, 0);
        addIngredientToStock(raisin, 0, 20000);
        addIngredientToStock(rice, 0, 200000);
        addIngredientToStock(yougurt, 0, 200000);
        addIngredientToStock(sauce, 0, 200000);
        addIngredientToStock(tomato, 400, 0);
        addIngredientToStock(walnut, 0, 20000);
    }
    void showStock() {
            for (size_t i = 0; i < count; i++){
                ingredients[i]->show();
            }
            }
    void updateIngredient(Ingredient* ingredient, int amount,string date,string time ) {
        string filename = "updatedIngredient.txt";
        ofstream fout(filename, ios::app);
        if (fout.is_open()) {
            fout << "Ingredient Name:" << ingredient->getName() << " " << "\n";
            fout << "Date:" << date << " " << "\n";
            fout << "Time:" << time << " " << "\n";
        }
        fout.close();
    }
    void addIgredientToStock(Ingredient* ingredient, string date, string time) {
        string filename = "stock.txt";
        ofstream fout(filename, ios::app);
        if (fout.is_open()) {
            fout << "Ingredient Name:" << ingredient->getName() << " " << "\n";
            fout << "Date:" << date << " " << "\n";
            fout << "Time:" << time << " " << "\n";
        }
        fout.close();
    }
    void addIngredient1(Ingredient* ingredient, int amount, int gr) {
            Item* newitem = new Item;
            newitem->ingredient = ingredient;
            newitem->setAmount(amount);
            newitem->setGram(gr);
            auto items = new Item * [count + 1]{};
            for (size_t i = 0; i < count; i++)
            {
                items[i] = ingredients[i];
            }
            items[count] = newitem;
            ++count;
            delete[]ingredients;
            ingredients = items;
            items = nullptr;

        }
    void addIngredientToStock(Ingredient* ingredient, int amount, int gr) {
            addIngredient1(ingredient, amount, gr);
        }
    void deleteIngredientFromStock(Ingredient * ingredient) {
            Item* newitem = new Item;
            newitem->ingredient = ingredient;
            newitem->setAmount(0);
            std::cout << "Ingredient Count:" << newitem->getAmount();
        }
    void increaseIngredientCount(Ingredient * ingredient) {
            int newcount;
            std::cout << "Enter Count:"; cin >> newcount;
            updateIngredient(ingredient,newcount, __DATE__, __TIME__);
    }
    void stock() {
        int opt;
        std::cout << "Return previous menu:0\n";
        std::cout << "Show Stock:1\n";
        std::cout << "Increase Ingredient in Stock:2\n";
        std::cout << "Delete Ingredient from Stock:3\n";
        std::cin >> opt;
        switch (opt) {
        case 0: {
            startProgramWithTableNo();
    break;
}
        case 1: {
            showStock();
            break;
        }
        case 2: {
            printAvaiableIngredientsList();
            int id;
            std::cout << "Enter ID to configure Ingredient\n";
            std::cout << "Your Choice:"; std::cin >> id;
            switch (id) {
            case 1: {
                increaseIngredientCount(beetroot);
                break;
            }
            case 2: {
                increaseIngredientCount(carrot);
                break;
            }
            case 3: {
                increaseIngredientCount(cheese);
                break;
            }
            case 4: {
                increaseIngredientCount(chestnut);
                break;
            }
            case 5: {
                increaseIngredientCount(chickenFillet);
                break;
            }
            case 6: {
                increaseIngredientCount(chilli);
                break;
            }
            case 7: {
                increaseIngredientCount(cream);
                break;
            }
            case 8: {
                increaseIngredientCount(cucumber);
                break;
            }
            case 9: {
                increaseIngredientCount(dill);
                break;
            }
            case 10: {
                increaseIngredientCount(driedFruit);
                break;
            }
            case 11: {
                increaseIngredientCount(egg);
                break;
            }
            case 12: {
                increaseIngredientCount(eggplant);
                break;
            }
            case 13: {
                increaseIngredientCount(flour);
                break;
            }
            case 14: {
                increaseIngredientCount(garlic);
                break;
            }
            case 15: {
                increaseIngredientCount(greens);
                break;
            }
            case 16: {
                increaseIngredientCount(ketchup);
                break;
            }
            case 17: {
                increaseIngredientCount(lavash);
                break;
            }
            case 18: {
                increaseIngredientCount(lentil);
                break;
            }
            case 19: {
                increaseIngredientCount(lettuce);
                break;
            }
            case 20: {
                increaseIngredientCount(milk);
                break;
            }
            case 21: {
                increaseIngredientCount(meat);
                break;
            }
            case 22: {
                increaseIngredientCount(mint);
                break;
            }
            case 23: {
                increaseIngredientCount(mushroom);
                break;
            }
            case 24: {
                increaseIngredientCount(mustard);
                break;
            }
            case 25: {
                increaseIngredientCount(oil);
                break;
            }
            case 26: {
                increaseIngredientCount(olive);
                break;
            }
            case 27: {
                increaseIngredientCount(onion);
                break;
            }
            case 28: {
                increaseIngredientCount(parsley);
                break;
            }
            case 29: {
                increaseIngredientCount(pea);
                break;
            }
            case 30: {
                increaseIngredientCount(pepper);
                break;
            }
            case 31: {
                increaseIngredientCount(pomegranate);
                break;
            }
            case 32: {
                increaseIngredientCount(potato);
                break;
            }
            case 33: {
                increaseIngredientCount(pumpkin);
                break;
            }
            case 34: {
                increaseIngredientCount(raisin);
                break;
            }
            case 35: {
                increaseIngredientCount(rice);
                break;
            }
            case 36: {
                increaseIngredientCount(yougurt);
                break;
            }
            case 37: {
                increaseIngredientCount(sauce);
                break;
            }
            case 38: {
                increaseIngredientCount(tomato);
                break;
            }
            case 39: {
                increaseIngredientCount(walnut);
                break;
            }
            }
            break;
        }
        case 3: {
                    printAvaiableIngredientsList();
                    int id;
                    std::cout << "Enter ID to configure Ingredient\n";
                    std::cout << "Your Choice:"; std::cin >> id;
                    switch (id) {
                    case 1: {
                        deleteIngredientFromStock(beetroot);
                        break;
                    }
                    case 2: {
                        deleteIngredientFromStock(carrot);
                        break;
                    }
                    case 3: {
                        deleteIngredientFromStock(cheese);
                        break;
                    }
                    case 4: {
                        deleteIngredientFromStock(chestnut);
                        break;
                    }
                    case 5: {
                        deleteIngredientFromStock(chickenFillet);
                        break;
                    }
                    case 6: {
                        deleteIngredientFromStock(chilli);
                        break;
                    }
                    case 7: {
                        deleteIngredientFromStock(cream);
                        break;
                    }
                    case 8: {
                        deleteIngredientFromStock(cucumber);
                        break;
                    }
                    case 9: {
                        deleteIngredientFromStock(dill);
                        break;
                    }
                    case 10: {
                        deleteIngredientFromStock(driedFruit);
                        break;
                    }
                    case 11: {
                        deleteIngredientFromStock(egg);
                        break;
                    }
                    case 12: {
                        deleteIngredientFromStock(eggplant);
                        break;
                    }
                    case 13: {
                        deleteIngredientFromStock(flour);
                        break;
                    }
                    case 14: {
                        deleteIngredientFromStock(garlic);
                        break;
                    }
                    case 15: {
                        deleteIngredientFromStock(greens);
                        break;
                    }
                    case 16: {
                        deleteIngredientFromStock(ketchup);
                        break;
                    }
                    case 17: {
                        deleteIngredientFromStock(lavash);
                        break;
                    }
                    case 18: {
                        deleteIngredientFromStock(lentil);
                        break;
                    }
                    case 19: {
                        deleteIngredientFromStock(lettuce);
                        break;
                    }
                    case 20: {
                        deleteIngredientFromStock(milk);
                        break;
                    }
                    case 21: {
                        deleteIngredientFromStock(meat);
                        break;
                    }
                    case 22: {
                        deleteIngredientFromStock(mint);
                        break;
                    }
                    case 23: {
                        deleteIngredientFromStock(mushroom);
                        break;
                    }
                    case 24: {
                        deleteIngredientFromStock(mustard);
                        break;
                    }
                    case 25: {
                        deleteIngredientFromStock(oil);
                        break;
                    }
                    case 26: {
                        deleteIngredientFromStock(olive);
                        break;
                    }
                    case 27: {
                        deleteIngredientFromStock(onion);
                        break;
                    }
                    case 28: {
                        deleteIngredientFromStock(parsley);
                        break;
                    }
                    case 29: {
                        deleteIngredientFromStock(pea);
                        break;
                    }
                    case 30: {
                        deleteIngredientFromStock(pepper);
                        break;
                    }
                    case 31: {
                        deleteIngredientFromStock(pomegranate);
                        break;
                    }
                    case 32: {
                        deleteIngredientFromStock(potato);
                        break;
                    }
                    case 33: {
                        deleteIngredientFromStock(pumpkin);
                        break;
                    }
                    case 34: {
                        deleteIngredientFromStock(raisin);
                        break;
                    }
                    case 35: {
                        deleteIngredientFromStock(rice);
                        break;
                    }
                    case 36: {
                        deleteIngredientFromStock(yougurt);
                        break;
                    }
                    case 37: {
                        deleteIngredientFromStock(sauce);
                        break;
                    }
                    case 38: {
                        deleteIngredientFromStock(tomato);
                        break;
                    }
                    case 39: {
                        deleteIngredientFromStock(walnut);
                        break;
                    }
                    }
                    break;
                }
              break;
}
    }
    ~Stock()
    {
        delete ingredients;
        deleteIngredients();
    }
};


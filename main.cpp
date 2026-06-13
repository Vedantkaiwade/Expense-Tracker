#include <iostream>
#include <string>
using namespace std;

class Expense{
    private:
        string category;
        double amount;
    public:
        Expense(string cat, double amt) : category(cat), amount(amt) {}
        void display() {
            cout << "Category: " << category << ", Amount: $" << amount << endl;
        }
};

int main() {
    Expense food("Food", 50.75);
    Expense transport("Transport", 20.00);
    Expense entertainment("Entertainment", 100.00);
    food.display();
    transport.display();
    entertainment.display();
    return 0;
}

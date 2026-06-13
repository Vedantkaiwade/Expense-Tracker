#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Expense{
    private:
        string category;
        double amount;
    public:
        Expense(string cat, double amt) : category(cat), amount(amt) {}
        void display() const {
            cout << "Category: " << category << ", Amount: $" << amount << endl;
        }
};

int main() {
    vector<Expense> expenses;
    expenses.push_back(Expense("Food", 150.75));
    expenses.push_back(Expense("Transport", 50.00));
    expenses.push_back(Expense("Entertainment", 200.00));
    for (const Expense& e : expenses) {
        e.display();
    }
    return 0;
}

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
void addExpense(vector<Expense>& expenses){
        string category;
        double amount;
        cout<<"Category : ";
        getline(cin,category);
        cout<<"Enter amount : ";
        cin >> amount;
        cin.ignore(); // Ignore the newline character left by cin
        expenses.push_back(Expense(category,amount));
    }
     void viewExpenses(const vector<Expense>& expenses){
        if(expenses.empty()){
            cout<<"No expenses recorded."<<endl;
            return;
        }
        else{
            cout<<"Expenses recorded : "<<endl;

        for(const Expense& expense : expenses){
            expense.display();
         }
        }
    }

int main() {
    vector<Expense> expenses;
   while(true){
        cout << "\n===== Expense Tracker =====\n";
        cout << "1. Add Expense\n";
        cout << "2. View Expenses\n";
        cout << "3. Exit\n";
        int choice;
        cout<<"Enter your choice : ";
        cin>>choice;
        cin.ignore(); // Ignore the newline character left by cin

        switch(choice){
            case 1:
                addExpense(expenses);
                break;
            case 2:
                viewExpenses(expenses);
                break;
            case 3:
                return 0;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

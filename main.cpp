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
    string category;
    double amount;
    int n;
    
    cout<<"Enter number of expenses : "<<endl;
    cin >> n;
    cin.ignore(); // Ignore the newline character left by cin
    vector<Expense> expenses;
    for(int i=1; i<=n; i++){
    cout<<"\nExpense "<<i<<endl;
    cout<<"Category : "<<endl;
    getline(cin,category);
    cout<<"Enter amount : "<<endl;
    cin >> amount;
    cin.ignore(); // Ignore the newline character left by cin
    expenses.push_back(Expense(category,amount));
    }
    for(const Expense& expense : expenses){
        expense.display();
    }
    return 0;
}

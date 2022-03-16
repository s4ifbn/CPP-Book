#include <iostream>
using namespace std;
class AlRafidain {
private:
  string name;
  int balance;

public:
  AlRafidain(string n, int b) {
    name = n;
    balance = b;
  }
  float getBalance() { return balance; }
  void deposit(float amount) { balance += amount; }
  void withdraw(float amount) { balance -= amount; }
  friend class AlRasheed; // AlRasheed class prototype
};                        // end of AlRafidain class
class AlRasheed {
private:
  string name;
  int balance;

public:
  AlRasheed(string n, int b) {
    name = n;
    balance = b;
  }
  float getBalance() { return balance; }
  void deposit(float amount) { balance += amount; }
  void withdraw(float amount) { balance -= amount; }
  void transfer(AlRafidain &Client) {
    int amount;
    cout << "How much to transfer?: ";
    cin >> amount;
    if (amount <= Client.getBalance()) {
      balance += amount;
      Client.balance -= amount;
    } else
      cout << "Not enough balance" << endl;
  }
}; // end of AlRasheed class

int main() {
  AlRafidain ahmed("Ahmed", 1000);
  ahmed.deposit(500);
  cout << "Ahmed balance : ";
  cout << ahmed.getBalance() << "$" << endl;

  ahmed.withdraw(700);
  cout << "Ahmed balance now : ";
  cout << ahmed.getBalance() << "$" << endl;

  AlRasheed ali("Ali", 500);
  cout << "Ali balance : ";
  cout << ali.getBalance() << "$" << endl;

  ali.transfer(ahmed); // friend function call

  cout << "Ali balance : ";
  cout << ali.getBalance() << "$" << endl;

  cout << "Ahmed balance : ";
  cout << ahmed.getBalance() << "$" << endl;

  return 0;
}

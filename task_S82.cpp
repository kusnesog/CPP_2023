#include <iostream>

// S82 (1б) Перегрузите бинарный оператор + для класса CreditCard так, чтобы операция С1 + С2 переносила весь баланс с С2 на С1 (добавляла все сумму с С2 к С1 и обнуляла баланс С2)

class CreditCard {
private:
    double balance;

public:
    CreditCard(double initialBalance) : balance(initialBalance) {}

    CreditCard& operator+(CreditCard& other) {
        this->balance += other.balance; 
        other.balance = 0;              
        return *this;                   
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    double initialBalance1, initialBalance2;

    std::cout << "Введите начальный баланс первой карты: ";
    std::cin >> initialBalance1;
    std::cout << "Введите начальный баланс второй карты: ";
    std::cin >> initialBalance2;

    CreditCard card1(initialBalance1);
    CreditCard card2(initialBalance2);

    card1 + card2;

    std::cout << "Баланс карты 1: " << card1.getBalance() << std::endl; // Новый баланс первой карты
    std::cout << "Баланс карты 2: " << card2.getBalance() << std::endl; // 0.0

    return 0;
}

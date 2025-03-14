#include <iostream>
#include <string>
#include <vector>

class CryptoCurrency {
    private:
        std::string name;
        float amount;
        float unitPrice; 
    public:
        CryptoCurrency(std::string name, float amount, float unitPrice)
        : name(name), amount(amount), unitPrice(unitPrice) {}

        std::string get_name() { return this->name; }
        float get_amount() { return this->amount; }
        float get_unitPrice() { return this->unitPrice; }

        void display() const{
            std::cout << "Name: " << name << " ,Amount held: " 
                      << amount << " ,Unit price: " << unitPrice << std::endl;
        }
        
};

class Wallet {
    private:
        float balance;
        int cryptoAssets;
        std::vector<CryptoCurrency> coins;
    public:
        Wallet(float balance, int cryptoAssets, std::vector<CryptoCurrency> coins)
        : balance(balance), cryptoAssets(cryptoAssets), coins(coins) {}

        void displayWallet() {
            std::cout << "\nAvailable Balance: " << balance << std::endl;
            for(int i=0; i<cryptoAssets; i++){
                coins[i].display();
            }
        }


};

int main() {

    float temp_balance;

    std::cout << "Enter the initial Balance: ";
    std::cin >> temp_balance;
    std::cin.ignore();

    int temp_cryptoAssets;
    std::vector<CryptoCurrency> coins;

    std::cout << "Types of Crypto Assets: ";
    std::cin >> temp_cryptoAssets;
    std::cin.ignore();

    for(int i=0; i<temp_cryptoAssets; i++){
        std::string temp_name;
        float temp_amount;
        float temp_unitPrice;

        std::cout << "Asset's name: ";
        std::getline(std::cin, temp_name);
        std::cout << "Asset amount: ";
        std::cin >> temp_amount;
        std::cout << "Unit price: ";
        std::cin >> temp_unitPrice;
        std::cin.ignore();

        coins.emplace_back(temp_name, temp_amount, temp_unitPrice);
    }

    Wallet wallet(temp_balance, temp_cryptoAssets, coins);

    int option;
    
    do {
        std::cout << "\nSelect an Option:\n";
        std::cout << "1. Wallet info\n";
        std::cout << "2. -\n";
        std::cout << "3. -\n";
        std::cout << "4. -\n";
        std::cout << "0. Exit\n";
        std::cout << "Option: ";
        std::cin >> option;

        switch(option){
            case 1:
                wallet.displayWallet();
                break;

            case 0:
                std::cout << "Exiting...\n";
                break;
        }
    } while (option != 0);

}
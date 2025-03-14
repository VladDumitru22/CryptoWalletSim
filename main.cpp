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


};

class Wallet {
    private:
        float balance;
        int cryptoAssets;
        std::vector<CryptoCurrency> coins;
    public:
        Wallet(float balance, int cryptoAssets, std::vector<CryptoCurrency> coins)
        : balance(balance), cryptoAssets(cryptoAssets), coins(coins) {}

        

};

int main() {



    return 0;
}
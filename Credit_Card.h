#pragma once

class Credit_card {

    int credit_ID;
    int account_balance;

    //Credit_card(int credit_ID = 0, int account_balance = 0) {
    //    this->credit_ID = credit_ID;
    //    this->account_balance = account_balance;
    //}
public:

    void set_creditID(int credit_ID) {
        this->credit_ID = credit_ID;
    }

    int get_creditID() { return this->credit_ID; }

    void set_account_balance(int account_balance) {

        this->account_balance = account_balance;
    }
    int getAccountBalance() {
        return this->account_balance;
    }

};
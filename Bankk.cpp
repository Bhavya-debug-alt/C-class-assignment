#include <iostream>
using namespace std;

class BaseAccountClass {
public:
    virtual void SendMoney() {
        cout << "Permission Granted: Money Sent" << endl;
    }

    virtual void ReceiveMoney() {
        cout << "Permission Granted: Money Received" << endl;
    }

    virtual ~BaseAccountClass() {}
};

class ConsumerAccountClass : public BaseAccountClass {
public:
    bool flagged;

    ConsumerAccountClass(bool f) {
        flagged = f;
    }

    void SendMoney() override {
        if (flagged) {
            cout << "Account Flagged: Sending Money Denied" << endl;
        } else {
            cout << "Permission Granted: Money Sent" << endl;
        }
    }

    void ReceiveMoney() override {
        if (flagged) {
            cout << "Account Flagged: Receiving Money Denied" << endl;
        } else {
            cout << "Permission Granted: Money Received" << endl;
        }
    }
};

int main() {
    ConsumerAccountClass account(true);

    BaseAccountClass* ptr = &account;

    ptr->SendMoney();
    ptr->ReceiveMoney();

    return 0;
}

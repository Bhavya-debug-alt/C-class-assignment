#include <bits/stdc++.h>
using namespace std;

class GPayUser {

    
    private:
    long sender_account_number;
    string sender_name;

    long receiver_account_number;
    string receiver_name;

    long paidamount;

    public:

        
        GPayUser() {
            sender_account_number = 0;
            sender_name = "";

            receiver_account_number = 0;
            receiver_name = "";

            paidamount = 0;
        }


        
        long GetSenderAccountNumber() {
            return sender_account_number;
        }

        string GetSenderName() {
            return sender_name;
        }

       
        long GetReceiverAccountNumber() {
            return receiver_account_number;
        }

        
        string GetReceiverName() {
            return receiver_name;
        }

        
        long getpaidAmount() {
            return paidamount;
        }


        
        void SetSenderAccountNumber(long acc) {
            sender_account_number = acc;
        }

       
        void SetSenderName(string n) {
            sender_name = n;
        }

        
        void SetReceiverAccountNumber(long acc) {
            receiver_account_number = acc;
        }

       
        void SetReceiverName(string n) {
            receiver_name = n;
        }

        
        void setpaidAmount(long paid) {
            paidamount = paid;
        }


        
        void details() {

            cout << "\n========== TRANSACTION DETAILS ==========\n";

            cout << "Send By: " << sender_name << endl;
            cout << "Sender Account Number: "<< sender_account_number << endl;
            cout << "Amount Sent " <<"by "<<sender_name<<" is "<<paidamount<<endl;
            cout << "Received By: " << receiver_name << endl;
            cout << "Receiver Account Number: "<< receiver_account_number << endl;
            cout << "Amount received " <<  "by "<<receiver_name<<" is "<<paidamount<<endl;

        }


        // destructor
        ~GPayUser() {
            cout << "Section ended for transaction of: "<< paidamount << endl;
        }
};


int main() {

    GPayUser user[5];


    for(int i = 0; i < 5; i++) {

        long sender_acc;
        string sender_name;

        long receiver_acc;
        string receiver_name;

        long paid;


        
        cout << "\nDetails of Sender" << endl;

        cout << "Enter sender account number: ";
        cin >> sender_acc;

        cout << "Enter sender name: ";
        cin >> sender_name;

        cout << "Enter paid amount: ";
        cin >> paid;


       
        cout << "\nDetails of Receiver" << endl;

        cout << "Enter receiver account number: ";
        cin >> receiver_acc;

        cout << "Enter receiver name: ";
        cin >> receiver_name;


        
        user[i].SetSenderAccountNumber(sender_acc);
        user[i].SetSenderName(sender_name);

       
        user[i].SetReceiverAccountNumber(receiver_acc);
        user[i].SetReceiverName(receiver_name);

        
        user[i].setpaidAmount(paid);




       
        user[i].details();

        cout << "\n============== Transaction "<< i + 1<< " ended ==============\n";
    }



    return 0;
}

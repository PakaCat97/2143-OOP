#include <iostream>

using namespace std;

class User
{
    private:
    string name;
    int id;
    string email;

    public:

    User(string n, int i, string ema) : name(n), id(i), email(ema) {};

    void printInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
    }

    void printFullInfo() const
    {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "ID: " << id << endl;
    }

    void printInfo(bool showId = false) const
    {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        if (showId)
        {
            cout << "ID: " << id << endl;
        }
    }

};

int main()
{
    return 0;
}
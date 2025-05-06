# Minimal Examples or Scenarios:

### DRY Violation & Fix:

So I have two functions in a class that show a person's info.

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
    // These two functions do prety much the exact same thing and are essentially duplicates.
    // We should fix this by combining these two into one function like thus:

    void printInfo(bool showId = false) const
    {
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        if (showId)
        {
            cout << "ID: " << id << endl;
        }
    }
        // This line of code combines the two while maintaining the intention of showing the
        id number of the user or not. This code demonstrates DRY (dont repeat yourself).
}


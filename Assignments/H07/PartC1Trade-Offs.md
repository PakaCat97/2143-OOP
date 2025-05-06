# Reflection & Short Discussion:

### Trade-Offs:

When validating something like a username or a password you can make things overly complicated
by creating two methods. One for validating and one for formating then you could end up with 
something very convoluted:

bool validateField(const string& value, const string& fieldName, size_t minLength) {
    if (value.length() < minLength) {
        cout << fieldName << " must be at least " << minLength << " characters." << endl;
        return false;
    }
    return true;
}

bool validateForm(const string& username, const string& password) {
    return validateField(username, "Username", 5) &&
           validateField(password, "Password", 8);
}

Here we could use code repitition to make things clearer:

bool validateForm(const string& username, const string& password) {
    if (username.length() < 5) {
        cout << "Username must be at least 5 characters." << endl;
        return false;
    }
    if (password.length() < 8) {
        cout << "Password must be at least 8 characters." << endl;
        return false;
    }
    return true;
}


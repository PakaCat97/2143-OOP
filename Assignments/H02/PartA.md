# Encapsulation:
Encapuslation is way to keep data and methods that manipulate that data bundled together. And by using visibility modifiers data can be protected from unintended changes.

# Visibility Modifiers:

### Public:
The public modifier includes methods which can be accesed by anyone. A benifit for the public modifier is that data can be easily accesed and modified keeping things simple. However it can also be a drawback if the 
data being accesed was incredibly sensitive data such as nuclear launch codes.

### Private:
The private modifier typicaly includes data types such as: ints, strings, bools... etc. One benifit fot the Private modifier is hiding data that the user does not need acceses to such as the social
security numbers of potential clients.

### Protected:
The protected keyword allows its members to be accesed within the class itself. The benfit for the protected modifier is that it provides balance between the encapsulation of private members 
and accessibility of public members making it useful for inheritance.

# Impact on Matinence

### Isolating Changes
Encapsulation can reduce debuggin complexity by ensuring that ineternal details of a class are hidden from the rest of the system. Debugging can be focus on the class without worring about 
unintended side effects of on other parts of the code.

### Preventing Unexpected Modifications:
Encapsulation restricts direct access to an object's internal data so accidental modifications are minimized.

### Readability:
Encapuslated classes only expose relevant data and methods which makes it easier for programers to understand how each component interact which leads to more efficient debugging.

### Easier Testing:
Encapsulation allows for individual methods to be tested isolated from the others.

# Real World Application:

### Bank Accounts
To have a bank account you are required to enter your ssn which is very sensitive data. Once you have an account you can access data within your account such as **your** balance, and you are able to 
spend **your** money. It is important that banks ensure no one else can access <ins>your sensitive data such as your ssn and spend your money!</ins>

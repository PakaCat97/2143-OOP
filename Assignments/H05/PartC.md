# Reflection and Comparison:

### Distilling the Essentials:

To maintain a clear public interface I would hide the methods that log, encrypt and balance
the account. The customer does not need to know that we logged the data everytime they make a
withdrawl or deposit. Displaying all thet info will cause a lot of clutter for the customer.

### Contrast with Polymorphism:

The method call on savings account is done by making a pointer to the abstract class of 
BankAccount however it actually points to SavingAccount. So when one of the methods is called 
in BankAccount the correct one is chosen in SavingsAccount showing polymorphism. The only 
things known to the user are depsit, withdraw, and getBalance showing abstraction.

### Real-World Example:

Patients in hospitals have all kinds of data they would need stored. Health care records need
to be accesable by hospital staff however hospitall staff would not need to know the code
that goes in behind the scenes of the programs they are using.
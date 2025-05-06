# KISS Principle Example:

So a method that calculates a discout using overly complicated checks

This would have way too many if else statements.
It would look something like this:
if (customer is vip, is a holiday, is item on sale...)
    calculate discount
if else(customer is regular, is a holiday... )
    calculate discount
ie else(customer is vip, not a holiday...)
WAY TOO MANY IF ELSE STATEMENTS.

We could just create two different classes of VIPCustomer, and Customer with customer being 
the parent class that has all the basic perks of being a normal customer and have VIPCustomer
be a child class that inherits from the regular customer and modifies what is needed for
a VIP.
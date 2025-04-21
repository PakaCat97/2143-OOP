# Part C Short reflection and Disscussion

### When to use inheritance:

Inheritance is very benificial when making video game characters. This is becuase
characters share stats like HP, wealth, and have names.
However, inheritance is can be problamatic if we are talking about employees and managers.
A manager is-a employee however they don't work in the same way a regualar employee
does. Managers have authority to do payrolls, hire new employees, and get payed differently
than regular employees do. Managers need methods that do not make sense for employees
and vice versa. So it just ends up being a huge mess.


### Method Overriding vs. Overloading:

Overriding happens during runtime and uses the same method name and parameters but it behaves differently.
it happens across parent and child classes.
Overloading is the same method but it has different parameters and it happens at compile time.
It typicaly hapens within the same class.
Inheritance relies heavily on overriding becuase overriding gives inheritcance its flexibility by 
reusing code.

### Inheritance vs. Interfaces/Abstract Classes:

Concrete class "I am a type of"

Abstract Class "I am partly implemented"

Interface "I promise to implement"


### Pitfalls of Multiple Inheritance

The diamond problem can ruin your code if not handled corectly.
One way to deal with the diamond problem is TO AVOID IT. Otherwsie, we could use
virtual inheritance or interfaces.

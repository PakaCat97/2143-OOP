# Overloading vs. Overriding Distinctions

### Overloaded Methods:

A Calculator class has overloaded functions which will take either two ints or two doubles.
Depending on what two numbers were passed in the calculate() function will decide which of the two
calculate() functions are needed. 
For ex:
calculate(int x, int y) for calculate(5,7)
or
caluclate(double x, double y) for calculate(5.5, 6.6)
This is decided at compile time.

### Overriden Methods:
The descision for which method to call occurs during runtime.
This matters for flexable code design becuase it extends programs easily by reusing code.

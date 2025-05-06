# Conceptual Questions:

### DRY (Don’t Repeat Yourself):

Don't repeat code or logic. For example you could write functions that greet people like this:
void greet()
{
    cout<< "Hello Jerry";
}

void greet()
{
    cout<< "Hello Wendy";
}

void greet()
{
    cout<< "Hello James";
}

This sucks! Its the same repeating greeting. We could do this instead:

void greet(string name)
{
    cout << "Hello << name << "!" << endl;
}

then call the function like:

greet("Jerry");
greet("Wendy");
greet("James");

This would do same as the code above. We wouldint have to write all those individual
unecessary code blocks.

### KISS (Keep It Simple, Stupid):

KISS is crucial for maintaining code becuase over complicatiing things will make your code
more difficult to understand for other programers or future you. Having simpler code will make
it easier to debug and modify.
One drawback to oversimplifying code is that you can take away some flexibility by being too
rigid such as hardcoding values instead of using parameters. 

### Introduction to SOLID (High-Level):

The Single Responsibility Principle (SRP): a class should have only one reason to change.
The Open-Closed Principle (OCP): software enteties should be open to be extended however
not modified. 
The SOLID principles are important to maintaning huge databases becuase they help
ensure maintainability, flexibility, and testability in code.
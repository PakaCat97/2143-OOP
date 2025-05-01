# Inheritance Defininition
Inheritance lets a programer create a new class from an old class. A new class is called
a derived/sub/child/heir class and the old class it inherited from is called
a base/super/parent class. This way the programer can reuse old code and avoid having to 
write the same code over and over again.

### Inheritance: is different from composition because inheritance: "is-a" relationship. Ex: A dog
is an animal. Dog inherits from the animal class. "Strong class based." 

### Composition: 
"Has-a" relationship. Ex:
a car "has-a" engine but the engine can't exist without the car. "Strong part of."

###Aggregation: 
This is also "Has-a" relationship. But the parts can exist seperatly. Ex:
A teacher "Has" students but teachers have lives suprisingly.

# Types of Inheritance

### Single inheritance:
ONE child class inherits from ONE parent class. Used when you want to extend
the functionality of a single class. EX:
You have a Person class and you want to make a student class that inherits all the features of 
the Person class.

### Multiple Inheritance:
One class inherits from MORE than one base class. This is used when you need to combine features from
two or more related classes. Ex:
You have a mage class and you have warrior class. Paladin would inherit from both because paladins can
use melee skills and magic spells.

### Method Overriding:
is when a Child Class provides its own version of a method that is already defined in the Parent Class.
This allows the Child Class to customize or change how that method behaves.
You would override a method instead of simply adding a new one becuase it supports polymorphism.

### Real World Analogy:
A Child in the real world inherits traits from thier Parents. Just like in programing. This can be 
from apearences or perhaps medical conditions or maybe even a father may pass down knowledge on how
to do basic maintance on a vehicle. Like when a Child Class inherits from a Parent class.

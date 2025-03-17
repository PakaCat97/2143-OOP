# Defintion of a class and an object.

## Class:
  A class is like a template for creating objects. They bundle together attributes ie: (data such as ints, strings, bools, etc...) and methods (functions).

## Object:
  An object is an instance of a class. It holds its own data like name, color, age, race, amount, etc... An object can also perform actions such as: walk, run, compute, talk, accelerate, etc...
   ### Example of an object: 
   "Car" would have: year, make, and model as its atributes, and its methods would be stuff like: accelerate, brake, turn, park, sendErrorMessage, etc...

# Constructors and Destructors

## Constructor:
  A constructor is a method in the class used to allow initialization of an object. It does not have to necessarily initialize data but it can.
  ### Example constructor:
  Car(); or Car( string errorMessage, int mph, int fuelLvl.....)

## Destructor:
  A destructor deletes an instace of a class and frees up memory in the cache. It is important in managing an objects life cycle becuase when an object is no longer needed then the space it took up in the
  cache needs to be freed for other data to utilize.
  ### Example Destructor:
  ~Car();

  ### Object Lifecycle
  
  ## Instantiation to Destruction:
  An object gets created in main and serves its purpose in the program. When its purpose is served then it should be destroyed to open up memory in the cache to allow another object to be instantiated.
  It is important that an object manages its resources as to not use too much of a computer's resources.

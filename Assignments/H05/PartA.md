# Understanding Abstraction in OOP

### Conceptual Questions:

### Definition:

Abstraction gives a user of something the tools necessary to be able to work the thing. 
For example: Not many people know how a car works or moves really but many people do know how to drive.
It is unecessary to know how an engine works to be able to drive a car.

### Abstraction vs. Encapsulation:
Abstraction: Hiding details unecessecary for the user to be able to use the program.

Encapsulation: Bundling up data and methods within a package.

One might confuse the concepts becuase they go together in oop. Encapuslation is typicaly used with abstraction
when making programs. 

### Designing with Abstraction: 
Smart thermostat:
3 Atributes: temp, clock, schedule.
2 Methods: changeTemp()  setSchedule().

These atributes and methods are some of the essential pieces for the thermostat's code 
as far as the user is concerned. 

I would omit certain details like circuit design becuase it is not necessary for the user to
be able to have access to things they may not understand. They could potentially break thier 
product.

### Benefits of Abstraction:
Some benifits of abstraction in large scale projects include code reusability and managibility.
Large projects will be overwhelming to write if code had to be constantly rewritten. Flexability of the code will help developers resuse code that has already be written and saves a lot of time and headache. Abstraction also helps break down the code into smaller manageable chunks and the developers who work on the code don't need to know every minute detail of the code they are working on to understand it.
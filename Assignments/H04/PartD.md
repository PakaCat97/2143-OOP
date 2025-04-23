#  Reflection & Real-World Applications

### Practical Example:

When creating an rpg a base/parent/super class called Character can have a move function and it can be shared among all 
other characters. For example: a npc, player character, and enemy all need to move. So a function can be 
created to allow all these character types to move. However these characters need to move in different ways.
A function called move can be created to allow characters to move. When a Player Character calls move then
it would require input from the player. If an npc moves it requires a predetermined path. If an enemy moves
then it could move using AI. All these objects use the function move() however the behavior is changed depending
on the object that calls it. This allows for code to not be duplicated and makes it flexible.


### Potential Pitfalls:
If your overloaded methods have similar parameter types then the wrong one could be called leading to 
unexpected behaviors in your program.
With runtime polymorphism if you are relying heavily on it then you could have a hard time debugging it.

### Checking Understanding:
If triangle is added to to the shape hierarchy then no modification would be needed to the shapes refernce.
All that would be added is a method to override the one in Shape.

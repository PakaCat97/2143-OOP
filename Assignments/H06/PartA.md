# Part A: Conceptual Questions

### Composition vs. Aggregation:

Composition: is when an object needs a container object in order for it to exist. 
For example an engine is part of a car and needs it to do its intended function. It can
not exist independently without the car. It has a strong relationship with the car.
It's often implemented by embedding an object of one class within another.

Agregation: is a has-a relationship and it has a weaker relationship to its container 
object. For example: wheels are part of a car but can exist without the car. It is typically
implemented using pointers or references. 

### When to use:

In gaming we can imagine we are building different classes such as: Warrior, Mage, and
Gunner. Each will have: Invetory, Weapon, and Special Special Ability. These are objects
owned by the Character Classes and are created when the character is created and also 
destroyed when the character is destroyed.

In banking the bank manages multiple customers and customers can have multiple banks. A
customer can leave a bank deleting it however the customer can still exist outside of 
that bank. 

### Differences from Inheritance:

Inheritance is-a relationship. A dog is-a animal. Compositon is has-a relationship. A dog has 
legs and they are very important to the dog and can't function if they are not attatched to 
the dog. This is a weaker relationship than inheritance. Aggregation a dog can have toys
and play with them but the dog doesn't own them fully. Toys can exist freely without the dog.

### Real-World Analogy:

A gun has bullets represents composition. A person can use a gun however they both can 
exist independently. These distinctions matter in code becuase it can become easier to break, 
harder to understand, and harder to extend. 
# Reflection & Short Discussion:

### Ownership & Lifecycle:

In a compositon relationship the child object gets destroyed along with the parent object
becuase the parent object has a strong ownership of the child object. The childo object cannot
exist independently from the parent object. The child object is fully contained within the 
parent object.
In a aggregation relationship the child object does not get destroyed when the parent object
does becuase the child object can exist independently from the parent object. The child
object is not fully owned by the parent only referenced. It can continue to exist. The parent
object has weak ownership of the child object.

### Advantages & Pitfalls:

Using compositon for an engine and a car is helpful becuase the engine object would get deleted
along with the car object. This is becuase the engine cannot do its job providing the car with
power to the crankshaft and to the differentials... etc to make the car move.
However a potential pitfall when using composition when aggregation is needed. For example 
adresses are can exist without a person. Many people can share an adress such as a family
of 12.

### Contrast with Inheritance:

Has-a relationship: an object contains or references another object. This is composition or
aggregation. A car has-a engine.
Is-a relationship: an object is a specialized type of another. This is inheritance. A dog
is-a animal.
We would avoid situations that can be easily be solved with composition or aggregation
relationship becuase of the diamond problem. We could also isolate changes using composition
or agregation. We could also avoid inheriting unessesary stuff. 
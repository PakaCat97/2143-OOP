# SOLID Application:

So theres a problem with the scenario code:

// Shape interface mixes concerns
class Shape {
public:
    virtual void draw() = 0;
    virtual double computeArea() = 0;
};

The shape interface violates the SRP principle by giving shape mathematical responsibility:
computeArea() and rendering responsibility: draw(). If one draw has to change and computeArea
has to change we violate the single responsibility principle. We should seperate the two into
one individual method each giving Shape the computeArea() method and making a new method for
draw(). Thus seperating the two and giving each method only one reason to change. This also 
demonstrates ISP interface segregation principle by not forcing clients to depend on methods
they do not use.
#include <SFML/Graphics.hpp>

struct PhysicsAttributes {
    float mass;
    float angularMass;
}

class PhysicsObject {
   private:
    sf::Vector2f position;
    sf::Vector2f velocity;
    sf::Vector2f acceleration;
    float angle;
    float angularVelocity;
    float angularAcceleration;

    sf::Color color;

    PhysicsAttributes attributes;

   public:
    virtual PhysicsObject() = 0;
    virtual ~PhysicsObject() = 0;

    // virtual get.set;
    // apply force
    // apply impulse
    
    // find aabb
    // bool checkCollision(PhysicsObject& other);
    // void resolveCollision(PhysicsObject& other);

    virtual void update(sf::Time dt) = 0; // do nothing :)
    virtual void draw(sf::RenderWindow& window) = 0;
};
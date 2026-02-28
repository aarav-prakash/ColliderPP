#include "physics_circle.h"

Circle::Circle(float r, sf::Vector2f pos) : PhysicsObject(pos), radius(r) {
    shape.setRadius(radius);
    shape.setOrigin(radius, radius);
    shape.setPosition(pos);
}

void Circle::sync(){
    shape.setPosition(PhysicsObject::getPosition());
}

void Circle::update(sf::Time dt) {
    PhysicsObject::update(dt);
    sync();
}

void Circle::draw(sf::RenderWindow& window) {
    window.draw(shape);
}

float Circle::getRadius() const {
    return radius;
}

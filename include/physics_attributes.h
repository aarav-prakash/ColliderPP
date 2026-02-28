#include <SFML/Graphics.hpp>

struct PhysicalAttributes {
    float mass;
    float angularMass;
    float restitution;
    sf::Color color;

    static const PhysicalAttributes DEFAULT_PHYSICS_ATTRIBUTES;
};


PhysicalAttributes DEFAULT_PHYSICS_OBJECT = PhysicalAttributes{1.0f,1.0f,1.0f,sf::Color::White};

enum class ShapeID{
    NULL_SHAPE,
    CIRCLE_SHAPE,
    RECTANGLE_SHAPE,
    POLYGON_SHAPE
};

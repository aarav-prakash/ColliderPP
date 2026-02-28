#include "physics_engine.h"
#include "physics_circle.h"

class PhySimulator{
private:
    sf::RenderWindow window;
    PhysicsEngine engine;
public:
    PhySimulator(const std::string& address);
    
    void run();
};
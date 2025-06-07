#ifndef FLY_BEHAVIOUR_H
#define FLY_BEHAVIOUR_H

/**
 * @brief Abstract base class representing a flying behaviour.
 *
 * This class defines the interface for flying behaviours that can be assigned to objects.
 * Derived classes must implement the DoFly() method to specify their flying logic.
 */
class FlyBehaviour {
    virtual void DoFly() = 0;

public:
    virtual ~FlyBehaviour() = default;

    void Fly() { DoFly(); }
};

class FlyWithWings final : public FlyBehaviour {
    void DoFly() override { std::cout << "Flying with wings!" << std::endl; }
};

class FlyNoWay final : public FlyBehaviour {
    void DoFly() override { std::cout << "I can't fly." << std::endl; }
};

class RocketPoweredFly final : public FlyBehaviour {
    void DoFly() override { std::cout << "Rocket powered!!" << std::endl; }
};

#endif //FLY_BEHAVIOUR_H

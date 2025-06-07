#ifndef QUACK_BEHAVIOUR_H
#define QUACK_BEHAVIOUR_H
#include <iostream>

/**
 * @brief Abstract base class representing a quack behaviour.
 *
 * This class defines the interface for quack behaviours that can be assigned to objects.
 * Derived classes must implement the DoQuack() method to specify their quack logic.
 */
class QuackBehaviour {
    virtual void DoQuack() = 0;

public:
    virtual ~QuackBehaviour() = default;

    void Quack() { DoQuack(); }
};

class BasicQuack final : public QuackBehaviour {
    void DoQuack() override { std::cout << "Quack" << std::endl; }
};

class MuteQuack final : public QuackBehaviour {
    void DoQuack() override { std::cout << "<<silence>>" << std::endl; }
};

class Squeak final : public QuackBehaviour {
    void DoQuack() override { std::cout << "Squeak" << std::endl; }
};

#endif //QUACK_BEHAVIOUR_H

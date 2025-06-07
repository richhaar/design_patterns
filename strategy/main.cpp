#include <iostream>
#include <memory>

#include "fly_behaviour.h"
#include "quack_behaviour.h"


class Duck {
    std::unique_ptr<FlyBehaviour> fly_behaviour;
    std::unique_ptr<QuackBehaviour> quack_behaviour;

protected:
    Duck(std::unique_ptr<FlyBehaviour> fly, std::unique_ptr<QuackBehaviour> quack) : fly_behaviour(std::move(fly)),
        quack_behaviour(std::move(quack)) {
    }

public:
    void Fly() const { fly_behaviour->Fly(); }
    void Quack() const { quack_behaviour->Quack(); }

    void Swim() { std::cout << "All ducks swim" << std::endl; }

    void SetFlyBehaviour(std::unique_ptr<FlyBehaviour> fly) {
        fly_behaviour = std::move(fly);
    }

    void SetQuackBehaviour(std::unique_ptr<QuackBehaviour> quack) {
        quack_behaviour = std::move(quack);
    }
};

class MallardDuck : public Duck {
public:
    MallardDuck() : Duck(std::make_unique<FlyWithWings>(), std::make_unique<BasicQuack>()) {
    }
};

class ModelDuck : public Duck {
public:
    ModelDuck() : Duck(std::make_unique<FlyNoWay>(), std::make_unique<MuteQuack>()) {
    }
};

int main() {
    std::cout << "--------------" << std::endl;
    std::cout << " Mallard Duck" << std::endl;
    std::cout << "--------------" << std::endl;

    MallardDuck duck;
    duck.Fly();
    duck.Quack();
    duck.Swim();

    std::cout << "Muting the mallard:" << std::endl;
    duck.SetQuackBehaviour(std::make_unique<MuteQuack>());
    duck.Quack();

    std::cout << "--------------" << std::endl;
    std::cout << " Rubber duck" << std::endl;
    std::cout << "--------------" << std::endl;

    ModelDuck rubber_duck;
    rubber_duck.Fly();
    rubber_duck.Quack();

    std::cout << "Giving a jetpack to rubber duck:" << std::endl;
    rubber_duck.SetFlyBehaviour(std::make_unique<RocketPoweredFly>());
    rubber_duck.Fly();
}

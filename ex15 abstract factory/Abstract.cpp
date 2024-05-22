#include <bits/stdc++.h>

class Pizza {
public:
	virtual void bake() = 0;
	virtual void cut() = 0;
	virtual void box() = 0;
    virtual ~Pizza(){

    }
};

class PizzaFactory {
public:
	virtual Pizza* createCheesePizza() = 0;
	virtual Pizza* createPepperoniPizza() = 0;
    virtual ~PizzaFactory(){

    }
};

class NewYorkCheesePizza : public Pizza{
    void bake() override{
        std::cout << "Bake from NewYorkCheesePizza" << std::endl;
    }
    void cut() override{
        std::cout << "cut from NewYorkCheesePizza" << std::endl;
    }
    void box() override{
        std::cout << "box from NewYorkCheesePizza" << std::endl;
    }
};

class NewYorkPepperoniPizza : public Pizza{
    void bake() override{
        std::cout << "Bake from NewYorkPepperoniPizza" << std::endl;
    }
    void cut() override{
        std::cout << "cut from NewYorkPepperoniPizza" << std::endl;
    }
    void box() override{
        std::cout << "box from NewYorkPepperoniPizza" << std::endl;
    }
};

class ChicagoCheesePizza : public Pizza{
    void bake() override{
        std::cout << "Bake from ChicagoCheesePizza" << std::endl;
    }
    void cut() override{
        std::cout << "cut from ChicagoCheesePizza" << std::endl;
    }
    void box() override{
        std::cout << "box from ChicagoCheesePizza" << std::endl;
    }
};

class ChicagoPepperoniPizza : public Pizza{
    void bake() override{
        std::cout << "Bake from ChicagoPepperoniPizza" << std::endl;
    }
    void cut() override{
        std::cout << "cut from ChicagoPepperoniPizza" << std::endl;
    }
    void box() override{
        std::cout << "box from ChicagoPepperoniPizza" << std::endl;
    }
};

class NewYorkPizzaFactory : public PizzaFactory{
public:
    Pizza* createCheesePizza() override {
        return new NewYorkCheesePizza();
    }
    Pizza* createPepperoniPizza() override {
        return new NewYorkPepperoniPizza();
    }
};


class ChicagoPizzaFactory : public PizzaFactory {
public:
    Pizza* createCheesePizza() override {
        return new ChicagoCheesePizza();
    }
    Pizza* createPepperoniPizza() override {
        return new ChicagoPepperoniPizza();
    }
};



int main()
{
	// Create a New York Pizza Factory
	PizzaFactory* newYorkFactory = new NewYorkPizzaFactory();
	Pizza* newYorkCheesePizza = newYorkFactory->createCheesePizza();
	Pizza* newYorkPepperoniPizza = newYorkFactory->createPepperoniPizza();

	// Create a Chicago Pizza Factory
	PizzaFactory* chicagoFactory = new ChicagoPizzaFactory();
	Pizza* chicagoCheesePizza = chicagoFactory->createCheesePizza();
	Pizza* chicagoPepperoniPizza = chicagoFactory->createPepperoniPizza();

	// Order and prepare the pizzas
	newYorkCheesePizza->bake();
	newYorkCheesePizza->cut();
	newYorkCheesePizza->box();

	newYorkPepperoniPizza->bake();
	newYorkPepperoniPizza->cut();
	newYorkPepperoniPizza->box();

	chicagoCheesePizza->bake();
	chicagoCheesePizza->cut();
	chicagoCheesePizza->box();

	chicagoPepperoniPizza->bake();
	chicagoPepperoniPizza->cut();
	chicagoPepperoniPizza->box();

	// Clean up
	delete newYorkFactory;
	delete newYorkCheesePizza;
	delete newYorkPepperoniPizza;
	delete chicagoFactory;
	delete chicagoCheesePizza;
	delete chicagoPepperoniPizza;

	return 0;
}

#include <bits/stdc++.h>

class Pizza {
public:
	void bake();
	void cut();
	void box();
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

class NewYorkCheesePizza : public Pizza{};
class NewYorkPepperoniPizza : public Pizza{};
class ChicagoCheesePizza : public Pizza{};
class ChicagoPepperoniPizza : public Pizza{};

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

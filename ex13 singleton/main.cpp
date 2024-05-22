#include <iostream>

class Singleton {
	public:
		// Static method to access the singleton instance
		// Public method to perform some operation
		// Delete the copy constructor and assignment operator
		static Singleton* getInstance(const int num) {
			if(instance==nullptr) {
				std::cout << "creating a new instance" << std::endl;
				instance = new Singleton(num);
			}
			std::cout << "returning instance with unique id: " << unique_id << std::endl;
			return instance;
		}

		void someOperation(){
			std::cout << "some operation" << std::endl;
		}

		void PrintUniqueID(){
			std::cout << "Current Instance's unique id: " << this->unique_id << std::endl;
		}

	private:
		static Singleton* instance;
		static int unique_id;
		Singleton(const int num){
			unique_id = num;
		}
		Singleton(const Singleton &to_copy);
		Singleton& operator=(const Singleton &original);

};

// Initialize the static instance variable to nullptr
Singleton* Singleton::instance = nullptr;
int Singleton::unique_id = 0;

int main()
{
	// Access the Singleton instance
	Singleton* singleton = Singleton::getInstance(20);

	// Use the Singleton instance
	singleton->someOperation();

	// Attempting to create another instance will not work
	// Singleton anotherInstance; // This line would not
	// compile
	Singleton* s1 = Singleton::getInstance(10);
    s1->PrintUniqueID();
    std::cout << "memory location: " << s1 << std::endl;
    Singleton* s2 = Singleton::getInstance(5);
    s2->PrintUniqueID();
    std::cout << "memory location: " << s2 << std::endl;

	return 0;
}

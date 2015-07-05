#include <iostream>
#include "main.hpp"

class Role{
	public:
		virtual void play() = 0;
		virtual ~Role(){};
};

class Krieger : public Role{

	public:
		void play(){
			std::cout << "Kaempfe!" << std::endl;
		}

		~Krieger(){
			std::cout << "Destroying Krieger" << std::endl;
		}

};

class Zauberer : public Role{

	public:
		void play(){
			std::cout << "Zaubere!" << std::endl;
		}

		~Zauberer(){
			std::cout << "Destroying Zauberer" << std::endl;
		}

};

class Actor{

	public:
		void setOnAction(Role* r){
			if(rolle){
				delete rolle;
				std::cout << "Deleting something" << std::endl;
			}
			rolle = r;
		};

		void action(){
			if(rolle){
				rolle->play();
			}
		}

	private:

		Role* rolle;

};

int main(){

	Actor actor;
	actor.setOnAction(new Krieger());
	actor.action();
	actor.setOnAction(new Zauberer());
	actor.action();
	actor.setOnAction(new Krieger());
	actor.action();

	return 0;

}

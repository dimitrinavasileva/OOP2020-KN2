#include<iostream>
using namespace std;

class Entity {
public:
	virtual void print() {
		cout << "I am Entity" << endl;
	}
};
class Player : public Entity {
public:
	void print() {
		cout << "I am Player" << endl;
	}
};
class Enemy : public Entity {
public:
	void print() {
		cout << "I am Enemy" << endl;
	}
};


int main() {
	Player* player = new Player();
	player->print();
	Entity* actualEnemy = new Enemy();
	actualEnemy->print();
	Entity* actualPlayer = new Player(); // Entity* actualPlayer = player;
	actualPlayer->print();

	Player* p0 = static_cast<Player*>(actualEnemy);
	Player* p1 = static_cast<Player*>(actualPlayer);
	p0->print();
	p1->print();

	//Player* p2 = dynamic_cast<Player*>(actualEnemy);
	//p2->print();
	Player* p3 = dynamic_cast<Player*>(actualPlayer);
	p3->print();



}


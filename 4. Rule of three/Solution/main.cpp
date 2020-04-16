#include "Company.h"

void new_line() { 
	std::cout << std::endl;
}

void testCompany()
{
	Worker w1("Anna", "Cleaner", 50);
	Worker w2("Iva", "CEO", 15000);
	Worker w3("Martin", "Painter", 600);
	Worker w4("Ivan", "Designer", 3000);
	Worker w5("Kalina", "Computer programmer", 5000);

	Company c("QA Company");

	c.print();
	new_line();

	c.addWorker(w1);
	c.print();
	new_line();

	c.addWorker(w2);
	c.print();
	new_line();

	c.addWorker(w3);
	c.print();
	new_line();

	c.addWorker(w4);
	c.print();
	new_line();

	c.addWorker(w5);
	c.print();
	new_line();

	c.sort();
	std::cout << "Sorted by salary: \n";
	c.print();
	new_line();

	c.removeByName("Ivan");
	c.removeByName("Martin");
	new_line();

	c.print();

	c.removeByName("Iva"); 
	new_line();

	c.print();
	new_line();

	c.removeByName("Anna");
	c.removeByName("Kalina");
	c.print();
	new_line();

	c.addWorker(w1);
	c.print();
}

int main() {
	testCompany();

	return 0;
}
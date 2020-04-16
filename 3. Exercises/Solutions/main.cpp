#include "Hospital.h"

void testHospital()
{
	Nurse n1("Simona", 3);
	Nurse n2("Anna", 1);

	Patient p1("Georgi Ivanov Georgiev", 30, "bronchial pneumonia", 3, &n1);
	Patient p2("Martin Petrov Ivanov", 50, "flu", 5, &n2);


	Hospital h("VMA", true);
	h.addNurse(n1);
	h.addNurse(n2);
	h.addPatient(p1);
	h.addPatient(p2);

	h.print();

	p1.callNurse();
	n1.help(p1);

	p2.callNurse();
	n2.help(p2);

	h.removeNurse(n2);
	h.removePatient(p1);

	h.print();
}

int main()
{
	testHospital();

	return 0;
}
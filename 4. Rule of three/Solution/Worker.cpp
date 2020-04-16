#include"Worker.h"


Worker::Worker(char const* name, char const* position, double salary) : m_name(nullptr), m_position(nullptr) {
	setName(name);
	setPosition(position);
	setSalary(salary);
}

Worker::Worker(Worker const& worker) : Worker(worker.m_name, worker.m_position, worker.m_salary) {}

Worker& Worker::operator=(Worker const& worker) {
	if (this != &worker) {
		setName(worker.m_name);
		setPosition(worker.m_position);
		setSalary(worker.m_salary);
	}
	return *this;
}

Worker::~Worker() {
	delete[] m_name;
	delete[] m_position;
}

void Worker::setSalary(double salary) {
	if (salary >= 0) {
		this->m_salary = salary;
	}
	else {
		this->m_salary = 0;
	}
}

void Worker::setName(char const* name) {
	if (name == nullptr) {
		name = "";
	}

	int len = strlen(name) + 1;
	delete[] this->m_name;
	this->m_name = new char[len];
	strcpy_s(this->m_name, len, name);
}

void Worker::setPosition(char const* position) {
	if (position == nullptr) {
		position = "";
	}

	int len = strlen(position) + 1;
	delete[] this->m_position;
	this->m_position = new char[len];
	strcpy_s(this->m_position, len, position);
}

void Worker::print() const {
	std::cout << "Worker name: " << m_name << std::endl;
	std::cout << "Worker position: " << m_position << std::endl;
	std::cout << "Worker salary: " << m_salary << std::endl;
}
#ifndef _WORKER_H
#define _WORKER_H

#include <iostream>

class Worker
{
private:
	char* m_name;
	char* m_position;
	double m_salary;

public:
	Worker(char const* name = nullptr, char const* position = nullptr, double salary = 0);
	Worker(Worker const& worker);
	Worker& operator=(Worker const& worker);
	~Worker();

	void setName(char const* name);
	void setPosition(char const* position);
	void setSalary(double salary);

	char const* getName() const { return m_name; }
	char const* getPosition() const { return m_position; }
	double getSalary() const { return m_salary; }

	void print() const;
};

#endif 
#ifndef _COMPANY_H
#define _COMPANY_H

#include "Worker.h"

class Company
{
private:
	char* m_name;
	Worker* m_workers;
	int m_capacity;
	int m_size;

	void copyWorkers(Company const& company);
	void resize(int newCapacity);
	void erase();

public:
	Company(char const* name = nullptr);
	Company(Company const& company);
	Company& operator=(Company const& company);
	~Company();

	void setName(char const* name);

	char const* getName() const { return m_name; }
	int getSize() const { return m_size; }
	int getCapacity() const { return m_capacity; }

	void addWorker(Worker const& newWorker);
	void removeByName(char const* name);

	void sort();
	void print() const;
};

#endif 
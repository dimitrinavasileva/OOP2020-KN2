#include"Company.h"
#include"Worker.h"

Company::Company(char const* name) : m_name(nullptr), m_size(0), m_capacity(1) {
	m_workers = new Worker[1];
	setName(name);
}

Company::Company(Company const& company) {
	setName(company.m_name);
	copyWorkers(company);
}

Company& Company::operator=(Company const& company) {
	if (this != &company) {
		erase();
		setName(company.m_name);
		copyWorkers(company);
	}
	return *this;
}

Company::~Company() {
	erase();
}

void Company::addWorker(Worker const& newWorker) {
	if (m_size == m_capacity)
		resize(m_capacity * 2);

	m_workers[m_size++] = newWorker;
}

void Company::removeByName(char const* name) {
	for (int i = 0; i < m_size; ++i) {
		if (strcmp(name, m_workers[i].getName()) == 0) {
			m_workers[i] = m_workers[--m_size];
			std::cout << "Worker " << name << " removed from company.\n";
			break;
		}
	}

	if (m_capacity / 4 >= m_size) {
		resize(m_capacity / 2);
		std::cout << "Capacity reduced twice!\n";
	}

}

void Company::resize(int newCapacity) {
	if (newCapacity == 0) {
		m_workers = new Worker[1];
		m_size = 0;
		m_capacity = 1;
	}
	else if (newCapacity >= m_size) {
		Worker* newWorkers = new Worker[newCapacity];

		for (int i = 0; i < m_size; ++i) {
			newWorkers[i] = m_workers[i];
		}

		delete[] m_workers;
		m_workers = newWorkers;

		m_capacity = newCapacity;
	}
	else {
		std::cout << "Possible loss of data! Did not change capacity!" << std::endl;
	}
}

void Company::erase() {
	delete[] m_name;
	delete[] m_workers;
}

void Company::copyWorkers(Company const& company) {
	m_workers = new Worker[company.m_capacity];
	m_capacity = company.m_capacity;
	m_size = company.m_size;

	for (int i = 0; i < company.m_size; ++i) {
		m_workers[i] = company.m_workers[i];
	}
}

void Company::setName(char const* name) {
	if (name == nullptr) {
		name = "";
	}

	int len = strlen(name) + 1;
	delete[] this->m_name;
	this->m_name = new char[len];
	strcpy_s(this->m_name, len, name);
}

void Company::sort() {
	for (int i = 0; i < m_size - 1; ++i) {
		int minIndex = i;
		for (int j = i + 1; j < m_size; ++j) {
			if (m_workers[j].getSalary() < m_workers[minIndex].getSalary())
				minIndex = j;
		}

		std::swap(m_workers[minIndex], m_workers[i]);
	}
}

void Company::print() const {
	std::cout << "Company's name: " << m_name << std::endl;
	std::cout << "Workers: " << m_size << std::endl;
	std::cout << "Capacity for workers: " << m_capacity << std::endl << std::endl;
	for (int i = 0; i < m_size; ++i) {
		m_workers[i].print();
		std::cout << std::endl;
	}

	if (m_size == 0) {
		std::cout << "No workers currently.\n";
	}
}

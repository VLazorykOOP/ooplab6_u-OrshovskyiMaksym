#include "Lab6Example.h"
#include <iostream>

void MenuExample() {
	std::cout << "     Menu Example   \n";
	std::cout << "    1   Example 1  \n";
	std::cout << "    2   Example 2  \n";
	std::cout << "    3   Example 3  \n";

	std::cout << "    4 or e  Exit \n";

}
void Example()
{
	std::cout << "OOP. Example for laboratory work #6.\n";

	char ch = '5';
	do {
		system("cls");
		MenuExample();
		ch = std::cin.get();

		std::cin.get();

		switch (ch) {
		case '1':  SpaceExample1::mainExample1(#include <iostream>
//task2

using namespace std;

class Employee {
protected:
    string name;
    int id;

public:
    Employee(string n, int i) : name(n), id(i) {}
    virtual float calculateSalary() = 0;
};

class HourlyEmployee : public Employee {
private:
    float hourlyRate;
    float hoursWorked;

public:
    HourlyEmployee(string n, int i, float r, float h) : Employee(n, i), hourlyRate(r), hoursWorked(h) {}
    virtual float calculateSalary() {
        return hourlyRate * hoursWorked;
    }
};

class SalariedEmployee : public Employee {
private:
    float salary;

public:
    SalariedEmployee(string n, int i, float s) : Employee(n, i), salary(s) {}
    virtual float calculateSalary() {
        return salary;
    }
};

class CommissionEmployee : public Employee {
private:
    float salesAmount;
    float commissionRate;

public:
    CommissionEmployee(string n, int i, float a, float r) : Employee(n, i), salesAmount(a), commissionRate(r) {}
    virtual float calculateSalary() {
        return salesAmount * commissionRate;
    }
};

int main() {
    HourlyEmployee hourlyEmployee("John", 1001, 10.0, 80.0);
    SalariedEmployee salariedEmployee("Jane", 1002, 3000.0);
    CommissionEmployee commissionEmployee("Jack", 1003, 10000.0, 0.1);

    cout << "Hourly Employee Salary: " << hourlyEmployee.calculateSalary() << endl;
    cout << "Salaried Employee Salary: " << salariedEmployee.calculateSalary() << endl;
    cout << "Commission Employee Salary: " << commissionEmployee.calculateSalary() << endl;

    return 0;
}
);   break;
		case '2':  SpaceExample2::mainExample2(


//task3

// Базовий клас "Водойма"
class WaterBody {
public:
    WaterBody() {}
    virtual ~WaterBody() {}

    virtual void printInfo() const {
        std::cout << "This is a water body." << std::endl;
    }
};

// Клас "Бухта", що успадковується від "Водойми"
class Bay : public WaterBody {
public:
    Bay(const std::string& name) : m_name(name) {}
    virtual ~Bay() {}

    virtual void printInfo() const override {
        std::cout << "This is a bay called " << m_name << "." << std::endl;
    }

private:
    std::string m_name;
};

// Клас "Залив", що успадковується від "Бухти"
class Gulf : public Bay {
public:
    Gulf(const std::string& name) : Bay(name) {}
    virtual ~Gulf() {}

    virtual void printInfo() const override {
        std::cout << "This is a gulf called " << m_name << "." << std::endl;
    }
};

// Клас "Море", що успадковується від "Водойми"
class Sea : public WaterBody {
public:
    Sea(const std::string& name) : m_name(name) {}
    virtual ~Sea() {}

    virtual void printInfo() const override {
        std::cout << "This is a sea called " << m_name << "." << std::endl;
    }

private:
    std::string m_name;
};

int main() {
    // Створюємо об'єкти класів і викликаємо метод printInfo()
    WaterBody* water = new WaterBody();
    Bay* bay = new Bay("San Francisco Bay");
    Gulf* gulf = new Gulf("Gulf of Mexico");
    Sea* sea = new Sea("Mediterranean Sea");

    water->printInfo(); // This is a water body.
    bay->printInfo(); // This is a bay called San Francisco Bay.
    gulf->printInfo(); // This is a gulf called Gulf of Mexico.
    sea->printInfo(); // This is a sea called Mediterranean Sea.

    // Звільняємо пам'ять
    delete water;
    delete bay;
    delete gulf;
    delete sea;

    return 0;
}


);   break;
		case '3':  SpaceExample3::mainExample3();   break;
		case '4':  return;
		case 'e':  return;
		}
		std::cout << " Press any key and enter\n";
		ch = std::cin.get();
	} while (ch != '6');

	return ;
}




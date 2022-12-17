#include <iostream>
#include <vector>


class Abonent
{
private:
	unsigned int m_ip;
	std::string m_name;
	std::string m_surname;

public:
	Abonent(int ip, std::string name, std::string surname)
	{
		m_ip = ip;
		m_name = name;
		m_surname = surname;
	}

	void Info()
	{
		std::cout << "Ip of abonent: " << m_ip<< '\n'<<\
			"Name of abonent: "<< m_name <<'\n' <<"Surname of abonent: "<< m_surname << '\n';
	}
};

class Provider
{
private:
	unsigned int m_id;
	std::string m_name;
	std::vector<Abonent*> m_abonents;

public:
	Provider(int id, std::string name)
	{
		m_id = id;
		m_name = name;
	}

	void AddAbonent(Abonent* abonent)
	{
		m_abonents.push_back(abonent);	
	}

	void PrintAbonent()
	{
		for (size_t i = 0; i < m_abonents.size(); i++) {
			m_abonents[i]->Info();
		}
	}
};

int main()
{
	const int n = 3;
	Provider* provider = new Provider(0, "Telecom");

	std::cout << "Input ip of abonent and his name and surname: " << std::endl;

	for (int i = 0; i < n; i++) {
		int id;
		std::string name;
		std::string surname;
		std::cin >> id >> name >> surname;
		std::cout << std::endl;
		Abonent* abonent = new Abonent(id, name, surname);
		provider->AddAbonent(abonent);
	}
	provider->PrintAbonent();

	delete provider;

	return 0;
}
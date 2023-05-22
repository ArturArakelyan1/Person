#include"person.hpp"

Person::Person() : m_age(0), m_name("") {};
Person::~Person() = default;
Person::Person(const Person& srh)
{
    m_age = srh.m_age;
    m_name = srh.m_name;
}
void Person::Swap(Person& tmp) noexcept {
    swap(m_age,tmp.m_age);
    swap(m_name,tmp.m_name);
}
Person& Person::operator=(const Person& tmp)
{
    Person tmp2{tmp};
    Swap(tmp2);
    return *this;
}
Person& Person::operator=(Person&& hm) noexcept
{
    if (this == &hm)
    {
        return *this;
    }
    swap(*this,hm);
    return *this;
}
Person::Person(Person&& th) noexcept
{
    swap(*this,th);
}

int Person::GetAge()const
{
    return m_age;
}
std::string Person::GetName()const
{
    return m_name;
}
void Person::SetAge(int age)
{
    m_age = age;
}
void Person::SetName(std::string name)
{
    m_name =  name;
}


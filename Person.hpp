#include<iostream>
#include<string>
#include<utility>

template<typename T>
void swap(T& first, T& second) noexcept
{
    T tmp {std::move(first)};
    first = std::move(second);
    second = std::move(tmp);
}

class Person {
    private:
        std::string m_name{""};
        int m_age{0};
    public:
        Person();
        ~Person();
        Person(const Person& srd);
        void Swap(Person& th) noexcept;
        Person& operator= (const Person& tmp);
        Person(Person&& rvr) noexcept;
        Person& operator= (Person&& mao) noexcept;
        void SetName(std::string name);
        void SetAge(int age);
        std::string GetName() const;
        int GetAge() const;
};
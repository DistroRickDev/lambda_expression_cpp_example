#include <iostream>
#include <functional>
#include <vector>
#include <memory>
#include <algorithm>

class Person{
    private:
        std::string name;
    public:
        Person(const std::string& name)
        {
            this->name = name;
        }
        std::string getName() const;
};

std::string Person::getName() const
{
    return name;
}

int main()
{
    const std::string title = "Representative: "; 
    auto gaetz = std::make_shared<Person> ("Gaetz");
    auto jordan = std::make_shared<Person> ("Jordan");
    auto rubio = std::make_shared<Person> ("Rubio");

    std::vector<std::shared_ptr<Person>> people = {gaetz, jordan, rubio};


    auto printName = [&title](const auto& pointer){std::cout << title << pointer->getName() << std::endl; return;};

    for(auto it: people)
    {
        printName(it);
    }

    return 0;
}
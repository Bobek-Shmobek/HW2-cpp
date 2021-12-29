#include <iostream>
#include "Employee.h"
#include "Citizen.h"
#include "Skill.h"


using std::string;
using namespace mtm;

//Constructor.
Employee::Employee(double new_id, string new_first_name, string new_last_name, double new_birth_year) :
Citizen(new_id, new_first_name, new_last_name, new_birth_year), salary(0), score(0) //set = empty?create? !!!!
{

}

//Destroyer
Employee::~Employee()
{

}

//**//
//Methods start here

int Employee::getScore() const
{
    return this->score;
}

double Employee::getSalary() const
{
    return this->salary;
}

void Employee::learnSkill(const Skill& skill)
{
//add this after we have a set!!!!
}

void Employee::forgetSkill(const Skill& skill)
{
//add this after we have a set!!!!
}

bool Employee::hasSkill(const Skill& skill)
{
//add this after we have a set!!!!
}

void Employee::setSalary(int raise)
{
    this->salary += raise;
}

void Employee::setScore(int score_to_add)
{
    this->score += score_to_add;
}

//Methods end here
//**//

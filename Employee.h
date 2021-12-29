#ifndef UNTITLED_EMPLOYEE_H
#define UNTITLED_EMPLOYEE_H
#include <set>
#include <iostream>
#include "Citizen.h"
#include "Skill.h"

using std::string;
using std::set;

namespace mtm{

class Employee : public Citizen {
 
    double salary;
    int score;
    set< Skill& > skill_set;

    
    public:

    Employee(double new_id, string new_first_name, string new_last_name, double new_birth_year);
    ~Employee();

    int getScore() const;
    double getSalary() const;
    
    void learnSkill(const Skill& skill);
    void forgetSkill(const Skill& skill);
    bool hasSkill(const Skill& skill);

    void setSalary(int raise);
    void setScore(int score_to_add);


//ADD THESEEEEEEEE!!!
    //printShort
    //printLong
    //clone



};

}


#endif //UNTITLED_EMPLOYEE_H

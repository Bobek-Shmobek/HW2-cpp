#ifndef UNTITLED_CITIZEN_H
#define UNTITLED_CITIZEN_H
#include <iostream>

using std::string;

namespace mtm{

class Citizen {
 
    double id;
    string first_name;
    string last_name;
    double birth_year;
    
    
    public:

    Citizen(double id, string first_name, string last_name, double birth_year);
    Citizen(const Citizen& citizen_to_copy);
    ~Citizen();

    double getId() const;
    string getFirstName() const;
    string getLastName() const;
    double getBirthYear() const;

    //Compare operators.


    //Add printshort printlong and clone methods.

};


//Compare operators.

bool operator <(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator >(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator <(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator ==(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator !=(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator <=(const Citizen& Citizen1, const Citizen& Citizen2);
bool operator >=(const Citizen& Citizen1, const Citizen& Citizen2);

}


#endif //UNTITLED_CITIZEN_H
#include "addEmployee.hpp"

int addAnEmployee(employee arr[], string name, string birthday, string emailid, int count)
/*TODO 3: complete this function
** this function will add a record in the struct array at index count
** it will return the next available index in the array
*/
{
    employee new_employee;
    new_employee.name = name;
    new_employee.birthday = birthday;
    new_employee.email = emailid;
    arr[count] = new_employee;

    return count + 1;
}

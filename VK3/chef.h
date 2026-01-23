#ifndef CHEF_H
#define CHEF_H
#include <string>
using namespace std;

class Chef
{
public:
    Chef();
    Chef(string);
    ~Chef();

    string getName();
    void setName(string);

    int makeSalad(int);
    int makeSoup(int);

protected:
    string chefName;

};

#endif // CHEF_H

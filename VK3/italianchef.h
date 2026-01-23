#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include <string>
using namespace std;

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ItalianChef(string);
    ~ItalianChef();

    bool askSecret(string, int, int);

private:
    int flour;
    int water;
    string password = "pizza";

    int makePizza();
};

#endif // ITALIANCHEF_H

#include "\z\ace\addons\main\script_macros.hpp"

// ACE3 reference macros
#define ACE_PREFIX ace

#define ACEGVAR(component,variable) TRIPLES(ACE_PREFIX,component,variable)
#define QACEGVAR(component,variable) QUOTE(ACEGVAR(component,variable))

#define ACEFUNC(component,function) TRIPLES(DOUBLES(ACE_PREFIX,component),fnc,function)
#define QACEFUNC(component,function) QUOTE(ACEFUNC(component,function))

#define ACELSTRING(component,string) QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,component),string))
#define ACECSTRING(component,string) QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,component),string))

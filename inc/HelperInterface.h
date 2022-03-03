#ifndef HELPER_INTERFACE_H
#define HELPER_INTERFACE_H

#include <string>

class HelperInterface
{
public:
    virtual ~HelperInterface() = default;
    virtual void readTheString(std::string s) = 0;
    virtual void readTheCharArray(const char* s) = 0;
    virtual void modifyTheString(std::string& s) = 0;
};

#endif //HELPER_INTERFACE_H

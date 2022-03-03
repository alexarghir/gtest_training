#ifndef MOCK_HELPER_INTERFACE_H
#define MOCK_HELPER_INTERFACE_H

#include <HelperInterface.h>

class MockHelperInterface: public HelperInterface
{
public:
    MOCK_METHOD1(readTheString,
                 void(std::string s));
    MOCK_METHOD1(readTheCharArray,
                 void(const char* s));
    MOCK_METHOD1(modifyTheString,
                 void(std::string& s));
};

#endif //MOCK_HELPER_INTERFACE_H

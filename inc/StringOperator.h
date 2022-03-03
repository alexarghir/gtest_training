#ifndef LAB_RAT_H
#define LAB_RAT_H

#include <string>
#include <HelperInterface.h>

class StringOperator {
public:
    StringOperator(HelperInterface& helperInterface);
    void doTheFlow(std::string& arg);

private:
    HelperInterface& _helperInterface;
};

#endif //LAB_RAT_H

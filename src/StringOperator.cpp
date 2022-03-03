#include "StringOperator.h"


StringOperator::StringOperator(HelperInterface& helperInterface):
_helperInterface(helperInterface){ }


void StringOperator::doTheFlow(std::string& arg)
{
    _helperInterface.readTheString(arg);

    _helperInterface.readTheCharArray(arg.c_str());

    _helperInterface.modifyTheString(arg);
}

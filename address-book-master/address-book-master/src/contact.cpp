#include "contact.h"

bool Contact::isValidToAdd() const
{
    /*
    Adding a new contact requires:
    -first name
    -last name
    -phone number
    */

    bool hasNames = !(firstName.empty() || lastName.empty() || address.empty() || email.empty() || bloodgroup.empty());

    if(hasNames && !phoneNumber.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Contact::isEmpty() const
{
    if(firstName.empty() && 
        lastName.empty() &&
        phoneNumber.empty() && 
        address.empty() && 
        email.empty() &&
        bloodgroup.empty() )
    {
        return true;
    }
    else
    {
        return false;
    }
}
    

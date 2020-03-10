#pragma once
#include "FieldTypes.hpp"
#include <memory>

class Field
{
public:
    bool isVisible() const;
    void makeVisible();

    virtual void action() = 0;
    virtual FieldType getType() const = 0;

    bool _isVisible;

/* protected: */
/*     bool _isVisible; */
};

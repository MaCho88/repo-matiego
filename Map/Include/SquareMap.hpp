#pragma once
#include "Map.hpp"

class SquareMap : public Map
{
public:
    const FieldList& getFields();
    SquareMap(const int mapSize);
    char printField(const Field& field);

private:
    FieldList _fieldList;
};

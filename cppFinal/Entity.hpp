#ifndef ENTITY_HPP_INCLUDED
#define ENTITY_HPP_INCLUDED

class Entity {
public:
    virtual void display() const = 0;
    virtual ~Entity() = default;
};

#endif // ENTITY_HPP_INCLUDED

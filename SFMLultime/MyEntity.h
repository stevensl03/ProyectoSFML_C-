#pragma once
#include <SFML/Graphics.hpp>
#include "Collisionable.h"


class MyEntity : public sf::Drawable, public sf::Transformable, public Collisionable
{
public:

    // add functions to play with the entity's geometry / colors / texturing...
    sf::Sprite _sprite;
    sf::Texture _texture;
    MyEntity();
private:
    
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
    {
        states.transform *= getTransform(); 
        states.texture = &m_texture;
        target.draw(m_vertices, states);
    }

    sf::VertexArray m_vertices;
    sf::Texture m_texture;
};


  //  MyEntity entity;

// you can transform it
//entity.setPosition(10.f, 50.f);
//entity.setRotation(45.f);

// you can draw it
//window.draw(entity);
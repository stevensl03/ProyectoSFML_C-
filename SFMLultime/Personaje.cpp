#include "Personaje.h"

Personaje::Personaje(){

    _velocity = {8,8};

    _texture.loadFromFile("sonic.png");

    _sprite.setTexture(_texture);

   // _sprite.setOrigin(_sprite.getTexture()->getSize().x / 2.f, _sprite.getTexture()->getSize().y/2.f);
    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height);
}

Sprite Personaje::get_sprite()
{
    return _sprite;
}

void Personaje::update(){

    _velocity = { 0, 0 };


    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        _velocity.y = -4;
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        _velocity.y = 4;
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        _velocity.x = -4;
    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        _velocity.x = 4;

    }
    _sprite.move(_velocity);

    if (_velocity.x < 0) {
        _sprite.setScale(-1, 1);
    }
    else if (_velocity.x > 0) {
        _sprite.setScale(1, 1);
    }


    if (_sprite.getGlobalBounds().left < 0) {
        _sprite.setPosition(_sprite.getOrigin().x, _sprite.getPosition().y);

    }
    if (_sprite.getGlobalBounds().top < 0) {
        _sprite.setPosition(_sprite.getPosition().x, _sprite.getOrigin().y);
    }
    if (_sprite.getPosition().x + _sprite.getGlobalBounds().width / 2 > 1200) {
        _sprite.setPosition(1200 - _sprite.getGlobalBounds().width / 2, _sprite.getPosition().y);

    }
    if (_sprite.getPosition().y > 800) {
        _sprite.setPosition(_sprite.getPosition().x, 800);
    }
}

void Personaje::draw(RenderTarget& target, RenderStates states)const{
    target.draw(_sprite, states);
}

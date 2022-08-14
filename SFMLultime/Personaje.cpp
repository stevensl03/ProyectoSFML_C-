#include "Personaje.h"






void Personaje::addVelocity(float velocity){
    _velocity += {velocity,velocity};
}

Personaje::Personaje(){

    _velocity = {4,4};

    _texture.loadFromFile("imagenes/sonic.png");

    _sprite.setTexture(_texture);

    _sprite.setOrigin(_sprite.getGlobalBounds().width/2, _sprite.getGlobalBounds().height);

    bufferDaño.loadFromFile("sonidos/daño.wav");
    sonidoDaño.setBuffer(bufferDaño);
}

void Personaje::respawn()
{
    _sprite.setPosition(0, 0);
}



void Personaje::update(){

     Vector2f velocity = { 0, 0 };

    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        velocity.y = -_velocity.y;
    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        velocity.y = _velocity.y;
    }
    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        velocity.x = -_velocity.x;
    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        velocity.x = _velocity.x;

    }
    _sprite.move(velocity);

    if (velocity.x < 0) {
        _sprite.setScale(-1, 1);
    }
    else if (velocity.x > 0) {
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

FloatRect Personaje::getBounds() const
{
    return _sprite.getGlobalBounds();
}

void Personaje::hited(){
    sonidoDaño.play();
    respawn();
}


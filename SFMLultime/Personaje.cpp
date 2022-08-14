#include "Personaje.h"

/*enum class PersonajeState {
    Idle = 0,
    Move_Left,
    Move_Right,
    Move_Down,
    Move_Up

    
};*/



void Personaje::addVelocity(float velocity){
    _velocity += {velocity,velocity};
}

Personaje::Personaje(){
  
    _frame = 0;
    _velocity = {4,4};

    _texture.loadFromFile("imagenes/sonic2.png");

    _sprite.setTexture(_texture);
    _sprite.setTextureRect({ 493,169,49,40 });
    _sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);



    _bufferDaño.loadFromFile("sonidos/daño.wav");
    _sonidoDaño.setBuffer(_bufferDaño);
}

void Personaje::respawn()
{
    _sprite.setPosition(0, 0);
}



void Personaje::update(){

     Vector2f velocity = { 0, 0 };

     _frame += 0.2;

     if (_frame >= 4) {
         _frame = 0;
     }


    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        velocity.y = -_velocity.y;
        _sprite.setTextureRect({ 493 + int(_frame) * 50,169,51,40 });

    }
    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        velocity.y = _velocity.y;
        _sprite.setTextureRect({ 493 + int(_frame) * 50,169,51,40 });

    }
    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        velocity.x = -_velocity.x;
        _sprite.setTextureRect({ 493 + int(_frame) * 50,169,51,40 });

    }
    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        velocity.x = _velocity.x;
        _sprite.setTextureRect({ 493 + int(_frame) * 50,169,51,40 });

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
    if (_sprite.getPosition().x + _sprite.getGlobalBounds().width / 2 > WIDTH) {
        _sprite.setPosition(WIDTH - _sprite.getGlobalBounds().width / 2, _sprite.getPosition().y);

    }
    if (_sprite.getPosition().y > HEIGHT) {
        _sprite.setPosition(_sprite.getPosition().x, HEIGHT);
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
    _sonidoDaño.play();
    respawn();
}


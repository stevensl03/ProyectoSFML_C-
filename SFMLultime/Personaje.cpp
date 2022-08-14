#include "Personaje.h"


void Personaje::addVelocity(float velocity){
    _velocity += {velocity,velocity};
}

void Personaje::setVelocity(float velocity){
    _velocity = { velocity,velocity };
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


void Personaje::cmdComandos(){

    _movePosition = { 0,0};
    _state = PersonajeState::Idle;

    if (Keyboard::isKeyPressed(Keyboard::Up)) {
        _movePosition.y = -_velocity.y;
        _state = PersonajeState::Move;
    }

    if (Keyboard::isKeyPressed(Keyboard::Down)) {
        _movePosition.y = _velocity.y;
        _state = PersonajeState::Move;
    }

    if (Keyboard::isKeyPressed(Keyboard::Left)) {
        _movePosition.x = -_velocity.x;
        _state = PersonajeState::Move;
     }

    if (Keyboard::isKeyPressed(Keyboard::Right)) {
        _movePosition.x = _velocity.x;
        _state = PersonajeState::Move;
    }

}



void Personaje::update(){

    switch (_state)
    {
    case PersonajeState::Idle:
        _sprite.setTextureRect({10,39,50,40});

        break;
    case PersonajeState::Move:
        _frame += 0.2;

        if (_frame >= 4) {
            _frame = 0;
        }

        _sprite.setTextureRect({ 493 + int(_frame) * 50,169,51,40 });
        _sprite.move(_movePosition);

        if (_movePosition.x < 0) {
            _sprite.setScale(-1, 1);

        }
        else if (_movePosition.x > 0) {
            _sprite.setScale(1, 1);

        }
        break;
    default:
        break;
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


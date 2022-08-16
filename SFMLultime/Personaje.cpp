#include "Personaje.h"


void Personaje::addVelocity(float velocity){
    _velocity += {velocity,velocity};
}

void Personaje::setVelocity(float velocity){
    _velocity = { velocity,velocity };
}

Vector2f Personaje::getVelocity()
{
    return _velocity;
}

Personaje::Personaje(){
  
    _frame = 0;
    _velocity = {4,4};

    _texture.loadFromFile("imagenes/personaje5.png");

    _sprite.setTexture(_texture);
    _sprite.setTextureRect({ 49,0,42,74 });
    _sprite.setOrigin(_sprite.getGlobalBounds().width / 2, _sprite.getGlobalBounds().height);


    _bufferDaño.loadFromFile("sonidos/daño.wav");
    _sonidoDaño.setBuffer(_bufferDaño);

    proyectil = new Proyectil;
    proyectil->respawn(_sprite);

}


void Personaje::respawn()
{
    _sprite.setPosition(0, 0);
}


void Personaje::cmdComandos(ControllerManager &controller){

    _movePosition = { 0,0};
    _state = PersonajeState::Idle;

    //Keyboard::isKeyPressed(Keyboard::Up
    if (controller.isPress(ControllerManager::Buttons::Up)) {
        _movePosition.y = -_velocity.y;
        _state = PersonajeState::MoveUp;
    }

    if (controller.isPress(ControllerManager::Buttons::Down)) {
        _movePosition.y = _velocity.y;
        _state = PersonajeState::MoveDown;
    }

    if (controller.isPress(ControllerManager::Buttons::Left)) {
        _movePosition.x = -_velocity.x;
        _state = PersonajeState::Move;
     }

    if (controller.isPress(ControllerManager::Buttons::Right)) {
        _movePosition.x = _velocity.x;
        _state = PersonajeState::Move;
    }

}



void Personaje::update(){

    switch (_state)
    {
    case PersonajeState::Idle:
        _sprite.setTextureRect({ 49,0,42,74 });

        break;
    case PersonajeState::MoveUp:
        _sprite.setTextureRect({ 96,0,42,74 });
        _sprite.move(_movePosition);
        break;

    case PersonajeState::MoveDown:
        _sprite.setTextureRect({ 7,160,38,72 });
        _sprite.move(_movePosition);

        break;

  

    case PersonajeState::Move:
   
        _sprite.setTextureRect({ 4,78,41,78 });
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


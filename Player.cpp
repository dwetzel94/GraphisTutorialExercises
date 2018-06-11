#include "Player.h"
#include "Animation.h"
#include "Animation.cpp"


using namespace std ;
using namespace sf ;


Player::Player(Texture* texture, Vector2u imageCount, float switchTime, float speed) : changedir(texture, imageCount, switchTime)
{
    this->speed = speed ;
    row = 0 ;
    faceRight = true ;
    
    body.setSize(Vector2f(150, 100)) ;
    body.setPosition(206.0f, 206.0f);
    body.setTexture(texture) ;
}

Player::~Player()
{

}

void Player::Update(float deltaTime) 
{
    Vector2f movement(0.0f, 0.0f) ;
    
    if(Keyboard::isKeyPressed(Keyboard::Left))
        movement.x -= speed * deltaTime ;
    if(Keyboard::isKeyPressed(Keyboard::Right))
        movement.x += speed * deltaTime ;
    
    if(movement.x == 0.0f)
    {
        row = 0 ;
    }
    else
    {
        row = 1 ;
        if(movement.x > 0.0f)
        {
            faceRight = true ;
        }
        else
        {
            faceRight = false ;
        }
    }
    
    changedir.Update(row, deltaTime, faceRight);
    body.setTextureRect(changedir.uvRect);
    body.move(movement) ;

}

void Player::Draw(RenderWindow& window)
{
    window.draw(body);
}

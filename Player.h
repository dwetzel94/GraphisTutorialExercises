#ifndef PLAYER_H
#define PLAYER_H
#include "Animation.h"


using namespace std ;
using namespace sf ;


class Player
{
public:
    //Default constructor
    Player(Texture* texture, Vector2u imageCount, float switchTime, float speed);
    
    //Destructor
    ~Player();
    
    void Update(float deltaTime) ;
    void Draw(RenderWindow& window) ;
    
private:
    RectangleShape body ;
    Animation changedir ;
    unsigned int row ; //unsigned means it will not be less than zero
    float speed ;
    bool faceRight ;

};

#endif // PLAYER_H

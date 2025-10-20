#include "PowerupSecondaryBall.h"

PowerupSecondaryBall::PowerupSecondaryBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
    : PowerupBase(window, paddle, ball)
{
    _sprite.setFillColor(extraBallEffectsColour); // Same colour as SmallPaddle
}

PowerupSecondaryBall::~PowerupSecondaryBall()
{
}

std::pair<POWERUPS, float> PowerupSecondaryBall::applyEffect()
{
    _ball->newBall();
    return { none, 0.0f };
}

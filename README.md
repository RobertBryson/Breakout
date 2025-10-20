# Breakout

W Kavanagh \& N Merchant. Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball \[where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist

<Add information to this section about the time you've taken for this task along with a professional changelist.>

Robert Bryson

Fixed compiler error - Circular dependency caused by include "PowerupFireBall.h" in "PowerupBase.h", removed include as was unused - \*1 minute

Added mouse controls - New function "followMouse()" in Paddle. Player is given choice, which is stored as bool and passed to game manager, in update calls appropriate control scheme - \*20 minutes

Parameterised powerUpChance - added variable used for rand() that decides when power up spawns - \*2 minutes

Screen Shake - On lost life sets shake bool to true, this is checked in update along with other parameters such as intervals, and length, to shake the components of the scene - \*25 minutes












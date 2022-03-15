# 2D-Space-Shooter-Game
A 2D Space Shooter game made in C++ using SDL library. Collaborated with https://github.com/orelkris

This 2D Space Shooter game has the following features: 
1. Score & Lives System
2. Pick-up System (Shield Pickup and Lives Pickup)
3. Enemy System
4. Game-end condition
5. UI Heads-up display (HUD)
6. UI Screens

Gameplay:
The player is able to move the spaceship around with A, W, S, D keys and shoot asteroids using the SPACE bar. Colliding with an asteroid will cause your ship to be destroyed and respawn at the center of the screen and you will lose a life. Pickups such as shields and hearts will provide the player with a shield that makes the players invincible for 10 seconds and health packs which will provide the player with additional lives. Enemy ships are to be destroyed or avoided by the player. Each ship destroyed grants the player points depending on the asteroids size. Once all asteroids are destroyed, the
game is finished and you are presented your score.

Development:
This game was developed using the SDL library and was collaberated with Kristina Orel during the 5th semester of our Game Engineering course. The game engine was developed
using C++ and sprites were rendered using textures in SDL. What appears on the screen is tracked using game states.

Scoring System:
The player is able to shoot asteroids which are set to spawn and generate at a random size. Depending on the size of the asteroid destroyed the player will gain a set amount of points.
At 0.5 size grants 1 point, 1 size grants 10 points, 1.5 size grands 20 points and 2 size grants 30 points.

Enemy System (in progress):
The enemy currently moves along the y-axis and shoot bullets, thus the player is easily able to avoid this by not entering its line of vision. 

Pick-up System:
There are two items that the player is able to pick-up: shield and hearts. The shield allows the player to gain invincibility for 10 seconds and hearts which provides life points
to the player. 

UI-System
The score is displayed at the top left of the screen and the life points are displayed at the bottom right of the screen. There is a main menu that is displayed at the start of the game. 
These get rendered using different game states.

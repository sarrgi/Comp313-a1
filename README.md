## COMP313 - Assignment 1

### Finn Sargisson

### Weighting
Control Systems (30) - User Interface (20) - Interactions (30) - Documentation(20) - Video (0)


### "Why Did I Pick 2D - The Game"

#### Controls 
- Jump - W
- Move Left - A
- Move Right - D
- Pause - Tab/P 
- Pause and Main Menu - Mouse interaction

### How to Start

- Navigate to Content/Levels and double clicking "Home" to load the home level.
- Press Play in the Unreal editor to launch the game.


#### Explanation of game 
This is a very basic 2D platformer, with the movement being loosely based on Hollow Knight and Celeste, but without the polish. Similaraly to these two games, the player's movement is the main action of this game.

The game has two interactable items, Enemies and Collectables.
- Enemies are the red squares with an unfirendly stare. They just move in one direction along the x plane until they collide with another object. This will cause them to turn around.
If an enemy touches a player then the player will die and be reset to the start of the level.
- Collectables are a pickupable item by the player. If the play picks up an item at any level then their score is increased by one. There is the option to animate these or not.

Levels are completed by standing on the finish tiles.

The player's score will stay with them throughout their journey. However, it will be reset by either leaving to the main menu, changing level, or finishing the game.

You can pause the game at anytime with Tab/P.

### Hardest Part to Get Working

I spent a lot of time experimenting and learning Paper2D; Unreal's native 2D library. This came with some upsides like the TileMap system which allows for super easy and fast level creation.
It however also came with a lot of issues.

One of my earliest ideas was a box which the user could push around and interact with. This relatively simple concept caused an immense headache.
The key issue was that both the player and box actors used 3d physics, which I was trying to get working on a 2d Plane. I tried all sorts of systems to lock both of these characters to only these two planes, and for the most part th8s worked. 
However, I found that if these two objects collided with a reasonable amount of force then they could still be slightly misaligned along the y axis, which was enough to knock them off of the map and become unusable. I couldn't find a system which 
both allowed an interaction with enough gravity and a solid collision system. In the end I didn;t use these objects, but I do still have custom blueprints for the box in the Blueprints directory.

Another huge difficulty I had was animating the collectable items. This had a similar issue to the box where if the player interacted with the collectable on a rotated angle then the player's y position would be adjusted knocking them off the map, 
despite the player being locked to the XZ plane. I've still left the animation in, as it can be used as a decoration/extended to other objects. 

### Most Interesting Part

While this game is incredibly bare bones as I had prioritised learning elements over game mechanics, I did still get the dash working mostly how I wanted. In general a player is only able to dash once per jump. 
However similarly to the dash replensihing systems in Celeste, I've made it to so that the collectable items reset the player's dash upon collision so that a user will be able to dash mutliple times per jump. 
Admittidly it's not the most polished and the player sometimes bouncies of the items funny, but I feel like once tuned this features opens up the possibilty for some higher level platforming.
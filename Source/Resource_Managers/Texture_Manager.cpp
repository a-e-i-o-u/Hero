#include "Texture_Manager.h"

Texture_Manager::Texture_Manager()
{
    std::string path ("Res/Textures/");

    registerResource(Texture_ID::Splash_SFML,   path + "Splash/SFML.png");
    registerResource(Texture_ID::Splash_MH,     path + "Splash/MatthewHopson.png");


    registerResource(Texture_ID::Player_Legs,           path + "Player_Legs.png");
    registerResource(Texture_ID::Player_Body_Shirt,     path + "Player_Body_Shirt.png");
    registerResource(Texture_ID::Player_Head_None,      path + "Player_Head_None.png");
    registerResource(Texture_ID::Player_Shield_Wood,    path + "Wood_Shield.png");

    registerResource(Texture_ID::Zone_Village,          path + "Zone_1.png");
}
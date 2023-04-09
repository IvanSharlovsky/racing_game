#ifndef TRACK_H
#define TRACK_H

#include <SDL.h>
#include <vector>

#include "tile.h"
#include "define.h"

class Map
{
    public:
    Map();
    SDL_Surface* Surf_Tileset;
    bool OnLoad(char* File); //загружает карту из файла
    void OnRender(SDL_Surface* Surf_Display, int MapX, int MapY); //рисут карту и размещает все плитки на их места
    //MapX, MapY указывают, где отображать карту на экране

    private:
    std::vector<Tile> TileList;//хранит список всех плиток карты
};

#endif // TRACK_H
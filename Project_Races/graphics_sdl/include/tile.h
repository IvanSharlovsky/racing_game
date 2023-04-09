
enum
{
    TILE_TYPE_NONE = 0
};

class Tile
{
    public:
    Tile();
    int TileID; //индивидуальное число для каждой клетки
    int TileType; //1 - клетка занята, 0 - нет
};

Tile::Tile()
{
    TileID = 0;
    TileType = TILE_TYPE_NONE;
}
//карта в формате текстового файла, состоит из клеток, каждая клетка хранит два значения - ее занятость и тип клетки


#include <SDL3/SDL_rect.h>
extern int SCREEN_WIDTH;
extern int SCREEN_HEIGHT;
class square{
    private:
    SDL_Rect shape;
    
    public:;
    void move(int x, int y){
        shape.x = x;
        shape.y = y;
    };
    void relocate(int x, int y){
        shape.x += x;
        shape.y += y;
    };
};
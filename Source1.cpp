
typedef enum {
    RED = 41,
    GREEN,
    YELLOW,
    BLUE,
    PURPLE,
    CYAN,
    WHITE,
    BLACK = 0,
}Color;

typedef enum {
    EMPTY = -1,
    I,
    J,
    L,
    O,
    S,
    T,
    Z
}ShapeId;


typedef struct {
    ShapeId shape;
    Color color;
    int size;
    char rotates[4][4][4];
}Shape;


typedef struct {
    Color color;
    ShapeId shape;
    bool current;
}Block;

Block canvas[CANVAS_HEIGHT][CANVAS_WIDTH];



Shape{
    .rotates = {
        {

        }
    }
}

int main() {
    Color cur;
    //有幾種方塊
    for (int i = 0; i < 7; i++) {
        for (int r = 0; r < 4; r++) {
            //印出方塊樣式
            for (int s = 0; s < shape[i].size; s++) {
                if (shape[i].rotates[r][s][t]) {
                    cur = WHITE;
                }
                else {
                    cur = shape[i].colar;
                }
            }

        }
    }
}
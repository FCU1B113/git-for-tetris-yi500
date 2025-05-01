#include<stdio.h>
#include<stdbool.h>

#define CANVAS_WIDTH 10
#define CANVAS_HEIGHT 20


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

typedef struct {
    int x;
    int y;
    int score;
    int rotate;
    int falltime;

    ShapeId queue[4];
}State;

Shape{
    {
        .shape = I,
        .color = CYAN,
        .size = 4,
        .rotates = {
            {
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0},
                {0,0,0,0},
            },
            {
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
                {0,0,1,0},
            },
            {
                {0,0,0,0},
                {0,0,0,0},
                {1,1,1,1},
                {0,0,0,0},
            },
            {
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
                {0,1,0,0},
            }
        }
        
    
    },{
        .shape = 0;
            .color = WHITE;
            .size = 2;
            .rotates = {
                {
                    {1,1},
                    {1,1}
                },
                {
                    {1,1},
                    {1,1}
                },{
                    {1,1},
                    {1,1}
                },{
                    {1,1},
                    {1,1}
                }
            }
    },{
        .shape = J;
        .color = BLUE;
        .size = 3;
        .rotates = {
            {

            }
        }
    },{
        .shape = L;
        .color = YELLOW;
        .size = 3;
        .rotates = {
            {

            }
        }
    },{
        .shape = S,
		.color = GREEN,
		.size = 3,
        .rotates = {
            {

            }
        }
    },{
        .shape = T;
        .color = PURPLE;
        .size = 3;
        .rotates = {
            {

            }
        }
    },{
        .shape = Z;
        .color = RED;
        .size = 3;
        .rotates = {
            {

            }
        }
    }
    12345


}



void setBlock(Block* block, Color color, ShapeId shape, bool current){

}

void resetBlock(Block* block)



int main() {
    State struct {
        .x = 0;
        .y = 0;
        .score = 0;
        .rotate = 0;
        .falltime = 0;
    
        ShapeId queue[4];
    };


    Block canvas[CANVAS_HEIGHT][CANVAS_WIDTH];
    
    for(int i = 0; i<CANVAS_HEIGHT; i ++){
        for(int j = 0; j < CANVAS_WIDTH; j ++){
            resetBlock(&canvas[i][j]);
        }
    }

    Shape shapeData = shape[1];

    for(int i = 0; i<CANVAS_HEIGHT; i ++){
        for(int j = 0; j < CANVAS_WIDTH; j ++){
            if(shapeData.rotate[i][j] == 1) 
            setBlock(&canvas[state.y +　][state.y]);
        }
    }
    
    for(int i = 0; i<CANVAS_HEIGHT; i ++){
        printf("|");
        for(int j = 0; j < CANVAS_WIDTH; j ++){
            printf("-1");
            
        }printf("\n");
    }
    
    
    
    
    
    
    
    
    /*看圖形
    Color cur;
    //���X�ؤ��
    for (int i = 0; i < 7; i++) {
        for (int r = 0; r < 4; r++) {
            //�L�X����˦�
            for (int s = 0; s < shape[i].size; s++) {
                if (shape[i].rotates[r][s][t]) {
                    cur = WHITE;
                }
                else {
                    cur = shape[i].colar;
                }
            }

        }
    }*/
}
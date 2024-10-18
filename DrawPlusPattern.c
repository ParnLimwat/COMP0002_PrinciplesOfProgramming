#include "graphics.h"
#include <stdio.h>


int ite(int row, int col){
int boolean[] = {0,0,0,1,0,1,1,1,0,1,0,0,0,1,0,1,1,1,0,1};
int index = (row * 3) + col;
if (index > 19){
    index = index % 20;
}
return boolean[index];

}

int main(void)
{

    for (int i = 0; i < 20; i ++){
        for(int j = 0; j < 20; j ++){
            if (ite(i,j) == 1){
   
                setColour(blue);
                fillRect(i*15,j*15,(i*15)+15,(j*15)+15);
            }
            else{
        
                setColour(yellow);
                fillRect(i*15,j*15,(i*15)+15,(j*15)+15);
            }
       
        }
  
    }
    setColour(white);
    fillRect(15*20,0,500,300);

 return 0;
}
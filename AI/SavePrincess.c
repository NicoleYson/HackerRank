#include <stdio.h>
#include <string.h>
#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101]){
    int row, col, y, x;
    short mario[2], princess[2]; //declaring short arrays of size 2

  for(row = 0; row < n; row++) { //traverse the 2d array by rows and cols
    for(col = 0; col < n; col++) {
      if (grid[row][col] == 'm') { //if current index contains the bot 'm'
        mario[0] = row; //set x coordinate portion of mario array to current row
        mario[1] = col; //set y coordinate portion of mario array to current column 
      }
      if (grid[row][col] == 'p') { //if current index contains Princess Peach 'p'
        princess[0] = row;
        princess[1] = col;
      }
    }
  }

  if ((y = princess[0] - mario[0]) < 0) { //if delta of y coordinates are negative
    for(; y < 0; y++)
      printf("UP\n");
  } else {
    for(; y > 0; y--)
      printf("DOWN\n");
  }

  if ((x = princess[1] - mario[1]) < 0) { //if delta of x coordinates are negative
    for(; x < 0; x++)
      printf("LEFT\n");
  } else {
    for(; x > 0; x--)
      printf("RIGHT\n");
  }
}
int main(void) { 

    int m; //bot position
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}


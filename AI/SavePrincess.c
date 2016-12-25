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
        princess[0] = row; //set x coordinates portion of peach array to equal current row
        princess[1] = col; //set y coorinates of peach array to equal current row
      }
    }
  }

  if ((y = princess[0] - mario[0]) < 0) { //if delta of y coordinates are negative
    for(; y < 0; y++) //while delta y is negative, increment y in order to move up
      printf("UP\n");
  } else {
    for(; y > 0; y--) //while delta y is positive, decement y to move down
      printf("DOWN\n");
  }

  if ((x = princess[1] - mario[1]) < 0) { //if delta of x coordinates are negative
    for(; x < 0; x++) //while delta x is negative, increment x in order to move left
      printf("LEFT\n");
  } else {
    for(; x > 0; x--) //while delta x is positive, decement x to move right
      printf("RIGHT\n");
  }
}//the loop exits when the distance is 0

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

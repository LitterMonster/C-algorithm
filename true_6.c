#include<stdio.h>
#define RIGHT  1
#define DOWN  2
#define LEFTDOWN  3
#define RIGHTUP 4

int main(void)
{
	int n;
	scanf("%d", &n);
	int i, j;
	int data[n][n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &data[i][j]);
	
	int x = 0;
	int y = 0;
	printf("%d ", data[y][x]);
	
	int direction = 0;
	 while( !(x == n-1 && y == n-1) ){//循环直至到达终点（最右下角的位置）
            //先判断下一步往哪个方向走
            if(direction == 0){   //为0说明还没走出第一步，所以接着应该往右边走一步
                direction = RIGHT;
            } else if(direction == RIGHT){ //上一次方向向右，下一步应该向左下或者右上
                if(x-1 >= 0 && y+1 < n){    //左下可走
                    direction = LEFTDOWN;
                } else {  //只能走右上了
                    direction = RIGHTUP;
                }
            } else if(direction == DOWN){   //上一次方向向下，下一步应该向左下或者右上
                if(x-1 >= 0 && y+1 < n){    //左下可走
                    direction = LEFTDOWN;
                } else {  //只能走右上了
                    direction = RIGHTUP;
                }
            } else if(direction == LEFTDOWN){   //上一次向左下，如果可以，下一步应该继续向左下，否则 向右或者向下走
                if(y+1 < n && x-1 >= 0){    //先判断能否继续向左下
                    direction = LEFTDOWN;
                } else if(y+1 < n){  //然后判断能否向下走
                    direction = DOWN;
                } else {      //最后只能向右走了
                    direction = RIGHT;
                }
            } else if(direction == RIGHTUP){    //上一次向右上，如果可以，下一步应该继续向右上，否则向右或者下走
                if(x+1 < n && y-1 >=0){  //先判断能否继续向右上
                    direction = RIGHTUP;
                } else if(x+1 < n){  //然后判断能否向右走
                    direction = RIGHT;
                } else{            //最后只能向下走了
                    direction = DOWN;
                }
            }
             
            //根据上面确定的方向来走出下一步
            switch(direction){
                case RIGHT: x = x+1; break;
                case DOWN: y = y+1; break;
                case LEFTDOWN: x = x-1; y = y+1; break;
                case RIGHTUP: x = x+1; y = y-1; break;
            }
            printf("%d ", data[y][x]);
        }
	return 0;
}

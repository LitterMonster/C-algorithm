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
	 while( !(x == n-1 && y == n-1) ){//ѭ��ֱ�������յ㣨�����½ǵ�λ�ã�
            //���ж���һ�����ĸ�������
            if(direction == 0){   //Ϊ0˵����û�߳���һ�������Խ���Ӧ�����ұ���һ��
                direction = RIGHT;
            } else if(direction == RIGHT){ //��һ�η������ң���һ��Ӧ�������»�������
                if(x-1 >= 0 && y+1 < n){    //���¿���
                    direction = LEFTDOWN;
                } else {  //ֻ����������
                    direction = RIGHTUP;
                }
            } else if(direction == DOWN){   //��һ�η������£���һ��Ӧ�������»�������
                if(x-1 >= 0 && y+1 < n){    //���¿���
                    direction = LEFTDOWN;
                } else {  //ֻ����������
                    direction = RIGHTUP;
                }
            } else if(direction == LEFTDOWN){   //��һ�������£�������ԣ���һ��Ӧ�ü��������£����� ���һ���������
                if(y+1 < n && x-1 >= 0){    //���ж��ܷ����������
                    direction = LEFTDOWN;
                } else if(y+1 < n){  //Ȼ���ж��ܷ�������
                    direction = DOWN;
                } else {      //���ֻ����������
                    direction = RIGHT;
                }
            } else if(direction == RIGHTUP){    //��һ�������ϣ�������ԣ���һ��Ӧ�ü��������ϣ��������һ�������
                if(x+1 < n && y-1 >=0){  //���ж��ܷ����������
                    direction = RIGHTUP;
                } else if(x+1 < n){  //Ȼ���ж��ܷ�������
                    direction = RIGHT;
                } else{            //���ֻ����������
                    direction = DOWN;
                }
            }
             
            //��������ȷ���ķ������߳���һ��
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

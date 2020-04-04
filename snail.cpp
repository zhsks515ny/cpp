#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 윤성우 도전! 프로그래밍3 TOO HARD I really need to study!!
int move(int(*ptr)[100], int size, int *C_ptr) {
	
	int x = 0;
	int y = 0;
	int rotate = 1; 
	int var = size;
	for (int i = 0; i < size * 2 - 1; i++) {

		
		switch (rotate)
		{
		case 1:
			for (int i = 0; i < var; i++) {
				ptr[x][y] = *C_ptr;
				*C_ptr += 1;
				y++;
				
			}
			y--;
			x += 1;
			var -= 1;
			rotate = 2;
			break;

		case 2:
			for (int i = 0; i < var; i++) {
				ptr[x][y] = *C_ptr;
				*C_ptr += 1;
				x++;
				
			}
			x--;
			y -= 1;
			rotate = 3;
			break;

		case 3:
			for (int i = 0; i < var; i++) {
				ptr[x][y] = *C_ptr;
				*C_ptr += 1;
				y--;
					
			}
			y++;
			x -= 1;
			var -= 1;
			rotate = 4;
			break;

		case 4:			
			
			for (int i = 0; i < var; i++) {
				ptr[x][y] = *C_ptr;
				*C_ptr += 1;
				x--;
						
			}
			x++;
			y += 1;
			rotate = 1;
			break;

		}
		if (var <= 0) {
			printf("All Done\n");
			return 0;
		}
	}
	
	return 0;
}

int main() {
	int arr[100][100] = { 0 };
	int num = 0;
	int check = 1;
	int* ptr = &check;
	scanf("%d", &num);
	move(arr,num,ptr);
	
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			printf("%d      ", arr[i][j]);
		}
		printf("\n");
	}
	

	return 0;

}

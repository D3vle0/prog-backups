#include <stdio.h>
int main(){
	char ch;
	while (ch = getche()){
		if ((int)ch == 113)
			break;
	}
}
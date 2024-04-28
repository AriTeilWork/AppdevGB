// this program will show the endianness of the computer
#include <stdio.h>
union myUnion {
	int x;
	char a[4];
	float f;

};

int main(void) {
	union myUnion m;
	m.x = 0x0A0B0C0D;
	if (m.a[0] == 0x0A) {
		printf("Big-endian\n");
	}
	else {
		printf("Little-endian\n");
	}
	m.f = 0.15625;
	for (int i = 0; i < 4; i++) {
		printf("%02x", m.a[i]);
	}
	printf("\n");
}

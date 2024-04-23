#include <stdio.h>
union myUnion {
	int x;
	char a[4];
	float f;
};

int main(void) {
	union myUnion m;
	m.x = 0x0A0B0C0D;
	printf("%d\n", 0123);
	printf("%d\n", 0b1010011);
	printf("%d\n", 0x53);
	printf("%d\n", 'a');

	if (m.a[0] == 0x0A) printf("big endian\n");
	if (m.a[0] == 0x0D) printf("little endian\n");
	m.f = 0.15625;
	for (int i = 0; i < 4; i++)
	{
		printf("%02x", m.a[i]);
	}
	printf("\n");
}
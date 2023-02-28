#include<stdio.h>
#include<conio.h>
struct DiemKG
{
	float x;
	float y;
	float z;
};
typedef struct DiemKG DIEMKG;
void NhapDiemKG(DIEMKG &);
void XuatDiemKG(DIEMKG );
void NhapDiemKG(DIEMKG &d)
{
	float temp;
	printf("\n Nhap x:");
	scanf("%f",&temp);
	d.x = temp;
	printf("\n Nhap y:");
	scanf("%f",&temp);
	d.y = temp;
	printf("\n Nhap z:");
	scanf("%f",&temp);
	d.z = temp;
}
void XuatDiemKG(DIEMKG d)
{
	printf("(%8.3f,%8.3f,%8.3f)", d.x,d.y,d.z);
}

int main()
{
	DIEMKG d;
	NhapDiemKG(d);
	XuatDiemKG(d);
	getch();
	return 0;
}


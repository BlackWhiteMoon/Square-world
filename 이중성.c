

#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

int x = 1, y = 1;
char choice ;
				
void Space() {
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
}
void start() {
	printf("��");	Sleep(100);	printf("��");	Sleep(100);	printf("��");	Sleep(100); printf("�� ");	Sleep(100);
	printf("��");	Sleep(100);	printf("��");	Sleep(100);	printf("��");	Sleep(100); printf("��	");	Sleep(100);
	printf("\n.########.########.##.....##.########....########..########...######..");		Sleep(100);
	printf("\n....##....##........##...##.....##.......##.....##.##.....##.##....##.");		Sleep(100);
	printf("\n....##....##.........##.##......##.......##.....##.##.....##.##.......");		Sleep(100);
	printf("\n....##....######......###.......##.......########..########..##...####");		Sleep(100);
	printf("\n....##....##.........##.##......##.......##...##...##........##....##.");		Sleep(100);
	printf("\n....##....##........##...##.....##.......##....##..##........##....##.");		Sleep(100);
	printf("\n....##....########.##.....##....##.......##.....##.##.........######.."); 	Sleep(100);
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t<��鼺�� ��̳ʽ�>�� �÷��� ���ּż� �����մϴ�.");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t�̰��ӿ��� 7���� ĳ���Ͱ� �ֽ��ϴ�.");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t������ ĳ���͸� �÷����ؼ� �پ��� ������ ���ּ���");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t<<��̳ʽ� ��庥ó>>");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t ���α׷��� �ǽ�����");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t 20210513 ������");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t �ߺ�Ź�帳�ϴ�.");
	Space();
}
// Ʃ�丮���� �������Ѵ�.
// �ΰ��� ������ �� ���� ĳ���� ����� ���� ������ ��ȭ���Ӱ� ������������ ���� �Ͽ� �⺻������ �˰� �Ѵ�.
// ����: �ΰ����� �÷��� �Ҷ� ���������� ���������� ���� ������ ���̰� �ȴ�.
// ���� �÷��̶� ������ �����ϰ� ��ȭ������ �����ҽ� �ΰ����� ���Ӵ��ϰ� �ȴ�.
// ��ó�� ���� ���ûӸ� �ƴ϶� ����� ���õ� ����� ������ ��ġ�� �Ѵ�. 
// ���� ù��° �÷��̶� ��ȭ������ ����ٸ� �ι�°���� ģ���� ������ �־��� ���̴�.
void tutorial_story() {
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\tƩ�丮����...\n");

}
void tutorial() {
	while (y == 1){
		printf("\tƩ�丮���� ���ðڽ��ϱ�? [Y/N] : ");
		choice = getchar();
		switch (choice) {
			case 'y':
				tutorial_story();
				y = 0;
				break;
			case 'Y':
				tutorial_story();
				y = 0;
				break;
			case 'n': y = 0; break;
			case 'N': y = 0; break;
			default:
				printf("\n��ȿ���� ���� �Է��Դϴ�\nó������ ���ư��ϴ�...\n");// ��ȿ���� ���� �Է��� �Ҷ� �ΰ��� �̻��ϰ� ��µȴ�.
				break;
		}
	} Space();
}
// ���̵� ���� ���� �� �������߿� �ϳ��� ���� ������ ���� ���� ���� ������̴�.
// ���̸� ĳ���͵��� �⺻������ ���迭�� ���̸� ĳ���͵��� �⺻������ �ǰ迭�� �����Ѵ�.
void difficulty(){

}


//ĳ���� ����
//�� ĳ���͸��� ����ִ� �������� �ְ� ���� �� ĳ���ͷ� ���μ������� ���������� 
//�� â���� � ĳ���Ͱ� � �������� �����ϵ��� �����Ҽ� �ִ�.
void Character() {
	printf("������ �����Ͻðڽ��ϱ�?");
	scanf_s("%d", &x);


}

//������ �̸��� �����ѵ� �װ��� �����ϸ� �� ������ �������� �ʿ��� ĳ���� �ൿ�� �˷��ش�.
//���� ��� ����(����� ����)�� ������ ��簡 �������� ���� ������ ������,���������� ���� �Ѵٵ���
void Map() {

}
void Menu() {
	printf("1���� ĳ���� ����, 2���� ����, 3���� �����Դϴ�.");

}

//
void playgame() {

}

int main(void) {

	start();	
	tutorial();
	difficulty();
	playgame();
	
	


	
	
	
	
	
	
	return 0;
}
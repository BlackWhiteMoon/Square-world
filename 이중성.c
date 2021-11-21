

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
	printf("양");	Sleep(100);	printf("면");	Sleep(100);	printf("성");	Sleep(100); printf("의 ");	Sleep(100);
	printf("루");	Sleep(100);	printf("미");	Sleep(100);	printf("너");	Sleep(100); printf("스	");	Sleep(100);
	printf("\n.########.########.##.....##.########....########..########...######..");		Sleep(100);
	printf("\n....##....##........##...##.....##.......##.....##.##.....##.##....##.");		Sleep(100);
	printf("\n....##....##.........##.##......##.......##.....##.##.....##.##.......");		Sleep(100);
	printf("\n....##....######......###.......##.......########..########..##...####");		Sleep(100);
	printf("\n....##....##.........##.##......##.......##...##...##........##....##.");		Sleep(100);
	printf("\n....##....##........##...##.....##.......##....##..##........##....##.");		Sleep(100);
	printf("\n....##....########.##.....##....##.......##.....##.##.........######.."); 	Sleep(100);
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t<양면성의 루미너스>를 플레이 해주셔서 감사합니다.");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t이게임에는 7개의 캐릭터가 있습니다.");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t각각의 캐릭터를 플레이해서 다양한 엔딩을 봐주세요");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t<<루미너스 어드벤처>>");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t 프로그래밍 실습과제");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t 20210513 전세영");
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t 잘부탁드립니다.");
	Space();
}
// 튜토리얼을 만들어야한다.
// 인간과 마족을 두 예시 캐릭을 만든뒤 각각 성격이 평화적임과 폭력적임으로 고르게 하여 기본설정을 알게 한다.
// 예시: 인간으로 플레이 할때 선택지에서 폭력적임을 고르면 마족을 죽이게 된다.
// 다음 플레이때 마족을 선택하고 평화적임을 선택할시 인간에게 죽임당하게 된다.
// 이처럼 나의 선택뿐만 아니라 상대의 선택도 결과에 영향을 미치게 한다. 
// 만약 첫번째 플레이때 평화적임을 골랐다면 두번째에서 친구로 지낼수 있었을 것이다.
void tutorial_story() {
	Sleep(100);		printf("\n");		Sleep(100);		printf("\n");		Sleep(100);		printf("\n");
	printf("\t튜토리얼중...\n");

}
void tutorial() {
	while (y == 1){
		printf("\t튜토리얼을 보시겠습니까? [Y/N] : ");
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
				printf("\n유효하지 않은 입력입니다\n처음으로 돌아갑니다...\n");// 유효하지 않은 입력을 할때 두개씩 이상하게 출력된다.
				break;
		}
	} Space();
}
// 난이도 선택 선과 악 두종류중에 하나를 고를수 있으며 선이 쉬움 악이 어려움이다.
// 선이면 캐릭터들의 기본성격을 선계열로 악이면 캐릭터들의 기본성격을 악계열로 설정한다.
void difficulty(){

}


//캐릭터 선택
//각 캐릭터마다 잠겨있는 선택지가 있고 직접 그 캐릭터로 메인선택지를 선택했을때 
//이 창에서 어떤 캐릭터가 어떤 선택지를 설정하도록 설정할수 있다.
void Character() {
	printf("누구를 선택하시겠습니까?");
	scanf_s("%d", &x);


}

//엔딩의 이름을 나열한뒤 그것을 선택하면 그 엔딩을 보기위해 필요한 캐릭터 행동을 알려준다.
//예를 들어 엔딩(멸망한 세상)을 고르려면 용사가 나태함을 고르고 마왕이 신중함,폭력적인을 골라야 한다든지
void Map() {

}
void Menu() {
	printf("1번은 캐릭터 선택, 2번은 지도, 3번은 엔딩입니다.");

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
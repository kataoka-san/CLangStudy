/*
C言語の練習




*/





#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//関数プロトタイプ宣言

void getchar_and_putchar();
void text_input_game();
void total_and_average_of_30();
void count_indefinite_of_total_and_average();
void ascii_art_display_program_autogeneration();
void double_loop_and_shape_display();

int main(void) {
	//getchar_and_putchar();
	//text_input_game();
	//total_and_average_of_30();
	//count_indefinite_of_total_and_average();
	//ascii_art_display_program_autogeneration();
	double_loop_and_shape_display();
	return 0;
}

//----------------------------------
//C言語基礎4.6 二重ループと図形表示 | 
//----------------------------------
void double_loop_and_shape_display(void) {


	//三角旗の表示
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	for (int i = 3; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");

		}
		printf("\n");
	}


	/*
	//逆三角形の表示
	for (int i = 4; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");

		}
		printf("\n");
	}
	*/

	/*
	//三角形の表示
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	*/

	/*
	//四角形の表示
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("* ");
		}
		printf("\n");
	}
	*/
}




//未完成
//----------------------------------------------------
//C言語基礎51《練習問題18》AA表示プログラムの自動生成 | 
//----------------------------------------------------
void ascii_art_display_program_autogeneration(void) {

	int c;

	printf("#include <stdio.h>\n");
	printf("int main(void)\n");
	printf("{\n");


	

	printf("\treturn 0;\n");
	printf("}\n");

}





//-----------------------------------------------
//C言語基礎50 <練習問題17> 個数不定の合計と平均  |
//-----------------------------------------------
void count_indefinite_of_total_and_average(void) {


	int x;
	int sum = 0;
	int n = 0;

	printf("-----<入力データ>-----\n");
	while (scanf("%d,", &x) != EOF) {
		sum += x;
		n++;

		if (n == 1) {
			printf("%d", x);
		}
		else if (n % 10 == 1) {
			printf(",\n%d", x);
		}
		else {
			printf(",%d", x);
		}
	}
	printf("\n");

	printf("-----<集計結果>-----\n");
	printf("合計：%d\n", sum);
	printf("平均：%.1lf", (double)sum / n);


}


//----------------------------------------------
// C言語基礎49 <練習問題16> 30個の合計と平均
//----------------------------------------------
void total_and_average_of_30(void) {

	//入力用
	int x;
	//合計計算用
	int sum = 0;

	printf("-----<入力データ>-----\n");
	for (int i = 1; i <= 30; i++) {
		(void)scanf("%d,", &x);
		sum += x;

		printf("%d", x);

		if (i == 30) {
			printf("\n");
		}
		else if (i % 10 == 0) {
			printf(",\n");
		}
		else {
			printf(",");
		}

	}

	printf("-----<集計結果>-----\n");
	printf("合計：%d\n", sum);
	printf("平均：%.2lf\n", (double)sum / 30);
}


//--------------------------------------------
// C言語基礎47 <練習問題15> 文字入力ゲーム
//--------------------------------------------
void text_input_game(void) {
	/*
		特定の範囲のランダム値を求める公式
		rand() % (最大値 - 最小値 + 1) + 最小値
	*/

	//入力用
	int c;
	//テスト文字
	char test_c;
	//正解数、不正解数
	int ok_cnt, ng_cnt;
	//時間計測用
	int start_time, end_time;

	//乱数の初期化
	srand((unsigned int)time(NULL));

	do {
		//画面クリア
		system("cls");

		printf("同じ文字を入力しなさい\n\n");

		ok_cnt = ng_cnt = 0;

		//開始時のタイマー値
		start_time = clock();

		for (int i = 1; i <= 10; i++) {

			do {
				//33から126までの乱数を取得
				test_c = (rand() % ('~' - '!' + 1)) + '!';
			} while (test_c >= '0' && test_c <= '9');
			
			//文字を表示
			putchar(test_c);

			rewind(stdin);
			c = getchar();

			//表示されてる文字を入力したらOKを表示
			if (c == test_c) {
				printf("\tOK\n");
				ok_cnt++;
			}
			else {
				printf("\tNG\n");
				ng_cnt++;
			}
		}

		//終了時のタイマー値
		end_time = clock();

		printf("正解：%d, 不正解：%d (%.1lf秒)\n",
			ok_cnt, ng_cnt, ((double)end_time - start_time) / 1000);

		printf("もう一度チャレンジしますか？(y:する、y以外：しない) ; ");
		
		rewind(stdin);
		c = getchar();

	} while (c == 'y');

	
	printf("終了");
	rewind(stdin);
	(void)getchar();


}


//------------------------------------------------
// C言語基礎46 <練習問題14> getcharとputcharの練習
//------------------------------------------------
void getchar_and_putchar(void) {

	int c;

	printf("文字を入力してください");
	while ((c = getchar()) != EOF) {
		//小文字を大文字に変換
		if (c >= 'a' && c <= 'z') {
			c = c - 'a' + 'A';
		}//大文字を小文字に変換
		else if (c >= 'A' && c <= 'Z') {
			c = c - 'A' + 'a';
		}//数宇、改行、アスターマークを表示
		else if ((c >= '0' && c <= '9') || c == '\n' || c == '*') {
			;
		}//文字や数字以外を表示させない
		else {
			continue;
		}

		putchar(c);


		if (c == '\n') {
			printf("文字を入力してください");
		}//アスターマークが押されたら終了
		else if (c == '*') {
			putchar('\n');
			break;
		}

	}
	printf("終了\n");


	rewind(stdin);
	(void)getchar();


}

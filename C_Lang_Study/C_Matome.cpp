//C言語の練習

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//関数プロトタイプ宣言

int select_program_display(void);
void switch_program(int c);


void getchar_and_putchar();
void text_input_game();
void total_and_average_of_30();
void count_indefinite_of_total_and_average();
void ascii_art_display_program_autogeneration();
void double_loop_and_shape_display();
void my_shape_display_program();
void shape_display_program();

//図形表示の関数化用関数
int shape_display_functionalization(void);
int input_size(int min, int max);
void print_line(int n);
void print_square(int n);
void print_triangle_normal(int n);
void print_triangle_reverse(int n);
void print_triangle_flag(int n);
void wait_enter(void);

//C言語基礎5.2 ダイヤ形・六角形・八角形
void diamond_type_hexagon_octagon(void);
void print_space(int n);
void print_dia_hex_oct_base(int n, int w, int h);
void print_diamond(int n);
void print_hexagon(int n);
void print_octagon(int n);

//C言語基礎5.4 エスケープシーケンス(色を付ける)
void escape_sequence_put_color(void);



int main(void) {

	
	switch_program(select_program_display());
	

	return 0;
}

int select_program_display(void) {

	int input;

	printf("1: C言語基礎46 <練習問題14> getcharとputcharの練習\n");
	printf("2: C言語基礎47 <練習問題15> 文字入力ゲーム\n");
	printf("3: C言語基礎49 <練習問題16> 30個の合計と平均\n");
	printf("4: C言語基礎50 <練習問題17> 個数不定の合計と平均\n");
	printf("5: C言語基礎51《練習問題18》AA表示プログラムの自動生成\n");
	printf("6: C言語基礎4.6 二重ループと図形表示\n");
	printf("7: MY C言語基礎53《練習問題19》図形表示プログラム\n");
	printf("8: C言語基礎53《練習問題19》図形表示プログラム\n");
	printf("9: C言語基礎55《練習問題20》図形表示の関数化\n");
	printf("10: C言語基礎5.2 ダイヤ形・六角形・八角形\n");
	printf("11: C言語基礎5.4 エスケープシーケンス(色を付ける)\n");
	printf("12: \n");

	printf("実行するプログラムを番号で入力してください\n");
	rewind(stdin);
	(void)scanf("%d", &input);


	return input;
}

void switch_program(int c) {

	system("cls");


	switch (c) {

	case 1:
		getchar_and_putchar();
		break;
	case 2:
		text_input_game();
		break;
	case 3:
		total_and_average_of_30();
		break;
	case 4:
		count_indefinite_of_total_and_average();
		break;
	case 5:
		ascii_art_display_program_autogeneration();
		break;
	case 6:
		double_loop_and_shape_display();
		break;
	case 7:
		my_shape_display_program();
		break;
	case 8:
		shape_display_program();
		break;
	case 9:
		shape_display_functionalization();
		break;
	case 10:
		diamond_type_hexagon_octagon();
		break;
	case 11:
		escape_sequence_put_color();
		break;
	default:
		main();
		break;
	}
	return;
}

//------------------------------------------------------
// case 11 C言語基礎5.4 エスケープシーケンス(色を付ける)|
//------------------------------------------------------
void escape_sequence_put_color(void) {

	for (int color = 30; color <= 37; color++) {

		for (int i = 1; i <= 3; i++) {

			printf("\033[%dm", color);
			printf("12345678901234567890\n");
		}
	}
	return;
}

//---------------------------------------------
//case 10 C言語基礎5.2 ダイヤ形・六角形・八角形| 
//                 始まり                      | 
//---------------------------------------------
void diamond_type_hexagon_octagon(void) {

	int size;

	size = shape_display_functionalization();

	

	printf("ダイヤ形\n");
	print_diamond(size);
	wait_enter();

	printf("六角形\n");
	print_hexagon(size);
	wait_enter();

	printf("八角形\n");
	print_octagon(size);
	wait_enter();

	return;
}

//------------
//スペース表示|
//------------
void print_space(int n) {

	for (int j = 1; j <= n; j++) {
		printf("  ");
	}
	return;
}
//----------------------------------
//ダイヤ、六角形、八角形のベース表示|
//----------------------------------
void print_dia_hex_oct_base(int n, int w, int h) {

	//上半分
	for (int i = n - 1, j = 1; i > 0; i--, j += 2) {
		print_space(i);
		print_line(j + w);
	}
	//真ん中
	for (int i = 1; i <= h; i++) {
		print_line((n * 3) - 2);
	}
	//下半分
	for (int i = 0, j = n * 2 - 1; i < n; i++, j -= 2) {
		print_space(i);
		print_line(j + w);
	}
	return;
}
//----------
//ダイヤ表示|
//----------
void print_diamond(int n) {

	print_dia_hex_oct_base(n, 0, 0);
	return;
}
//----------
//六角形表示|
//----------
void print_hexagon(int n) {

	print_dia_hex_oct_base(n, n - 1, 0);
	return;
}
//----------
//八角形表示|
//----------
void print_octagon(int n) {

	print_dia_hex_oct_base(n, n - 1, n - 1);
	return;
}

//----------------------------------
//ダイヤ、六角形、八角形のベース表示|
//             終わり               |
//----------------------------------

//--------------------------------------------------
// case 9 C言語基礎55《練習問題20》図形表示の関数化 |
//              始まり                              |
//--------------------------------------------------
int shape_display_functionalization(void) {

	int size;

	size = input_size(2, 8);

	printf("四角形\n");
	print_square(size);
	wait_enter();

	printf("三角形\n");
	print_triangle_normal(size);
	wait_enter();

	printf("逆三角形\n");
	print_triangle_reverse(size);
	wait_enter();

	printf("三角旗\n");
	print_triangle_flag(size);
	wait_enter();


	return size;

}

//--------
//入力処理|
//--------
int input_size(int min, int max) {

	int size;

	while (true) {
		printf("図形の大きさを入力してください(%d～%d) :",min, max);

		rewind(stdin);
		(void)scanf("%d", &size);

		if (size >= min && size <= max) {
			break;
		}

		printf("入力に誤りがあります\n");
	}
	printf("\n");
	return size;
}
//---------
//改行待ち |
//---------
void wait_enter(void) {
	rewind(stdin);
	(void)getchar();
	return;
}

//--------
//1行表示 |
//--------
void print_line(int n) {

	for (int j = 1; j <= n; j++) {
		printf("* ");
	}
	printf("\n");
	return;
}
//-----------
//四角形表示 |
//-----------
void print_square(int n) {

	for (int i = 1; i <= n; i++) {
		print_line(n);
	}
	return;
}
//-----------
//三角形表示 |
//-----------
void print_triangle_normal(int n) {

	for (int i = 1; i <= n; i++) {
		print_line(i);
	}
	return;
}
//-------------
//逆三角形表示 |
//-------------
void print_triangle_reverse(int n) {

	for (int i = n; i > 0; i--) {
		print_line(i);
	}
	return;

}
//-----------
//三角旗表示 |
//-----------
void print_triangle_flag(int n) {

	print_triangle_normal(n);
	print_triangle_reverse(n - 1);
	return;
}
//--------------------------------------------------
//        C言語基礎55《練習問題20》図形表示の関数化 |
//                終わり                            |
//--------------------------------------------------


//----------------------------------------------------
// case 8 C言語基礎53《練習問題19》図形表示プログラム | 
//----------------------------------------------------
void shape_display_program(void) {

	//図形の大きさ用
	int size;

	//-----------------------------------------------
	//                入力処理
	//-----------------------------------------------
	while (true) {
		printf("図形の大きさを入力してください(2～10) :");

		rewind(stdin);
		(void)scanf("%d", &size);

		if (size >= 2 && size <= 10) {
			break;
		}

		printf("入力に誤りがあります\n");
	}

	printf("\n");

	//-----------------------------------------------
	//                図形表示処理
	//-----------------------------------------------
	printf("\n四角形\n");
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n三角形\n");
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}

		printf("\n");
	}

	printf("\n逆三角形\n");
	for (int i = size; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n三角旗\n");
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	for (int i = size - 1; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	rewind(stdin);
	(void)getchar();
}

// case 7
void my_shape_display_program(void) {

	int x;
	int c;

	while (true) {
		printf("図形の大きさを入力してください(2～10):");
		rewind(stdin);
		(void)scanf("%d", &x);

		if (x >= 2 && x <= 10) {

			printf("\n四角形\n");
			for (int i = 1; i <= x; i++) {
				for (int j = 1; j <= x; j++) {
					printf("* ");
				}
				printf("\n");
			}

			printf("\n三角形\n");
			for (int i = 1; i <= x; i++) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}

				printf("\n");
			}

			printf("\n逆三角形\n");
			for (int i = x; i > 0; i--) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
			}

			printf("\n三角旗\n");
			for (int i = 1; i <= x; i++) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
			}

			for (int i = x - 1; i > 0; i--) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
			}

			printf("もう一度チャレンジしますか？(y:する、y以外：しない);");
			rewind(stdin);
			c = getchar();
			if (c == 'y') {
				x = 0;
				system("cls");
				continue;
			}
			else {
				printf("終了");
				break;
			}
		}
		else {
			printf("入力に誤りがあります\n");
		}
	}
	

	
}


//------------------------------------------
// case 6 C言語基礎4.6 二重ループと図形表示 | 
//------------------------------------------
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
//------------------------------------------------------------
// case 5 C言語基礎51《練習問題18》AA表示プログラムの自動生成 | 
//------------------------------------------------------------
void ascii_art_display_program_autogeneration(void) {

	

	printf("#include <stdio.h>\n");
	printf("int main(void)\n");
	printf("{\n");


	

	printf("\treturn 0;\n");
	printf("}\n");

}





//-------------------------------------------------------
// case 4 C言語基礎50 <練習問題17> 個数不定の合計と平均  |
//-------------------------------------------------------
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


//--------------------------------------------------
// case 3 C言語基礎49 <練習問題16> 30個の合計と平均 |
//--------------------------------------------------
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


//------------------------------------------------
// case 2 C言語基礎47 <練習問題15> 文字入力ゲーム |
//------------------------------------------------
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


//--------------------------------------------------------
// case 1 C言語基礎46 <練習問題14> getcharとputcharの練習 |
//--------------------------------------------------------
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

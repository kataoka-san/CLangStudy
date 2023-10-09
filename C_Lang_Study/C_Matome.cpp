//C����̗��K

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//�֐��v���g�^�C�v�錾

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

//�}�`�\���̊֐����p�֐�
int shape_display_functionalization(void);
int input_size(int min, int max);
void print_line(int n);
void print_square(int n);
void print_triangle_normal(int n);
void print_triangle_reverse(int n);
void print_triangle_flag(int n);
void wait_enter(void);

//C�����b5.2 �_�C���`�E�Z�p�`�E���p�`
void diamond_type_hexagon_octagon(void);
void print_space(int n);
void print_dia_hex_oct_base(int n, int w, int h);
void print_diamond(int n);
void print_hexagon(int n);
void print_octagon(int n);

//C�����b5.4 �G�X�P�[�v�V�[�P���X(�F��t����)
void escape_sequence_put_color(void);



int main(void) {

	
	switch_program(select_program_display());
	

	return 0;
}

int select_program_display(void) {

	int input;

	printf("1: C�����b46 <���K���14> getchar��putchar�̗��K\n");
	printf("2: C�����b47 <���K���15> �������̓Q�[��\n");
	printf("3: C�����b49 <���K���16> 30�̍��v�ƕ���\n");
	printf("4: C�����b50 <���K���17> ���s��̍��v�ƕ���\n");
	printf("5: C�����b51�s���K���18�tAA�\���v���O�����̎�������\n");
	printf("6: C�����b4.6 ��d���[�v�Ɛ}�`�\��\n");
	printf("7: MY C�����b53�s���K���19�t�}�`�\���v���O����\n");
	printf("8: C�����b53�s���K���19�t�}�`�\���v���O����\n");
	printf("9: C�����b55�s���K���20�t�}�`�\���̊֐���\n");
	printf("10: C�����b5.2 �_�C���`�E�Z�p�`�E���p�`\n");
	printf("11: C�����b5.4 �G�X�P�[�v�V�[�P���X(�F��t����)\n");
	printf("12: \n");

	printf("���s����v���O������ԍ��œ��͂��Ă�������\n");
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
// case 11 C�����b5.4 �G�X�P�[�v�V�[�P���X(�F��t����)|
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
//case 10 C�����b5.2 �_�C���`�E�Z�p�`�E���p�`| 
//                 �n�܂�                      | 
//---------------------------------------------
void diamond_type_hexagon_octagon(void) {

	int size;

	size = shape_display_functionalization();

	

	printf("�_�C���`\n");
	print_diamond(size);
	wait_enter();

	printf("�Z�p�`\n");
	print_hexagon(size);
	wait_enter();

	printf("���p�`\n");
	print_octagon(size);
	wait_enter();

	return;
}

//------------
//�X�y�[�X�\��|
//------------
void print_space(int n) {

	for (int j = 1; j <= n; j++) {
		printf("  ");
	}
	return;
}
//----------------------------------
//�_�C���A�Z�p�`�A���p�`�̃x�[�X�\��|
//----------------------------------
void print_dia_hex_oct_base(int n, int w, int h) {

	//�㔼��
	for (int i = n - 1, j = 1; i > 0; i--, j += 2) {
		print_space(i);
		print_line(j + w);
	}
	//�^��
	for (int i = 1; i <= h; i++) {
		print_line((n * 3) - 2);
	}
	//������
	for (int i = 0, j = n * 2 - 1; i < n; i++, j -= 2) {
		print_space(i);
		print_line(j + w);
	}
	return;
}
//----------
//�_�C���\��|
//----------
void print_diamond(int n) {

	print_dia_hex_oct_base(n, 0, 0);
	return;
}
//----------
//�Z�p�`�\��|
//----------
void print_hexagon(int n) {

	print_dia_hex_oct_base(n, n - 1, 0);
	return;
}
//----------
//���p�`�\��|
//----------
void print_octagon(int n) {

	print_dia_hex_oct_base(n, n - 1, n - 1);
	return;
}

//----------------------------------
//�_�C���A�Z�p�`�A���p�`�̃x�[�X�\��|
//             �I���               |
//----------------------------------

//--------------------------------------------------
// case 9 C�����b55�s���K���20�t�}�`�\���̊֐��� |
//              �n�܂�                              |
//--------------------------------------------------
int shape_display_functionalization(void) {

	int size;

	size = input_size(2, 8);

	printf("�l�p�`\n");
	print_square(size);
	wait_enter();

	printf("�O�p�`\n");
	print_triangle_normal(size);
	wait_enter();

	printf("�t�O�p�`\n");
	print_triangle_reverse(size);
	wait_enter();

	printf("�O�p��\n");
	print_triangle_flag(size);
	wait_enter();


	return size;

}

//--------
//���͏���|
//--------
int input_size(int min, int max) {

	int size;

	while (true) {
		printf("�}�`�̑傫������͂��Ă�������(%d�`%d) :",min, max);

		rewind(stdin);
		(void)scanf("%d", &size);

		if (size >= min && size <= max) {
			break;
		}

		printf("���͂Ɍ�肪����܂�\n");
	}
	printf("\n");
	return size;
}
//---------
//���s�҂� |
//---------
void wait_enter(void) {
	rewind(stdin);
	(void)getchar();
	return;
}

//--------
//1�s�\�� |
//--------
void print_line(int n) {

	for (int j = 1; j <= n; j++) {
		printf("* ");
	}
	printf("\n");
	return;
}
//-----------
//�l�p�`�\�� |
//-----------
void print_square(int n) {

	for (int i = 1; i <= n; i++) {
		print_line(n);
	}
	return;
}
//-----------
//�O�p�`�\�� |
//-----------
void print_triangle_normal(int n) {

	for (int i = 1; i <= n; i++) {
		print_line(i);
	}
	return;
}
//-------------
//�t�O�p�`�\�� |
//-------------
void print_triangle_reverse(int n) {

	for (int i = n; i > 0; i--) {
		print_line(i);
	}
	return;

}
//-----------
//�O�p���\�� |
//-----------
void print_triangle_flag(int n) {

	print_triangle_normal(n);
	print_triangle_reverse(n - 1);
	return;
}
//--------------------------------------------------
//        C�����b55�s���K���20�t�}�`�\���̊֐��� |
//                �I���                            |
//--------------------------------------------------


//----------------------------------------------------
// case 8 C�����b53�s���K���19�t�}�`�\���v���O���� | 
//----------------------------------------------------
void shape_display_program(void) {

	//�}�`�̑傫���p
	int size;

	//-----------------------------------------------
	//                ���͏���
	//-----------------------------------------------
	while (true) {
		printf("�}�`�̑傫������͂��Ă�������(2�`10) :");

		rewind(stdin);
		(void)scanf("%d", &size);

		if (size >= 2 && size <= 10) {
			break;
		}

		printf("���͂Ɍ�肪����܂�\n");
	}

	printf("\n");

	//-----------------------------------------------
	//                �}�`�\������
	//-----------------------------------------------
	printf("\n�l�p�`\n");
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n�O�p�`\n");
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}

		printf("\n");
	}

	printf("\n�t�O�p�`\n");
	for (int i = size; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	printf("\n�O�p��\n");
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
		printf("�}�`�̑傫������͂��Ă�������(2�`10):");
		rewind(stdin);
		(void)scanf("%d", &x);

		if (x >= 2 && x <= 10) {

			printf("\n�l�p�`\n");
			for (int i = 1; i <= x; i++) {
				for (int j = 1; j <= x; j++) {
					printf("* ");
				}
				printf("\n");
			}

			printf("\n�O�p�`\n");
			for (int i = 1; i <= x; i++) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}

				printf("\n");
			}

			printf("\n�t�O�p�`\n");
			for (int i = x; i > 0; i--) {
				for (int j = 1; j <= i; j++) {
					printf("* ");
				}
				printf("\n");
			}

			printf("\n�O�p��\n");
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

			printf("������x�`�������W���܂����H(y:����Ay�ȊO�F���Ȃ�);");
			rewind(stdin);
			c = getchar();
			if (c == 'y') {
				x = 0;
				system("cls");
				continue;
			}
			else {
				printf("�I��");
				break;
			}
		}
		else {
			printf("���͂Ɍ�肪����܂�\n");
		}
	}
	

	
}


//------------------------------------------
// case 6 C�����b4.6 ��d���[�v�Ɛ}�`�\�� | 
//------------------------------------------
void double_loop_and_shape_display(void) {


	//�O�p���̕\��
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
	//�t�O�p�`�̕\��
	for (int i = 4; i > 0; i--) {
		for (int j = 1; j <= i; j++) {
			printf("* ");

		}
		printf("\n");
	}
	*/

	/*
	//�O�p�`�̕\��
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	*/

	/*
	//�l�p�`�̕\��
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 4; j++) {
			printf("* ");
		}
		printf("\n");
	}
	*/
}




//������
//------------------------------------------------------------
// case 5 C�����b51�s���K���18�tAA�\���v���O�����̎������� | 
//------------------------------------------------------------
void ascii_art_display_program_autogeneration(void) {

	

	printf("#include <stdio.h>\n");
	printf("int main(void)\n");
	printf("{\n");


	

	printf("\treturn 0;\n");
	printf("}\n");

}





//-------------------------------------------------------
// case 4 C�����b50 <���K���17> ���s��̍��v�ƕ���  |
//-------------------------------------------------------
void count_indefinite_of_total_and_average(void) {


	int x;
	int sum = 0;
	int n = 0;

	printf("-----<���̓f�[�^>-----\n");
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

	printf("-----<�W�v����>-----\n");
	printf("���v�F%d\n", sum);
	printf("���ρF%.1lf", (double)sum / n);


}


//--------------------------------------------------
// case 3 C�����b49 <���K���16> 30�̍��v�ƕ��� |
//--------------------------------------------------
void total_and_average_of_30(void) {

	//���͗p
	int x;
	//���v�v�Z�p
	int sum = 0;

	printf("-----<���̓f�[�^>-----\n");
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

	printf("-----<�W�v����>-----\n");
	printf("���v�F%d\n", sum);
	printf("���ρF%.2lf\n", (double)sum / 30);
}


//------------------------------------------------
// case 2 C�����b47 <���K���15> �������̓Q�[�� |
//------------------------------------------------
void text_input_game(void) {
	/*
		����͈̔͂̃����_���l�����߂����
		rand() % (�ő�l - �ŏ��l + 1) + �ŏ��l
	*/

	//���͗p
	int c;
	//�e�X�g����
	char test_c;
	//���𐔁A�s����
	int ok_cnt, ng_cnt;
	//���Ԍv���p
	int start_time, end_time;

	//�����̏�����
	srand((unsigned int)time(NULL));

	do {
		//��ʃN���A
		system("cls");

		printf("������������͂��Ȃ���\n\n");

		ok_cnt = ng_cnt = 0;

		//�J�n���̃^�C�}�[�l
		start_time = clock();

		for (int i = 1; i <= 10; i++) {

			do {
				//33����126�܂ł̗������擾
				test_c = (rand() % ('~' - '!' + 1)) + '!';
			} while (test_c >= '0' && test_c <= '9');
			
			//������\��
			putchar(test_c);

			rewind(stdin);
			c = getchar();

			//�\������Ă镶������͂�����OK��\��
			if (c == test_c) {
				printf("\tOK\n");
				ok_cnt++;
			}
			else {
				printf("\tNG\n");
				ng_cnt++;
			}
		}

		//�I�����̃^�C�}�[�l
		end_time = clock();

		printf("�����F%d, �s�����F%d (%.1lf�b)\n",
			ok_cnt, ng_cnt, ((double)end_time - start_time) / 1000);

		printf("������x�`�������W���܂����H(y:����Ay�ȊO�F���Ȃ�) ; ");
		
		rewind(stdin);
		c = getchar();

	} while (c == 'y');

	
	printf("�I��");
	rewind(stdin);
	(void)getchar();


}


//--------------------------------------------------------
// case 1 C�����b46 <���K���14> getchar��putchar�̗��K |
//--------------------------------------------------------
void getchar_and_putchar(void) {

	int c;

	printf("��������͂��Ă�������");
	while ((c = getchar()) != EOF) {
		//��������啶���ɕϊ�
		if (c >= 'a' && c <= 'z') {
			c = c - 'a' + 'A';
		}//�啶�����������ɕϊ�
		else if (c >= 'A' && c <= 'Z') {
			c = c - 'A' + 'a';
		}//���F�A���s�A�A�X�^�[�}�[�N��\��
		else if ((c >= '0' && c <= '9') || c == '\n' || c == '*') {
			;
		}//�����␔���ȊO��\�������Ȃ�
		else {
			continue;
		}

		putchar(c);


		if (c == '\n') {
			printf("��������͂��Ă�������");
		}//�A�X�^�[�}�[�N�������ꂽ��I��
		else if (c == '*') {
			putchar('\n');
			break;
		}

	}
	printf("�I��\n");


	rewind(stdin);
	(void)getchar();


}

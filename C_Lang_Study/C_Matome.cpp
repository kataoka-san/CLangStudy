//C����̗��K

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//�֐��v���g�^�C�v�錾

void getchar_and_putchar();
void text_input_game();
void total_and_average_of_30();
void count_indefinite_of_total_and_average();
void ascii_art_display_program_autogeneration();
void double_loop_and_shape_display();
void my_shape_display_program();
void shape_display_program();

//�}�`�\���̊֐����p�֐�
void shape_display_functionalization(void);
int input_size(int min, int max);
void print_line(int n);
void print_square(int n);
void print_triangle_normal(int n);
void print_triangle_reverse(int n);
void print_triangle_flag(int n);
void wait_enter(void);

int main(void) {
	//getchar_and_putchar();
	//text_input_game();
	//total_and_average_of_30();
	//count_indefinite_of_total_and_average();
	//ascii_art_display_program_autogeneration();
	//double_loop_and_shape_display();
	//my_shape_display_program();
	shape_display_functionalization();

	return 0;
}

//------------------------------------------
//C�����b55�s���K���20�t�}�`�\���̊֐��� |
//              �n�܂�                      |
//------------------------------------------

void shape_display_functionalization(void) {

	int size;

	size = input_size(2, 10);

	printf("�l�p�`\n");
	print_square(size);
	wait_enter();

	printf("\n�O�p�`\n");
	print_triangle_normal(size);
	wait_enter();

	printf("\n�t�O�p�`\n");
	print_triangle_reverse(size);
	wait_enter();

	printf("\n�O�p��\n");
	print_triangle_flag(size);
	wait_enter();


	return;

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
//------------------------------------------
//C�����b55�s���K���20�t�}�`�\���̊֐��� |
//              �I���                      |
//------------------------------------------


//--------------------------------------------
//C�����b53�s���K���19�t�}�`�\���v���O���� | 
//--------------------------------------------
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


//----------------------------------
//C�����b4.6 ��d���[�v�Ɛ}�`�\�� | 
//----------------------------------
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
//----------------------------------------------------
//C�����b51�s���K���18�tAA�\���v���O�����̎������� | 
//----------------------------------------------------
void ascii_art_display_program_autogeneration(void) {

	

	printf("#include <stdio.h>\n");
	printf("int main(void)\n");
	printf("{\n");


	

	printf("\treturn 0;\n");
	printf("}\n");

}





//-----------------------------------------------
//C�����b50 <���K���17> ���s��̍��v�ƕ���  |
//-----------------------------------------------
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


//-------------------------------------------
// C�����b49 <���K���16> 30�̍��v�ƕ��� |
//-------------------------------------------
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


//-----------------------------------------
// C�����b47 <���K���15> �������̓Q�[�� |
//-----------------------------------------
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


//-------------------------------------------------
// C�����b46 <���K���14> getchar��putchar�̗��K |
//-------------------------------------------------
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

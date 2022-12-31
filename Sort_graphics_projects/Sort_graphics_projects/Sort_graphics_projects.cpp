#include "graphics.h"
#include <iostream>
//#include <stdc++.h>
#pragma comment(lib, "graphics.lib")
using namespace std;

int radius = 25;
// some draw functions
	// fill color for text
void greenText(int x, int y, int a) {
	setcolor(GREEN);
	stringstream s1;
	s1 << a;
	string ss = s1.str();
	char* s = (char*)ss.c_str();
	outtextxy(x, y, s);
}
void blueText(int x, int y, int a) {
	setcolor(BLUE);
	stringstream s1;
	s1 << a;
	string ss = s1.str();
	char* s = (char*)ss.c_str();
	outtextxy(x, y, s);
}
void redText(int x, int y, int a) {
	setcolor(WHITE);
	stringstream s1;
	s1 << a;
	string ss = s1.str();
	char* s = (char*)ss.c_str();
	outtextxy(x, y, s);
}
void whiteText(int x, int y, int a) {
	setcolor(WHITE);
	stringstream s1;
	s1 << a;
	string ss = s1.str();
	char* s = (char*)ss.c_str();
	outtextxy(x, y, s);
}
void blackText(int x, int y, int a) {
	setcolor(BLACK);
	stringstream s1;
	s1 << a;
	string ss = s1.str();
	char* s = (char*)ss.c_str();
	outtextxy(x, y, s);
}
void whitetext(int x, int y, int a, int b) {
	setcolor(WHITE);
	stringstream s1, s2;
	s1 << a;
	s2 << b;
	string ss1 = s1.str();
	string ss2 = s2.str();
	char* s3 = (char*)ss1.c_str();
	char* s4 = (char*)ss2.c_str();
	outtextxy(x - 30, y, s3);
	outtextxy(x + 30, y, s4);
}
void blacktext(int x, int y, int a, int b) {
	setcolor(BLACK);
	stringstream s1, s2;
	s1 << a;
	s2 << b;
	string ss1 = s1.str();
	string ss2 = s2.str();
	setcolor(BLACK);
	char* s3 = (char*)ss1.c_str();
	setcolor(BLACK);
	char* s4 = (char*)ss2.c_str();
	setcolor(BLACK);
	outtextxy(x - 30, y, s3);
	setcolor(BLACK);
	outtextxy(x + 30, y, s4);
}
	//fill color for circle
void yellowCircle(int x, int y, int R) {
	setcolor(YELLOW);
	circle(x, y, R);
}
void blueCircle(int x, int y, int R) {
	setcolor(BLUE);
	circle(x, y, R);
}
void greenCircle(int x, int y, int R) {
	setcolor(GREEN);
	circle(x, y, R);
}
void redCircle(int x, int y, int R) {
	setcolor(RED);
	circle(x, y, R);
}
void whiteCircle(int x, int y, int R) {
	setcolor(WHITE);
	circle(x, y, R);
}
void blackCircle(int x, int y, int R) {
	setcolor(BLACK);
	circle(x, y, R);
}
	// fill color for rectangle
void whiterectangle(int x, int y, int x1, int y1, int a, int b) {
	setcolor(WHITE);
	rectangle(x, y, x1, y1);
	whitetext((x + x1) / 2, (y + y1) / 2, a, b);
}
void blackrectangle(int x, int y, int x1, int y1, int a, int b) {
	setcolor(BLACK);
	rectangle(x, y, x1, y1);
	setcolor(BLACK);
	blacktext((x + x1) / 2, (y + y1) / 2, a, b);
	setcolor(BLACK);
}
	// fill color box ( include circle and internal text )
void blueBox(int x1, int x2, int y, int a1, int a2, int R)
{
	blueCircle(x1, y, R);
	blueText(x1, y, a1);
	blueCircle(x2, y, R);
	blueText(x2, y, a2);
}
void greenBox(int x1, int x2, int y, int a1, int a2, int R)
{
	greenCircle(x1, y, R);
	greenText(x1, y, a1);
	greenCircle(x2, y, R);
	greenText(x2, y, a2);
}
void redBox(int x1, int x2, int y, int a1, int a2, int R)
{
	redCircle(x1, y, R);
	redText(x1, y, a1);
	redCircle(x2, y, R);
	redText(x2, y, a2);
}
void blackBox(int x1, int x2, int& y, int a1, int a2, int R)
{
	blackCircle(x1, y, R);
	blackText(x1, y, a1);
	blackCircle(x2, y, R);
	blackText(x2, y, a2);
	//delay(5);
}
void whiteBox(int x1, int x2, int& y, int a1, int a2, int R)
{
	whiteCircle(x1, y, R);
	whiteText(x1, y, a1);
	whiteCircle(x2, y, R);
	whiteText(x2, y, a2);
	//delay(5);
}
// notices
void complete() {
	char s[] = "SORTING DONE!";
	outtextxy(250, 500, s);
}
void noticeShell() {
	rectangle(1080, 570, 1300, 620);
	char s1[] = "Mau xanh: phan tu dang xet";
	char s2[] = "Mau do: phan tu sai vi tri";
	setcolor(GREEN);
	outtextxy(1100, 580, s1);
	setcolor(RED);
	outtextxy(1100, 600, s2);
	setcolor(WHITE);
}
void noticeSelection() {
	rectangle(50, 250, 450, 330);
	char s1[] = "Mau xanh la: phan tu da xep dung vi tri";
	char s2[] = "Mau do: phan tu sai vi tri";
	char s3[] = "Mau xanh bien: phan tu max so voi phan tu sai vi tri";
	setcolor(GREEN);
	outtextxy(60, 270, s1);
	setcolor(RED);
	outtextxy(60, 290, s2);
	setcolor(BLUE);
	outtextxy(60, 310, s3);
	setcolor(WHITE);
}
void noticeQuick() {
	rectangle(30, 460, 400, 600);
	char s1[] = "Mau xanh la: phan tu da xep dung vi tri";
	char s2[] = "Mau do: phan tu sai vi tri can duoc xep dung";
	char s3[] = "Mau xanh bien: phan tu thu i xet tu trai qua";
	char s4[] = "Mau vang: phan tu thu j xet tu vi tri phai qua";
	char s5[] = "Quy uoc so -999 la so am vo cuc";
	char s6[] = "Quy uoc so 999 la so duong vo cuc";
	outtextxy(50, 480, s5);
	outtextxy(50, 500, s6);
	setcolor(GREEN);
	outtextxy(50, 520, s1);
	setcolor(RED);
	outtextxy(50, 540, s2);
	setcolor(BLUE);
	outtextxy(50, 560, s3);
	setcolor(YELLOW);
	outtextxy(50, 580, s4);
	setcolor(WHITE);
}
// Struct
struct Data {
	int l;
	int r;
	Data* next;
};
struct Record
{
	char data;
	int key;
};
// In - out
void inPut(Record a[], int& n) {
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	cout << "Nhap phan tu: \n";
	for (int i = 0; i < n; i++) {
		cin >> a[i].key;
	}
}
void outPut(Record a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i].key << " ";
	}
	cout << endl;
}

// transfer 2 value
void transferCircle(int x1, int x2, int& y, int a1, int a2, int R)
{
	//x1<x2
	for (int i = 0; i <= 100; i++) {
		blackBox(x1, x2, y, a1, a2, R);
		y = y++;
		whiteBox(x1, x2, y, a1, a2, R);
		//delay(1);
	}
	delay(50);
	//whiteCircle(x1, y, R);
	//whiteCircle(x2, y, R);
	int t1 = x1;
	while (x2 != t1) {
		blackBox(x1, x2, y, a1, a2, R);
		x1++;
		x2--;
		whiteBox(x1, x2, y, a1, a2, R);
		//delay(1);
	}
	delay(50);
	for (int i = 0; i <= 100; i++) {
		blackBox(x1, x2, y, a1, a2, R);
		y = y--;
		whiteBox(x1, x2, y, a1, a2, R);
		//delay(1);
	}
	delay(50);

}

// draw unsort array
void draw(Record a[], int n, int gap, int& y, int R) {
	char s1[] = "ARRAY:";
	outtextxy(50, y, s1);
	int i;
	for (i = 0; i < n; i++) {
		stringstream s1, s2;
		s1 << i;
		string ss = s1.str();
		char* s = (char*)ss.c_str();
		outtextxy(gap, 25, s);
		circle((i + 2) * 100, y, R);
		s2 << a[i].key;
		ss = s2.str();
		s = (char*)ss.c_str();
		outtextxy((i + 2) * 100, y, s);
		gap += 100;
	}
}
void drawQuick(Record a[], int n, int gap, int& y, int R) {
	char s1[] = "ARRAY:";
	outtextxy(50, y, s1);
	int i;
	for (i = 0; i < n + 2; i++) {
		stringstream s1, s2;
		s1 << i;
		string ss = s1.str();
		char* s = (char*)ss.c_str();
		outtextxy(gap, 25, s);
		circle((i + 2) * 100, y, R);
		s2 << a[i].key;
		ss = s2.str();
		s = (char*)ss.c_str();
		outtextxy((i + 2) * 100, y, s);
		gap += 100;
	}
	line(600, 300, 600, 600);
	line(600, 600, 800, 600);
	line(800, 300, 800, 600);
	noticeQuick();
}

// Different
void drawCircle(int x, int y, int color) {
	setcolor(color);
	circle(x, y, radius);
}

void writeText(int x, int y, int data, int color) {
	stringstream ss;
	ss << data;
	string s = ss.str();
	char* t = (char*)s.c_str();
	setcolor(color);
	outtextxy(x, y, t);
}

void drawBox(int x, int y, int data, int color) {
	drawCircle(x, y, color);
	writeText(x, y, data, color);
}

void drawMulticolorBox(int x, int y, int data, int colorCircle, int colorText) {
	drawCircle(x, y, colorCircle);
	writeText(x, y, data, colorText);
}

void glowText(int x, int y, int data) {
	int j = 1;
	while (j != 50) {
		writeText(x, y, data, j);
		delay(10);
		j++;
	}
	writeText(x, y, data, WHITE);
}

void glowBox(int x, int y, int data) {
	int j = 1;
	while (j != 50) {
		setcolor(j);
		j++;
		drawBox(x, y, data, j);
		delay(1);
	}
	drawBox(x, y, data, WHITE);
}

void drawArray(Record R[], int n, int x, int y, int color) {
	string index = "Index: ";
	char* indx = (char*)index.c_str();
	setcolor(color);
	outtextxy(50, y - 50, indx);
	//Write array indexes
	for (int i = 0; i < n; i++)
		writeText(x + 50 * i + 50, y - 50, i, color);
	//Draw array
	for (int i = 0; i < n; i++) {
		if (i == 0)
			drawBox(x + 50, y, R[i].key, color);
		else
			drawBox(x + 50 * i + 50, y, R[i].key, color);
	}
}

void drawMergeArray(Record R[], int n, int x, int y, int color) {
	string index = "Index: ";
	char* indx = (char*)index.c_str();
	setcolor(color);
	outtextxy(200, y - 100, indx);
	//Write array indexes
	for (int i = 0; i < n; i++)
		writeText(x + 50 * i + 50, y - 100, i, color);
	//Draw array
	for (int i = 0; i < n; i++) {
		if (i == 0)
			drawBox(x + 50, y, R[i].key, color);
		else
			drawBox(x + 50 * i + 50, y, R[i].key, color);
	}
}

void deleteBox(int x, int y, int data) {
	drawBox(x, y, data, BLACK);
}
// Swap boxes in an array
void swapBox(int x1, int y1, int data1, int color1, int x2, int data2, int color2) {
	int y2 = y1;
	int y = y1;
	int x = x1;
	for (int i = 1; i <= 50; i++) {
		deleteBox(x1, y1, data1);
		y1--;
		drawBox(x1, y1, data1, color1);
		deleteBox(x2, y2, data2);
		y2++;
		drawBox(x2, y2, data2, color2);
		delay(1);
	}
	while (x2 != x) {
		deleteBox(x1, y1, data1);
		x1++;
		drawBox(x1, y1, data1, color1);
		deleteBox(x2, y2, data2);
		x2--;
		drawBox(x2, y2, data2, color2);
	}
	for (int i = 1; i <= 50; i++) {
		deleteBox(x1, y1, data1);
		y1++;
		drawBox(x1, y1, data1, color1);
		deleteBox(x2, y2, data2);
		y2--;
		drawBox(x2, y2, data2, color2);
		delay(1);
	}
}

void comparison(int x, int y, int i, int j, int color, int colorNum) {
	char q1[] = "Key[ ";
	char q2[] = " ] < Key[ ";
	char q3[] = " ] ?";
	setcolor(color);
	outtextxy(x, y, q1);
	writeText(x + 40, y, i, colorNum);
	setcolor(color);
	outtextxy(x + 50, y, q2);
	writeText(x + 115, y, j, colorNum);
	setcolor(color);
	outtextxy(x + 125, y, q3);
}

// shell sort
void shellSort(Record a[], int n, int y, int R)
{
	noticeShell();
	outPut(a, n);
	// Gap
	char s[] = "Shell Sort: ";
	outtextxy(50, 10, s);
	char s2[] = "GAP:";
	outtextxy(50, y + 200, s2);
	circle(200, y + 200, R);
	int y1 = y + 200;
	for (int i = n / 2; i > 0; i /= 2)
	{
		delay(1000);
		whiteText(200, y1, i);
		delay(2500);
		for (int j = i; j < n; j++)
		{
			Record r = a[j];
			int k = j;
			// Set 2 values under consideration
			greenBox((k - i + 2) * 100, (k + 2) * 100, y, a[k - i].key, r.key, R);

			delay(2500);
			for (k; k >= i && a[k - i].key > r.key; k -= i)
			{
				greenBox((k - i + 2) * 100, (k + 2) * 100, y, a[k - i].key, r.key, R);
				delay(100);
				// wrong location
				redBox((k - i + 2) * 100, (k + 2) * 100, y, a[k - i].key, r.key, R);
				delay(2500);
				// transfer 2 value
				transferCircle((k - i + 2) * 100, (k + 2) * 100, y, a[k - i].key, r.key, R);
				a[k] = a[k - i];
			}
			if (k - i >= 0)
				whiteBox((k - i + 2) * 100, (k + 2) * 100, y, a[k - i].key, r.key, R);
			a[k] = r;

		}
	}
	whiteText(200, y1, 0);
	for (int i = 0; i < n; i++) {
		setcolor(LIGHTGREEN);
		circle((i + 2) * 100, y, R);
		whiteText((i + 2) * 100, y, a[i].key);
		delay(100);
	}
	outPut(a, n);
	setcolor(WHITE);
	complete();
}

// selection sort
void selectionSort(Record a[], int n, int y, int R)
{
	noticeSelection();
	char s[] = "Selection Sort: ";
	outtextxy(50, 10, s);
	int i, j, max_idx;
	delay(5000);
	for (i = n - 1; i > 0; i--)
	{
		int sl = 0;
		max_idx = i;
		redCircle((max_idx + 2) * 100, y, R);
		delay(1000);
		for (j = i - 1; j >= 0; j--) {
			redCircle((j + 2) * 100, y, R);
			delay(3000);
			if (a[j].key > a[max_idx].key) {
				blueCircle((j + 2) * 100, y, R);
				delay(3000);
				sl++;
				if (sl >= 2) {
					whiteCircle((max_idx + 2) * 100, y, R);
					delay(1000);
				}

				max_idx = j;

			}
			else {
				whiteCircle((j + 2) * 100, y, R);
				delay(1000);
			}

		}

		if (max_idx != i) {
			swap(a[max_idx], a[i]);
			transferCircle((max_idx + 2) * 100, (i + 2) * 100, y, a[i].key, a[max_idx].key, R);
			greenCircle((i + 2) * 100, y, R);
			delay(1000);
			whiteCircle((max_idx + 2) * 100, y, R);
			delay(1000);
		}
		else {
			greenCircle((i + 2) * 100, y, R);
			delay(1000);
		}
	}
	greenCircle((2) * 100, y, R);
	delay(1000);
	complete();
}

// quick sort
struct Stack {
	Data* top;
	void init() {
		top = nullptr;
	}
	bool Insert(Data* Y) {
		if (top == nullptr) {
			top = Y;
			top->next = nullptr;
			return true;
		}
		Y->next = top;
		top = Y;
		return true;
	}
	bool insertNode(int l, int r) {
		Data* data = (Data*)malloc(sizeof(Data));
		data->l = l; data->r = r;
		return this->Insert(data);
	}
	bool isEmpty() {
		return top == nullptr;
	}
	Data* deleteStack() {
		if (this->isEmpty() == true)
			return nullptr;
		Data* result;
		result = (Data*)calloc(1, sizeof(Data));
		result->l = top->l;
		result->r = top->r;
		Data* next = top->next;
		delete(top);
		top = next;
		return result;
	}
};
void quickSort(Record a[], int n, int y, int R)
{
	char s[] = "Quick Sort: ";
	outtextxy(50, 10, s);
	int l, r;
	delay(20000);
	int K;
	l = 1; r = n;
	K = a[l].key;
	Stack stack;
	stack.init();
	stack.insertNode(l, r);

	int Yrectangle = 600;
	whiterectangle(620, Yrectangle - 40, 780, Yrectangle - 20, 1, n);
	delay(5000);
	blackrectangle(620, Yrectangle - 40, 780, Yrectangle - 20, 1, n);
	int i, j;
	Record T;
	int slstack = 1;
	while (stack.isEmpty() == false) {
		Data* temp = stack.deleteStack();
		l = temp->l;
		r = temp->r;
		delay(10000);
		blackrectangle(620, Yrectangle - slstack * 40, 780, Yrectangle - 40 * (slstack - 1) - 20, l, r);
		slstack--;
		delay(1000);
		//i = l; j = r + 1;
		i = l + 1;
		j = r;
		K = a[l].key;
		redCircle((l + 2) * 100, y, R);
		delay(2000);
		blueCircle((i + 2) * 100, y, R);
		delay(3000);
		yellowCircle((j + 2) * 100, y, R);
		delay(3000);
		while (j > i) {
			while (K >= a[i].key && i <= j) {
				whiteCircle((i + 2) * 100, y, R);
				i++;
				blueCircle((i + 2) * 100, y, R);
				delay(2500);
			}

			while (K <= a[j].key && i <= j) {
				whiteCircle((j + 2) * 100, y, R);
				j--;
				yellowCircle((j + 2) * 100, y, R);
				if (i > j) {
					blueCircle((i + 2) * 100, y, R);
				}
				delay(2500);
			}
			// doi vi tri cho nhau
			if (j >= i) {
				transferCircle((i + 2) * 100, (j + 2) * 100, y, a[i].key, a[j].key, R);
				T = a[j];
				a[j] = a[i];
				a[i] = T;
				blueCircle((i + 2) * 100, y, R);
				delay(1000);
				yellowCircle((j + 2) * 100, y, R);
				delay(1000);

			}
		}
		// doi vi tri l va j
		if (j <= i) {
			// phan tu co 2 ptu tro len
			if (K > a[j].key) {
				delay(3000);
				transferCircle((l + 2) * 100, (j + 2) * 100, y, a[l].key, a[j].key, R);
				greenCircle((j + 2) * 100, y, R);
				delay(1000);
				greenText((j + 2) * 100, 25, j);
				whiteCircle((j + 2) * 100, y, R);
				whiteCircle((l + 2) * 100, y, R);
				whiteCircle((i + 2) * 100, y, R);
				delay(1000);
				T = a[j];
				a[j] = a[l];
				a[l] = T;
			}
			//chi co 1 phan tu
			else {
				greenCircle((j + 2) * 100, y, R);
				delay(1000);
				greenText((j + 2) * 100, 25, j);
				whiteCircle((j + 2) * 100, y, R);
				whiteCircle((i + 2) * 100, y, R);
			}
		}
		//them vao stack phia ben phai con dang xet
		if (r > j) {
			slstack++;
			whiterectangle(620, Yrectangle - slstack * 40, 780, Yrectangle - 40 * (slstack - 1) - 20, j + 1, r);
			delay(3000);

			stack.insertNode(j + 1, r);
		}
		//them vao stack phia ben phai con dang xet
		if (j > l) {
			slstack++;
			whiterectangle(620, Yrectangle - slstack * 40, 780, Yrectangle - 40 * (slstack - 1) - 20, l, j - 1);
			delay(3000);

			stack.insertNode(l, j - 1);
		}

	}
	// hoan thanh cong viec
	complete();
}

// comparison counting sort
void countingSort(Record R[], int n) {
	Record Count[100];
	Record Output[10];
	for (int i = 0; i < n; i++) {
		Count[i].key = 0;
		Output[i].key = 0;
	}

	setcolor(LIGHTGRAY);
	char array[] = "Unsorted Array: ";
	outtextxy(50, 0, array);
	drawArray(R, n, 100, 75, LIGHTGRAY);
	delay(100);

	char countArray[] = "Count Array with [n] Zero elements: ";
	outtextxy(50, 125, countArray);
	delay(100);
	drawArray(Count, n, 100, 200, LIGHTGRAY);
	delay(200);

	char outputArray[] = "Empty Output Array with [n] elements: ";
	outtextxy(50, 275, outputArray);
	drawArray(Output, n, 100, 350, LIGHTGRAY);
	delay(100);

	char plus[] = "+";
	char deleteOneChar[] = "  ";

	char countArr[] = "Count Array:                                      ";
	outtextxy(50, 125, countArr);
	for (int i = n - 1; i >= 1; i--) {
		for (int j = i - 1; j >= 0; j--) {
			comparison(350, 115, i, j, LIGHTGRAY, YELLOW);
			if (R[i].key < R[j].key) {
				glowBox(100 + 50 * i + 50, 75, R[i].key);
				delay(100);
				glowBox(100 + 50 * j + 50, 75, R[j].key);
				delay(100);
				comparison(350, 115, i, j, LIGHTGREEN, LIGHTGREEN);
				delay(100);
				glowBox(100 + 50 * j + 50, 200, Count[j].key);
				setcolor(LIGHTGREEN);
				outtextxy(100 + 50 * j + 50, 225, plus);
				delay(100);
				Count[j].key++;
				drawBox(100 + 50 * j + 50, 200, Count[j].key, LIGHTGREEN);
				delay(100);
				outtextxy(100 + 50 * j + 50, 225, deleteOneChar);
			}
			else {
				glowBox(100 + 50 * i + 50, 75, R[i].key);
				delay(100);
				glowBox(100 + 50 * j + 50, 75, R[j].key);
				delay(100);
				comparison(350, 115, i, j, LIGHTRED, LIGHTRED);
				delay(100);
				glowBox(100 + 50 * i + 50, 200, Count[i].key);
				setcolor(LIGHTRED);
				outtextxy(100 + 50 * i + 50, 225, plus);
				delay(100);
				Count[i].key++;
				drawBox(100 + 50 * i + 50, 200, Count[i].key, LIGHTRED);
				delay(100);
				outtextxy(100 + 50 * i + 50, 225, deleteOneChar);
			}
		}
	}
	//Set everything back to normal
	drawArray(R, n, 100, 75, LIGHTGRAY);
	drawArray(Count, n, 100, 200, LIGHTGRAY);
	char noirSpace[] = "                                                                                                                                                                                         ";
	outtextxy(100, 115, noirSpace);

	char outputFinal[] = "Output Array:                                                              ";
	outtextxy(50, 275, outputFinal);
	delay(1000);
	//Form the Output array
	for (int i = 0; i < n; i++) {
		Output[Count[i].key].key = R[i].key;
		glowBox(100 + 50 * i + 50, 200, Count[i].key);
		delay(100);
		glowBox(100 + 50 * Count[i].key + 50, 350, 0);
		delay(100);
		glowBox(100 + 50 * i + 50, 75, R[i].key);
		delay(100);
		drawMulticolorBox(100 + 50 * Count[i].key + 50, 350, Output[Count[i].key].key, LIGHTGRAY, YELLOW);
		delay(100);
		//Export the array in Console
		outPut(Output, n);
	}
	//Finish Stage
	drawArray(Output, n, 100, 350, YELLOW);
	int j = 1;
	char fin[] = "FINISH.";
	while (1) {
		setcolor(j);
		outtextxy(100 + n * 50 / 2, 450, fin);
		delay(10);
		j++;
	}
}
// merge sort
// Find t - 1
int findTsubOne(int value) {
	int result = -1;
	for (int i = 1; i < value; i <<= 1, ++result);  //i *= 2
	return result;
}

void mergeSort(Record R[], int n) {
	setcolor(LIGHTGRAY);
	char unsorted[] = "Array: ";
	outtextxy(200, 25, unsorted);
	drawMergeArray(R, n, 350, 200, LIGHTGRAY);
	delay(100);

	int t = findTsubOne(n);
	char tt[] = "t = ";
	outtextxy(100, 100, tt);
	writeText(125, 100, t + 1, LIGHTGRAY);
	int p0 = (1 << t);  // p0 = 2^(t-1);
	int p = p0;
	char pp[] = "p = ";
	outtextxy(100, 125, pp);
	writeText(125, 125, p, LIGHTGRAY);

	char qq[] = "q = ";
	char rr[] = "r = ";
	char dd[] = "d = ";
	char ii[] = "i = ";
	char qEqualP[] = "q != p ?";
	char rEqual0[] = "r == 0 ?";
	char iANDpResult[] = "i ^ p = ";
	char iANDp[] = "i ^ p == r ?";
	int q, r, d;
	do {
		q = p0;
		setcolor(LIGHTGRAY);
		outtextxy(100, 150, qq);
		writeText(125, 150, q, LIGHTGRAY);
		r = 0;
		outtextxy(100, 175, rr);
		writeText(125, 175, r, LIGHTGRAY);
		d = p;
		outtextxy(100, 200, dd);
		writeText(125, 200, d, LIGHTGRAY);
		delay(100);

		while (r == 0 || q != p) {
			if (r != 0) {
				d = q - p;
				setcolor(LIGHTBLUE);
				outtextxy(100, 200, dd);
				writeText(125, 200, d, LIGHTBLUE);
				q >>= 1;    // q /= 2
				outtextxy(100, 150, qq);
				writeText(125, 150, q, LIGHTBLUE);
				delay(100);
			}

			for (int i = 0; i < n - d; i++) {
				int a = i & p;
				// i =
				setcolor(LIGHTGRAY);
				outtextxy(100, 300, ii);
				writeText(120, 300, i, LIGHTGRAY);
				delay(100);
				// i ^ p = 
				setcolor(LIGHTGRAY);
				outtextxy(100, 350, iANDpResult);
				glowText(350 + 50 * i + 50, 100, i);
				delay(100);
				glowText(125, 125, p);
				delay(100);
				outtextxy(100, 375, iANDp); // i ^ p == r ?
				delay(100);
				// A[i] > A[i+d] ?
				comparison(100, 400, i, d, LIGHTGRAY, YELLOW);
				delay(100);
				glowBox(350 + 50 * i + 50, 200, R[i].key);
				delay(100);
				glowBox(350 + 50 * (i + d) + 50, 200, R[i + d].key);
				writeText(140, 350, a, YELLOW);
				delay(100);
				if ((i & p) == r) {
					setcolor(LIGHTGREEN);
					outtextxy(100, 375, iANDp);
					delay(100);
					if (R[i].key > R[i + d].key) {
						comparison(100, 400, i, d, LIGHTGREEN, LIGHTGREEN);
						delay(100);
						swapBox(350 + 50 * i + 50, 200, R[i].key, WHITE, 350 + 50 * (i + d) + 50, R[i + d].key, WHITE);
						delay(100);
						int swap = R[i].key;
						R[i].key = R[i + d].key;
						R[i + d].key = swap;
						//Export the array in Console
						outPut(R, n);
					}
					else {
						comparison(100, 400, i, d, LIGHTRED, LIGHTRED);
						delay(100);
					}
				}
				else {
					setcolor(LIGHTRED);
					outtextxy(100, 375, iANDp);
					delay(100);
					comparison(100, 400, i, d, LIGHTRED, LIGHTRED);
					delay(100);
				}
			}
			r = p;
			setcolor(WHITE);
			outtextxy(100, 175, rr);
			writeText(125, 175, r, WHITE);
			delay(100);
		}

		p >>= 1;    // p /= 2
		outtextxy(100, 125, pp);
		writeText(125, 125, p, WHITE);
	} while (p > 0);
	//Set everything back to normal
	char noirSpace[] = "                                                       ";
	setcolor(LIGHTGRAY);
	outtextxy(100, 125, pp);
	writeText(125, 125, p, LIGHTGRAY);
	outtextxy(100, 150, qq);
	writeText(125, 150, q, LIGHTGRAY);
	outtextxy(100, 175, rr);
	writeText(125, 175, r, LIGHTGRAY);
	outtextxy(100, 200, dd);
	writeText(125, 200, d, LIGHTGRAY);
	outtextxy(100, 300, noirSpace);
	outtextxy(100, 350, noirSpace);
	outtextxy(100, 375, noirSpace);
	outtextxy(100, 400, noirSpace);
	//Finish Stage
	drawMergeArray(R, n, 350, 200, YELLOW);
	char fin[] = "FINISH.";
	int j = 1;
	while (1) {
		setcolor(j);
		outtextxy(350 + n * 50 / 2, 400, fin);
		delay(10);
		j++;
	}
}
// Menu
void menu() {
	cout << "LUA CHON KIEU SAP XEP: " << endl;
	cout << "1. Shell Sort" << endl;
	cout << "2. Selection Sort" << endl;
	cout << "3. Quick Sort" << endl;
	cout << "4. Comparison Couting Sort" << endl;
	cout << "5. Merge Sort" << endl;
	cout << "0. Exit!" << endl;
}
int main()
{
	int gap = 200;
	int y = 100;
	int R = 45;
	int chon = -1;
	while (chon != 0) {
		system("cls");
		int n;
		Record a[100];
		menu();
		cout << endl << "Nhap lua chon: ";
		cin >> chon;
		switch (chon) {
		case 1: {
			inPut(a, n);
			initwindow(1500, 700, "install_graphics_h");
			draw(a, n, gap, y, R);
			shellSort(a, n, y, R);
			getch();
			closegraph();
			break;
		}
		case 2: {
			inPut(a, n);
			initwindow(1500, 700, "install_graphics_h");
			draw(a, n, gap, y, R);
			selectionSort(a, n, y, R);
			getch();
			closegraph();
			break;
		}
		case 3: {
			cout << "nhap so luong phan tu: ";
			cin >> n;
			a[0].key = -999;
			a[n + 1].key = 999;
			cout << "nhap lan luot tung phan tu" << endl;
			for (int i = 1; i <= n; i++) {
				cin >> a[i].key;
			}
			initwindow(1500, 700, "install_graphics_h");
			drawQuick(a, n, gap, y, R);
			quickSort(a, n, y, R);
			getch();
			closegraph();
			break;
		}
		case 4: {
			inPut(a, n);
			initwindow(1500, 700, "install_graphics_h");
			countingSort(a,n);
			getch();
			closegraph();
			break;
		}
		case 5: {
			inPut(a, n);
			initwindow(1500, 700, "install_graphics_h");
			mergeSort(a, n);
			getch();
			closegraph();
			break;
		}
		case 0: {
			cout << endl << "\t\t EXIT!!!" << endl;
			break;
		}
		}
	}
	return 0;
}
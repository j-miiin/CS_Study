#include "struct.h"
#include "new.h"	// ifndef ������ ���� �ߺ����� ���ԵǴ� ��� ������ ����

// header, main, function���� ������ ������

int main() {
	MyStruct PandaCoding = {
		"Panda",
		26,
	};

	display(PandaCoding);

	return 0;
}

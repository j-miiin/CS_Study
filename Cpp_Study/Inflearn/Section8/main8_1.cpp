#include "struct.h"
#include "new.h"	// ifndef 구문을 통해 중복으로 포함되는 헤더 파일을 무시

// header, main, function으로 나누어 컴파일

int main() {
	MyStruct PandaCoding = {
		"Panda",
		26,
	};

	display(PandaCoding);

	return 0;
}

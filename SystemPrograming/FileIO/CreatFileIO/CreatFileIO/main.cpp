#include <stdio.h>

#include <windows.h>
#include <tchar.h>

int _tmain(void)
{

	// 1. Ŀ�� FILE��ü ���� �� ���� ���� ����
	HANDLE hFile = CreateFile
	(
		_T("D:\\testing\\test.txt"),
		GENERIC_READ | GENERIC_WRITE,
		0,
		NULL,
		CREATE_ALWAYS,
		FILE_ATTRIBUTE_NORMAL,
		NULL
	);
	if (hFile == INVALID_HANDLE_VALUE) { printf("CreateFile failed, code : %d \n", GetLastError()); return -1; }

	// 2. FILE��ü�� ���� ����


	CloseHandle(hFile);

	return 0;
} 
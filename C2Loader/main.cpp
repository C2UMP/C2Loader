#include <iostream>
#include <Windows.h>

int main(int argc, char* argv[]) {
	STARTUPINFOA startup_info{};
	PROCESS_INFORMATION process_info{};

	std::string args{};
	for (int i{ 1 }; i < argc; i++) {
		args += argv[i];
		if (i + 1 != argc) args += " ";
	}

	CreateProcessA("TBL\\Binaries\\Win64\\Chivalry2-Win64-Shipping.exe", const_cast<char*>(args.c_str()), NULL, NULL, FALSE, 0, NULL, NULL, &startup_info, &process_info);

	return 0;
}
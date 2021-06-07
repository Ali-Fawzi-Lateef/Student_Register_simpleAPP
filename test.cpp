#include<iostream>

class student {
public:
	std::string studentName;
	int studentID;
	float rateing;
	void Mystudent() {
		std::cout << "Enter student name\n";
		std::cin >> studentName;//get input from the user
		std::cout << "Enter student ID\n";
		std::cin >> studentID;//get input from the user
		std::cout << "Enter student rateing\n";
		std::cin >> rateing;//get input from the user
	}
};

class school:student {
public:
	void Myschool() {
		std::cout << studentName << std::endl << studentID << std::endl << rateing << "%"<<std::endl;
	}
};
void options() {
	std::cout << "> Press 1 to sign student\n";
	std::cout << "> Press 2 to show students\n";
	std::cout << "> Press 3 To EXIT\n";
}
int main() {
	student STUDENT;
	school SCHOOL;
	int opt{};
	std::cout << "\t SCHOOL\n";
	do {
		options();
		std::cin >> opt;
		switch (opt) {
		case 1:
			STUDENT.Mystudent();
			break;
		case 2:
			SCHOOL.Myschool();
			break;
		case 3:
			std::cout << "Goodbye!";
			break;
		default:
			std::cout << "invalid option, try again!\n";
		}


	} while (opt != 3);
}

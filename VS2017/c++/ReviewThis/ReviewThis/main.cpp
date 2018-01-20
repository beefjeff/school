// ReviewThis.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "KeepRunning.h"

char determine_letter_grade(int score);
std::string get_range_case(char grade);

int main() {
    KeepRunning kr;
    int loop_count;





    // for loop
    std::cout << "Enter the number for the 'for' loop ";
    std::cin >> loop_count;


    for (int i = 0; i < loop_count; ++i) {
        std::cout << "'for' loop : " << i + 1 << std::endl;
    }


    // while loop
    std::cout << "Enter the number for the 'while' loop ";
    std::cin >> loop_count;

    int while_count = 0;
    while(while_count < loop_count) {
        std::cout << "'while' loop : " << while_count +1 << std::endl;
        while_count++;
    }



    // do while loop
    std::cout << "Enter the number for the 'do while' loop ";
    std::cin >> loop_count;

    int do_count =  0;
    do{
        std::cout << "'do while' loop : " << do_count +1 << std::endl;
        do_count++;

    }while(do_count < loop_count);


    // get letter grade from grade value
    int grade_value;
    std::cout << "Enter a Grade Value (like 75) ";
	std::cin >> grade_value;




    char letter_grade = determine_letter_grade(grade_value);
    std::string range = get_range_case(letter_grade);

    std::cout << "Your grade for " << grade_value << " is " << letter_grade << std::endl;
    std::cout << "The range for your grade is " << range << std::endl;


    std::cout << "\n\nPress Enter to Continue." << std::endl;

    //cin.get();
    // see KeepRunning Class
    return 0;
}





/**
    determine_letter_grade
    get a letter grade based on an integer between 0 and 100

    @param score grade score
    @return char letter grade based on score
*/
char determine_letter_grade(int score){
	while (score < 60 || score > 100)
	{
		//std::cout << "A score of "  << score << " is out of range. Please try again.";
		std::cout << "Enter a Grade Value (between 60 and 100): ";
		std::cin >> score;
	}


    if(score >= 90){
        return 'A';}
    else if(score >= 80)
        return 'B';
    else if(score >= 70)
        return 'C';
    else
        return 'D';
}





/**
    get_range_case
    get the range of a letter grade

    @param grade char input letter grade must be a char A, B, C, or D
    @return string a string representing the grade range of the give letter grade or "Incorrect Value"
*/
std::string get_range_case(char grade){
    switch(grade){
        case 'A':
            return "90 and Above";
        case 'B':
            return "80 - 90";
        case 'C':
            return "70 - 79";
        case 'D':
            return "60 - 69";
        default:
            return "Incorrect Value";
    }

}

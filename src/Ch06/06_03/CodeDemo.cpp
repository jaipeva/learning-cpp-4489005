// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"
#include <fstream>

void initialize(StudentRecords&);
void initialize_fromFiles(StudentRecords&, std::ifstream&);
void createCard(StudentRecords&, std::ofstream&);

int main(){
    int id;
    StudentRecords SR;
    std::ifstream inFile2; 
    std::ofstream outFile;
    
    initialize_fromFiles(SR, inFile2);

    createCard(SR, outFile);
    //createCard(StudentRecord& card, std::ofstream outfile)
    //initialize(SR);

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    //SR.report_card(id);
    
    std::cout << std::endl << std::endl;
    return (0);
}
void initialize_fromFiles(StudentRecords& srec, std::ifstream& inFile){
    std::string str, sname;
    int number, sid, cid;
    char letter;
    unsigned char credit;
    int count=0;
   
    std::cout << "Call to initialize_fromFiles" << std::endl;
    
    inFile.open("students.txt");
    
    if (inFile.fail())
        std::cout << std::endl << "File students.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, sname);
            srec.add_student(sid,sname);
            count++;       
        }
        inFile.close();
        std::cout << std::endl << "File students.txt close with count= " << count << std::endl;
    }
    count =0;
    inFile.open("grades.txt");
    
    if (inFile.fail())
        std::cout << std::endl << "File grades.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile,str);
            letter = str[0];
            srec.add_grade(sid,cid,letter);
            count++;
        }
        inFile.close();
        std::cout << std::endl << "File grades.txt close with count= " << count << std::endl;
    }  
    
    count =0;
    inFile.open("courses.txt");
    
    if (inFile.fail())
        std::cout << std::endl << "File courses.txt not found!" << std::endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, sname);
            getline(inFile,str);
            credit = str[0];
            srec.add_course(cid, sname, credit);
            count++;
        }
        inFile.close();
        std::cout << std::endl << "File courses.txt close with count= " << count << std::endl;
    }  
}
#if (1)
void createCard(StudentRecords& card, std::ofstream& outfile){
 #if (1)   
    std::string str, sname;
    int number, sid, cid;
    char letter;
    unsigned char credit;
    int count=0;
   
    std::cout << "Call to CreateCard" << std::endl;
    
    outfile.open("report.txt");

    if (outfile.fail()){
        std::cout << std::endl << "File courses.txt not found!" << std::endl;
    
    }
    else{
        //for
        outfile << "student Name= " << card.get_student_name (1) << std::endl;
        outfile << "=course= " << std::endl; 
        outfile << card.get_course_name(1) << std::endl;
        outfile << card.get_course_name(2) << std::endl;
        outfile << "=grados= " << std::endl;
        outfile << card.get_course_credits(1) << std::endl;
        outfile << "GPA= " << card.get_GPA(1) << std::endl;
    }

#endif

}
#endif    

void initialize(StudentRecords& srec){
    srec.add_student(1, "George P. Burdell");
    srec.add_student(2, "Nancy Rhodes");

    srec.add_course(1, "Algebra", 5);
    srec.add_course(2, "Physics", 4);
    srec.add_course(3, "English", 3);
    srec.add_course(4, "Economics", 4);

    srec.add_grade(1, 1, 'B');
    srec.add_grade(1, 2, 'A');
    srec.add_grade(1, 3, 'C');
    srec.add_grade(2, 1, 'A'); 
    srec.add_grade(2, 2, 'A');
    srec.add_grade(2, 4, 'B');
}

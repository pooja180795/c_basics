#ifndef STUDENT_DATA
#define STUDENT_DATA


    typedef struct{
        int roll_no;
        char name[50];
        int math;
        int science;
        int english;
    }stu;

    void add_student(stu *s, int size);
    void display_student(stu *s, int size);
    void find_topper(stu *s, int size);
    void save_student(stu *s, int size);
    void fetch_student(int size);

#endif

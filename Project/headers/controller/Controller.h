//controller dos stores

#include "View.h"
#include "Clienteview.h"
#include "StudentService.h"
#include "SubjectView.h"
#include "SubjectService.h"
#include "InstructorView.h"
#include "InstructorService.h"
#include "LectureView.h"
#include "LectureService.h"
#include "EnrollView.h"
#include "EnrollService.h"
class Controller{

private:
    View view;
    StudentView studentView;
    StudentService *studentService;
    SubjectView subjectView;
    SubjectService *subjectService;
    InstructorView instructorView;
    InstructorService *instructorService;
    LectureView lectureView;
    LectureService *lectureService;
    EnrollView enrollView;
    EnrollService *enrollService;

    void runStudents();
    void runInstructors();
    void runSubjects();
    void runEnrolls();
    void runLectures();

public:
    Controller(StudentService *studentService,
               SubjectService *subjectService,
               InstructorService *instructorService,
               LectureService *lectureService,
               EnrollService *enrollService);
    void run();
};




#endif /* HEADERS_CONTROLLERS_CONTROLLER_H_ */

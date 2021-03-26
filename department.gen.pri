#################################################################################################
## File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! ##
#################################################################################################

!contains(DEFINES, _QX_NO_PRECOMPILED_HEADER) {
PRECOMPILED_HEADER += $$PWD/include/department_precompiled_header.gen.h
} # !contains(DEFINES, _QX_NO_PRECOMPILED_HEADER)

HEADERS += $$PWD/include/department_precompiled_header.gen.h
HEADERS += $$PWD/include/department_export.gen.h

HEADERS += $$PWD/include/Activity.gen.h
HEADERS += $$PWD/include/Collaboration.gen.h
HEADERS += $$PWD/include/Employer.gen.h
HEADERS += $$PWD/include/Task.gen.h
HEADERS += $$PWD/include/Practice.gen.h
HEADERS += $$PWD/include/Event.gen.h
HEADERS += $$PWD/include/Person.gen.h
HEADERS += $$PWD/include/Group.gen.h
HEADERS += $$PWD/include/Student.gen.h
HEADERS += $$PWD/include/Head_employer.gen.h
HEADERS += $$PWD/include/Contact_employer.gen.h
HEADERS += $$PWD/include/Head_university.gen.h
HEADERS += $$PWD/include/Department.gen.h
HEADERS += $$PWD/include/Passing_practice.gen.h
HEADERS += $$PWD/include/Task_practice.gen.h
HEADERS += $$PWD/include/Report.gen.h
HEADERS += $$PWD/include/Practice_result.gen.h
HEADERS += $$PWD/include/Discipline.gen.h
HEADERS += $$PWD/include/Educational_program.gen.h
HEADERS += $$PWD/include/Result_education.gen.h
HEADERS += $$PWD/custom/include/Activity.h
HEADERS += $$PWD/custom/include/Collaboration.h
HEADERS += $$PWD/custom/include/Employer.h
HEADERS += $$PWD/custom/include/Task.h
HEADERS += $$PWD/custom/include/Practice.h

contains(DEFINES, _QX_UNITY_BUILD) {

SOURCES += $$PWD/src/department_all.gen.cpp

} else {

SOURCES += $$PWD/src/Activity.gen.cpp
SOURCES += $$PWD/src/Collaboration.gen.cpp
SOURCES += $$PWD/src/Employer.gen.cpp
SOURCES += $$PWD/src/Task.gen.cpp
SOURCES += $$PWD/src/Practice.gen.cpp
SOURCES += $$PWD/src/Event.gen.cpp
SOURCES += $$PWD/src/Person.gen.cpp
SOURCES += $$PWD/src/Group.gen.cpp
SOURCES += $$PWD/src/Student.gen.cpp
SOURCES += $$PWD/src/Head_employer.gen.cpp
SOURCES += $$PWD/src/Contact_employer.gen.cpp
SOURCES += $$PWD/src/Head_university.gen.cpp
SOURCES += $$PWD/src/Department.gen.cpp
SOURCES += $$PWD/src/Passing_practice.gen.cpp
SOURCES += $$PWD/src/Task_practice.gen.cpp
SOURCES += $$PWD/src/Report.gen.cpp
SOURCES += $$PWD/src/Practice_result.gen.cpp
SOURCES += $$PWD/src/Educational_program.gen.cpp
SOURCES += $$PWD/src/Discipline.gen.cpp
SOURCES += $$PWD/src/Result_education.gen.cpp
SOURCES += $$PWD/custom/src/Activity.cpp
SOURCES += $$PWD/custom/src/Collaboration.cpp
SOURCES += $$PWD/custom/src/Employer.cpp
SOURCES += $$PWD/custom/src/Task.cpp
SOURCES += $$PWD/custom/src/Practice.cpp

} # contains(DEFINES, _QX_UNITY_BUILD)

include($$PWD/custom/department.pri)

#ifndef _DEPARTMENT_STUDENT_H_
#define _DEPARTMENT_STUDENT_H_

class Group;
class Person;
class Passing_practice;
class Educational_program;
class Report;
class Practice_result;

class DEPARTMENT_EXPORT Student
{

   QX_REGISTER_FRIEND_CLASS(Student)

public:

   typedef std::shared_ptr<Group> type_group;
   typedef std::shared_ptr<Person> type_person;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > type_list_of_passing_practice;
   typedef std::shared_ptr<Educational_program> type_Education_program;
   typedef qx::QxCollection<long, std::shared_ptr<Report> > type_list_of_reports;
   typedef qx::QxCollection<long, std::shared_ptr<Practice_result> > type_list_of_practice_result;




protected:

   long m_Strudent_id;
   type_group m_group;
   type_person m_person;
   type_list_of_passing_practice m_list_of_passing_practice;
   type_Education_program m_Education_program;
   type_list_of_reports m_list_of_reports;
   type_list_of_practice_result m_list_of_practice_result;



public:

   Student();
   Student(const long & id);
   virtual ~Student();

   long getStrudent_id() const;
   type_group getgroup() const;
   type_person getperson() const;
   type_list_of_passing_practice getlist_of_passing_practice() const;
   type_list_of_passing_practice & list_of_passing_practice();
   const type_list_of_passing_practice & list_of_passing_practice() const;
   type_Education_program getEducation_program() const;
   type_list_of_reports getlist_of_reports() const;
   type_list_of_reports & list_of_reports();
   const type_list_of_reports & list_of_reports() const;
   type_list_of_practice_result getlist_of_practice_result() const;
   type_list_of_practice_result & list_of_practice_result();
   const type_list_of_practice_result & list_of_practice_result() const;


   void setStrudent_id(const long & val);
   void setgroup(const type_group & val);
   void setperson(const type_person & val);
   void setlist_of_passing_practice(const type_list_of_passing_practice & val);
   void setEducation_program(const type_Education_program & val);
   void setlist_of_reports(const type_list_of_reports & val);
   void setlist_of_practice_result(const type_list_of_practice_result & val);


   type_list_of_passing_practice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_passing_practice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_group getgroup(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_person getperson(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Education_program getEducation_program(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_reports getlist_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_reports & list_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_practice_result getlist_of_practice_result(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_practice_result & list_of_practice_result(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);



public:

   static QString relation_group(bool key = false) { return (key ? QString("group") : QString("group_id")); }
   static QString relation_person(bool key = false) { Q_UNUSED(key); return "person"; }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_Education_program(bool key = false) { Q_UNUSED(key); return "Education_program"; }
   static QString relation_list_of_reports(bool key = false) { Q_UNUSED(key); return "list_of_reports"; }
   static QString relation_list_of_practice_result(bool key = false) { Q_UNUSED(key); return "list_of_practice_result"; }



public:

   static QString column_Strudent_id(bool key = false) { Q_UNUSED(key); return "Strudent_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Student") : QString("t_Student")); }

};

typedef std::shared_ptr<Student> Student_ptr;
typedef qx::QxCollection<long, Student_ptr> list_of_Student;
typedef std::shared_ptr<list_of_Student> list_of_Student_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Student, qx::trait::no_base_class_defined, 0, Student)
#include "../include/Report.gen.h"
#include "../include/Practice_result.gen.h"
#include "../include/Educational_program.gen.h"
#include "../include/Passing_practice.gen.h"
#include "../include/Group.gen.h"
#include "../include/Person.gen.h"



#endif // _DEPARTMENT_STUDENT_H_

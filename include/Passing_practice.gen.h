#ifndef _DEPARTMENT_PASSING_PRACTICE_H_
#define _DEPARTMENT_PASSING_PRACTICE_H_

class Practice;
class Student;
class Head_employer;
class Head_university;
class Task_practice;
class Employer;
class Report;
class Practice_result;

class DEPARTMENT_EXPORT Passing_practice
{

   QX_REGISTER_FRIEND_CLASS(Passing_practice)

public:

   typedef std::shared_ptr<Practice> type_practice;

   typedef std::shared_ptr<Head_employer> HeadEmployer_ptr;
   typedef std::shared_ptr<Head_university> HeadUniversity_ptr;
   typedef std::shared_ptr<Task_practice> Task_ptr;
   typedef std::shared_ptr<Employer> Employer_ptr;
   typedef std::shared_ptr<Student> Student_ptr;
   typedef std::shared_ptr<Report> Report_ptr;
   typedef std::shared_ptr<Practice_result> PracticeResult_ptr;



protected:

   long m_Passing_practice_id;
   QDate m_beginning;
   QDate m_ending;
   type_practice m_practice;

   HeadEmployer_ptr m_head_employer_id;
   HeadUniversity_ptr m_head_university_id;
   Task_ptr m_task;
   Employer_ptr m_employer;
   Student_ptr m_studen;
   Report_ptr m_Report;
   PracticeResult_ptr m_practice_result;


public:

   Passing_practice();
   Passing_practice(const long & id);
   virtual ~Passing_practice();

   long getPassing_practice_id() const;
   QDate getbeginning() const;
   QDate getending() const;
   type_practice getpractice() const;
   Student_ptr getstuden() const;
   HeadEmployer_ptr gethead_employer() const;
   HeadUniversity_ptr gethead_university() const;
   Task_ptr gettask() const;
   Employer_ptr getemployer() const;
   Report_ptr getReport() const;
   PracticeResult_ptr getpractice_result() const;



   void setpassing_practice(const long & val);
   void setbeginning(const QDate & val);
   void setending(const QDate & val);
   void setpractice(const type_practice & val);

   void sethead_employer(const HeadEmployer_ptr & val);
   void sethead_university(const HeadUniversity_ptr & val);
   void settask(const Task_ptr & val);
   void setemployer(const Employer_ptr & val);
   void setstuden(const Student_ptr & val);
   void setreport(const Report_ptr & val);
   void setpractice_result(const PracticeResult_ptr & val);

   Task_ptr gettask(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_practice getpractice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   HeadEmployer_ptr gethead_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   HeadUniversity_ptr gethead_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Employer_ptr getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Student_ptr getstuden(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Report_ptr getreport(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   PracticeResult_ptr getpractice_result(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_practice(bool key = false) { return (key ? QString("practice") : QString("practice_id")); }

   static QString relation_head_employer_id(bool key = false) { Q_UNUSED(key); return "head_employer_id"; }
   static QString relation_head_university_id(bool key = false) { Q_UNUSED(key); return "head_university_id"; }
   static QString relation_task(bool key = false) { return (key ? QString("task") : QString("task_id")); }
   static QString relation_employer(bool key = false) { return (key ? QString("employer") : QString("employer_id")); }
   static QString relation_studen(bool key = false) { return (key ? QString("studen") : QString("Student_id")); }
   static QString relation_report(bool key = false) { Q_UNUSED(key); return "Report"; }
   static QString relation_practice_result(bool key = false) { Q_UNUSED(key); return "Practice_result"; }



public:

   static QString column_Passing_practice_id(bool key = false) { Q_UNUSED(key); return "Passing_practice_id"; }
   static QString column_beginning(bool key = false) { Q_UNUSED(key); return "beginning"; }
   static QString column_ending(bool key = false) { Q_UNUSED(key); return "ending"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Passing_practice") : QString("t_Passing_practice")); }

};

typedef std::shared_ptr<Passing_practice> Passing_practice_ptr;
typedef qx::QxCollection<long, Passing_practice_ptr> list_of_Passing_practice;
typedef std::shared_ptr<list_of_Passing_practice> list_of_Passing_practice_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Passing_practice, qx::trait::no_base_class_defined, 0, Passing_practice)

#include "../include/Report.gen.h"
#include "../include/Employer.gen.h"
#include "../include/Practice.gen.h"
#include "../include/Student.gen.h"
#include "../include/Head_employer.gen.h"
#include "../include/Head_university.gen.h"
#include "../include/Task_practice.gen.h"



#endif // _DEPARTMENT_PASSING_PRACTICE_H_

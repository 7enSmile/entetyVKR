#ifndef _DEPARTMENT_PASSING_PRACTICE_H_
#define _DEPARTMENT_PASSING_PRACTICE_H_

class Practice;
class Student;
class Head_employer;
class Head_university;
class Task_practice;
class Employer;

class DEPARTMENT_EXPORT Passing_practice
{

   QX_REGISTER_FRIEND_CLASS(Passing_practice)

public:

   typedef std::shared_ptr<Practice> type_practice;
   typedef qx::QxCollection<long, std::shared_ptr<Student> > type_list_of_Student;
   typedef std::shared_ptr<Head_employer> type_Head_employer;
   typedef std::shared_ptr<Head_university> type_Head_university;
   typedef std::shared_ptr<Task_practice> type_task;
   typedef std::shared_ptr<Employer> type_employer;


protected:

   long m_Passing_practice_id;
   QDate m_beginning;
   QDate m_ending;
   type_practice m_practice;
   type_list_of_Student m_list_of_Student;
   type_Head_employer m_Head_employer_id;
   type_Head_university m_Head_university_id;
   type_task m_task;
   type_employer m_employer;


public:

   Passing_practice();
   Passing_practice(const long & id);
   virtual ~Passing_practice();

   long getPassing_practice_id() const;
   QDate getbeginning() const;
   QDate getending() const;
   type_practice getpractice() const;
   type_list_of_Student getlist_of_Student() const;
   type_list_of_Student & list_of_Student();
   const type_list_of_Student & list_of_Student() const;
   type_Head_employer getHead_employer() const;
   type_Head_university getHead_university() const;
   type_task gettask() const;
   type_employer getemployer() const;



   void setPassing_practice(const long & val);
   void setbeginning(const QDate & val);
   void setending(const QDate & val);
   void setpractice(const type_practice & val);
   void setlist_of_Student(const type_list_of_Student & val);
   void setHead_employer(const type_Head_employer & val);
   void setHead_university(const type_Head_university & val);
   void settask(const type_task & val);
   void setemployer(const type_employer & val);

   type_task gettask(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_practice getpractice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Student getlist_of_Student(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Student & list_of_Student(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_employer getHead_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_Head_university getHead_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_employer getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_practice(bool key = false) { return (key ? QString("practice") : QString("practice_id")); }
   static QString relation_list_of_Student(bool key = false) { Q_UNUSED(key); return "list_of_Student"; }
   static QString relation_Head_employer_id(bool key = false) { Q_UNUSED(key); return "Head_employer_id"; }
   static QString relation_Head_university_id(bool key = false) { Q_UNUSED(key); return "Head_university_id"; }
   static QString relation_task(bool key = false) { return (key ? QString("task") : QString("task_id")); }
   static QString relation_employer(bool key = false) { return (key ? QString("employer") : QString("employer_id")); }



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
#include "../include/Employer.gen.h"
#include "../include/Practice.gen.h"
#include "../include/Student.gen.h"
#include "../include/Head_employer.gen.h"
#include "../include/Head_university.gen.h"
#include "../include/Task_practice.gen.h"



#endif // _DEPARTMENT_PASSING_PRACTICE_H_

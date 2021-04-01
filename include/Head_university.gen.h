#ifndef _DEPARTMENT_HEAD_UNIVERSITY_H_
#define _DEPARTMENT_HEAD_UNIVERSITY_H_

class Person;
class Department;
class Passing_practice;
class Report;

class DEPARTMENT_EXPORT Head_university
{

   QX_REGISTER_FRIEND_CLASS(Head_university)

public:

   typedef std::shared_ptr<Person> Person_ptr;
   typedef std::shared_ptr<Department> Department_ptr;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > ListOfPassingPractice;
   typedef qx::QxCollection<long, std::shared_ptr<Report> > ListOfReport;

protected:

   long m_Head_university_id;
   Person_ptr m_persone;
   Department_ptr m_department;
   ListOfPassingPractice m_list_of_passing_practice;
   ListOfReport m_list_of_Reports;

public:

   Head_university();
   Head_university(const long & id);
   virtual ~Head_university();

   long getHead_university_id() const;
   Person_ptr getpersone() const;
   Department_ptr getdepartment() const;
   ListOfPassingPractice getlist_of_passing_practice() const;
   ListOfPassingPractice & list_of_passing_practice();
   const ListOfPassingPractice & list_of_passing_practice() const;
   ListOfReport getlist_of_Reports() const;
   ListOfReport & list_of_Reports();
   const ListOfReport & list_of_Reports() const;

   void setHead_university_id(const long & val);
   void setpersone(const Person_ptr & val);
   void setdepartment(const Department_ptr & val);
   void setlist_of_passing_practice(const ListOfPassingPractice & val);
   void setlist_of_Reports(const ListOfReport & val);

   ListOfPassingPractice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Person_ptr getpersone(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Department_ptr getdepartment(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfReport getlist_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfReport & list_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);



public:

   static QString relation_persone(bool key = false) { return (key ? QString("persone") : QString("persone_id")); }
   static QString relation_department(bool key = false) { return (key ? QString("department") : QString("department_id")); }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_list_of_Reports(bool key = false) { Q_UNUSED(key); return "list_of_Reports"; }


public:

   static QString column_Head_university_id(bool key = false) { Q_UNUSED(key); return "Head_university_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Head_university") : QString("t_Head_university")); }

};

typedef std::shared_ptr<Head_university> Head_university_ptr;
typedef qx::QxCollection<long, Head_university_ptr> list_of_Head_university;
typedef std::shared_ptr<list_of_Head_university> list_of_Head_university_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Head_university, qx::trait::no_base_class_defined, 0, Head_university)

#include "../include/Passing_practice.gen.h"
#include "../include/Person.gen.h"
#include "../include/Department.gen.h"
#include "../include/Report.gen.h"


#endif // _DEPARTMENT_HEAD_UNIVERSITY_H_

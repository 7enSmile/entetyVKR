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

   typedef std::shared_ptr<Person> type_persone;
   typedef std::shared_ptr<Department> type_department;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > type_list_of_passing_practice;
   typedef qx::QxCollection<long, std::shared_ptr<Report> > type_list_of_Reports;

protected:

   long m_Head_university_id;
   type_persone m_persone;
   type_department m_department;
   type_list_of_passing_practice m_list_of_passing_practice;
   type_list_of_Reports m_list_of_Reports;

public:

   Head_university();
   Head_university(const long & id);
   virtual ~Head_university();

   long getHead_university_id() const;
   type_persone getpersone() const;
   type_department getdepartment() const;
   type_list_of_passing_practice getlist_of_passing_practice() const;
   type_list_of_passing_practice & list_of_passing_practice();
   const type_list_of_passing_practice & list_of_passing_practice() const;
   type_list_of_Reports getlist_of_Reports() const;
   type_list_of_Reports & list_of_Reports();
   const type_list_of_Reports & list_of_Reports() const;

   void setHead_university_id(const long & val);
   void setpersone(const type_persone & val);
   void setdepartment(const type_department & val);
   void setlist_of_passing_practice(const type_list_of_passing_practice & val);
   void setlist_of_Reports(const type_list_of_Reports & val);

   type_list_of_passing_practice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_passing_practice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_persone getpersone(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_department getdepartment(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Reports getlist_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Reports & list_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);



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

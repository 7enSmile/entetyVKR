#ifndef _DEPARTMENT_HEAD_EMPLOYER_H_
#define _DEPARTMENT_HEAD_EMPLOYER_H_

class Employer;
class Person;
class Passing_practice;
class Report;

class DEPARTMENT_EXPORT Head_employer
{

   QX_REGISTER_FRIEND_CLASS(Head_employer)

public:

   typedef std::shared_ptr<Employer> type_employer;
   typedef std::shared_ptr<Person> type_person;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > type_list_of_passing_practice;
   typedef qx::QxCollection<long, std::shared_ptr<Report> > type_list_of_Reports;

protected:

   long m_Head_employer;
   type_employer m_employer;
   type_person m_person;
   type_list_of_passing_practice m_list_of_passing_practice;
   type_list_of_Reports m_list_of_Reports;

public:

   Head_employer();
   Head_employer(const long & id);
   virtual ~Head_employer();

   long getHead_employer() const;
   type_list_of_passing_practice getlist_of_passing_practice() const;
   type_list_of_passing_practice & list_of_passing_practice();
   const type_list_of_passing_practice & list_of_passing_practice() const;
   type_employer getemployer() const;
   type_person getperson() const;
   type_list_of_Reports getlist_of_Reports() const;
   type_list_of_Reports & list_of_Reports();
   const type_list_of_Reports & list_of_Reports() const;

   void setHead_employer_id(const long & val);
   void setemployer(const type_employer & val);
   void setperson(const type_person & val);
   void setlist_of_passing_practice(const type_list_of_passing_practice & val);
    void setlist_of_Reports(const type_list_of_Reports & val);

   type_list_of_passing_practice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_passing_practice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

   type_employer getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_person getperson(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Reports getlist_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Reports & list_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_employer(bool key = false) { Q_UNUSED(key); return "employer"; }
   static QString relation_person_id(bool key = false) { Q_UNUSED(key); return "person_id"; }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_list_of_Reports(bool key = false) { Q_UNUSED(key); return "list_of_Reports"; }


public:

   static QString column_Head_employer_id(bool key = false) { Q_UNUSED(key); return "Head_employer_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Head_employer") : QString("t_Head_employer")); }

};

typedef std::shared_ptr<Head_employer> Head_employer_ptr;
typedef qx::QxCollection<long, Head_employer_ptr> list_of_Head_employer;
typedef std::shared_ptr<list_of_Head_employer> list_of_Head_employer_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Head_employer, qx::trait::no_base_class_defined, 0, Head_employer)

#include "../include/Passing_practice.gen.h"
#include "../include/Employer.gen.h"
#include "../include/Person.gen.h"
#include "../include/Report.gen.h"


#endif // _DEPARTMENT_HEAD_EMPLOYER_H_

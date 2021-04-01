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

   typedef std::shared_ptr<Employer> Employer_ptr;
   typedef std::shared_ptr<Person> Person_ptr;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > ListOfPassingPractice;
   typedef qx::QxCollection<long, std::shared_ptr<Report> > ListOfReport;

protected:

   long m_head_employer;
   Employer_ptr m_employer;
   Person_ptr m_person;
   ListOfPassingPractice m_list_of_passing_practice;
   ListOfReport m_list_of_reports;

public:

   Head_employer();
   Head_employer(const long & id);
   virtual ~Head_employer();

   long getHead_employer() const;
   ListOfPassingPractice getlist_of_passing_practice() const;
   ListOfPassingPractice & list_of_passing_practice();
   const ListOfPassingPractice & list_of_passing_practice() const;
   Employer_ptr getemployer() const;
   Person_ptr getperson() const;
   ListOfReport getlist_of_reports() const;
   ListOfReport & list_of_reports();
   const ListOfReport & list_of_reports() const;

   void setHead_employer_id(const long & val);
   void setemployer(const Employer_ptr & val);
   void setperson(const Person_ptr & val);
   void setlist_of_passing_practice(const ListOfPassingPractice & val);
    void setlist_of_reports(const ListOfReport & val);

   ListOfPassingPractice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

   Employer_ptr getemployer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   Person_ptr getperson(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfReport getlist_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfReport & list_of_reports(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_employer(bool key = false) { Q_UNUSED(key); return "employer"; }
   static QString relation_Persone(bool key = false) { Q_UNUSED(key); return "Persone"; }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }
   static QString relation_list_of_reports(bool key = false) { Q_UNUSED(key); return "list_of_reports"; }


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

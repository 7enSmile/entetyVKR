/************************************************************************************************
** File created by QxEntityEditor 1.2.6 (2021/03/24 12:12) : please, do NOT modify this file ! **
************************************************************************************************/

#ifndef _DEPARTMENT_EMPLOYER_H_
#define _DEPARTMENT_EMPLOYER_H_

class Activity;
class Collaboration;
class Task;
class Practice;
class Events;
class Head_employer;
class Contact_employer;
class Passing_practice;


class DEPARTMENT_EXPORT Employer
{

   QX_REGISTER_FRIEND_CLASS(Employer)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Activity> > type_list_of_Activity;
   typedef qx::QxCollection<long, std::shared_ptr<Collaboration> > type_list_of_Collaboration;
   typedef qx::QxCollection<long, std::shared_ptr<Task> > type_list_of_Task;
   typedef qx::QxCollection<long, std::shared_ptr<Practice> > type_list_of_Practice;
   typedef qx::QxCollection<long, std::shared_ptr<Events> > type_list_of_Events;
   typedef qx::QxCollection<long, std::shared_ptr<Head_employer> > type_list_of_Head_employer;
   typedef qx::QxCollection<long, std::shared_ptr<Contact_employer> > type_list_of_Contact_employer;
   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > type_list_of_passing_practice;


protected:

   long m_Employer_id;
   QString m_name;
   type_list_of_Activity m_list_of_Activity;
   type_list_of_Collaboration m_list_of_Collaboration;
   type_list_of_Task m_list_of_Task;
   type_list_of_Practice m_list_of_Practice;
   type_list_of_Events m_list_of_Events;
   type_list_of_Head_employer m_list_of_Head_employer;
   type_list_of_Contact_employer m_list_of_Contact_employer;
   type_list_of_passing_practice m_list_of_passing_practice;


public:

   Employer();
   Employer(const long & id);
   virtual ~Employer();

   long getEmployer_id() const;
   QString getname() const;
   type_list_of_Activity getlist_of_Activity() const;
   type_list_of_Activity & list_of_Activity();
   const type_list_of_Activity & list_of_Activity() const;
   type_list_of_Collaboration getlist_of_Collaboration() const;
   type_list_of_Collaboration & list_of_Collaboration();
   const type_list_of_Collaboration & list_of_Collaboration() const;
   type_list_of_Task getlist_of_Task() const;
   type_list_of_Task & list_of_Task();
   const type_list_of_Task & list_of_Task() const;
   type_list_of_Practice getlist_of_Practice() const;
   type_list_of_Practice & list_of_Practice();
   const type_list_of_Practice & list_of_Practice() const;
   type_list_of_Events getlist_of_Events() const;
   type_list_of_Events & list_of_Events();
   const type_list_of_Events & list_of_Events() const;
   type_list_of_Head_employer getlist_of_Head_employer() const;
   type_list_of_Head_employer & list_of_Head_employer();
   const type_list_of_Head_employer & list_of_Head_employer() const;
   type_list_of_Contact_employer getlist_of_Contact_employer() const;
   type_list_of_Contact_employer & list_of_Contact_employer();
   const type_list_of_Contact_employer & list_of_Contact_employer() const;
   type_list_of_passing_practice getlist_of_passing_practice() const;
   type_list_of_passing_practice & list_of_passing_practice();
   const type_list_of_passing_practice & list_of_passing_practice() const;

   void setEmployer_id(const long & val);
   void setname(const QString & val);
   void setlist_of_Activity(const type_list_of_Activity & val);
   void setlist_of_Collaboration(const type_list_of_Collaboration & val);
   void setlist_of_Task(const type_list_of_Task & val);
   void setlist_of_Practice(const type_list_of_Practice & val);
   void setlist_of_Events(const type_list_of_Events & val);
   void setlist_of_Head_employer(const type_list_of_Head_employer & val);
   void setlist_of_Contact_employer(const type_list_of_Contact_employer & val);
   void setlist_of_passing_practice(const type_list_of_passing_practice & val);


   type_list_of_Activity getlist_of_Activity(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Activity & list_of_Activity(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Collaboration getlist_of_Collaboration(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Collaboration & list_of_Collaboration(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Task getlist_of_Task(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Task & list_of_Task(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Practice getlist_of_Practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Practice & list_of_Practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Events getlist_of_Events(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Events & list_of_Events(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Head_employer getlist_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Head_employer & list_of_Head_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Contact_employer getlist_of_Contact_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Contact_employer & list_of_Contact_employer(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_passing_practice getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_passing_practice & list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);



public:

   static QString relation_list_of_Activity(bool key = false) { Q_UNUSED(key); return "list_of_Activity"; }
   static QString relation_list_of_Collaboration(bool key = false) { Q_UNUSED(key); return "list_of_Collaboration"; }
   static QString relation_list_of_Task(bool key = false) { Q_UNUSED(key); return "list_of_Task"; }
   static QString relation_list_of_Practice(bool key = false) { Q_UNUSED(key); return "list_of_Practice"; }
   static QString relation_list_of_Events(bool key = false) { Q_UNUSED(key); return "list_of_Events"; }
   static QString relation_list_of_Head_employer(bool key = false) { Q_UNUSED(key); return "list_of_Head_employer"; }
   static QString relation_list_of_Contact_employer(bool key = false) { Q_UNUSED(key); return "list_of_Contact_employer"; }
   static QString relation_list_of_passing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passing_practice"; }


public:

   static QString column_Employer_id(bool key = false) { Q_UNUSED(key); return "Employer_id"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Employer") : QString("t_Employer")); }

};

typedef std::shared_ptr<Employer> Employer_ptr;
typedef qx::QxCollection<long, Employer_ptr> list_of_Employer;
typedef std::shared_ptr<list_of_Employer> list_of_Employer_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Employer, qx::trait::no_base_class_defined, 0, Employer)

#include "../include/Activity.gen.h"
#include "../include/Collaboration.gen.h"
#include "../include/Task.gen.h"
#include "../include/Practice.gen.h"
#include "../include/Event.gen.h"
#include "../include/Head_employer.gen.h"
#include "../include/Contact_employer.gen.h"
#include "../custom/include/Employer.h"
#include "../include/Passing_practice.gen.h"
#endif // _DEPARTMENT_EMPLOYER_H_

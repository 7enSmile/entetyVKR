#ifndef _DEPARTMENT_TASK_PRACTICE_H_
#define _DEPARTMENT_TASK_PRACTICE_H_

class Passing_practice;

class DEPARTMENT_EXPORT Task_practice
{

   QX_REGISTER_FRIEND_CLASS(Task_practice)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Passing_practice> > ListOfPassingPractice;

protected:

   long m_Task_id;
   QString m_description;
   ListOfPassingPractice m_list_of_passeing_practice;

public:

   Task_practice();
   Task_practice(const long & id);
   virtual ~Task_practice();

   long getTask_id() const;
   QString getdescription() const;
   ListOfPassingPractice getlist_of_passeing_practice() const;
   ListOfPassingPractice & list_of_passeing_practice();
   const ListOfPassingPractice & list_of_passeing_practice() const;

   void setTask_id(const long & val);
   void setdescription(const QString & val);
   void setlist_of_passeing_practice(const ListOfPassingPractice & val);

   ListOfPassingPractice getlist_of_passeing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   ListOfPassingPractice & list_of_passeing_practice(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_passeing_practice(bool key = false) { Q_UNUSED(key); return "list_of_passeing_practice"; }

public:

   static QString column_Task_id(bool key = false) { Q_UNUSED(key); return "Task_id"; }
   static QString column_description(bool key = false) { Q_UNUSED(key); return "description"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Task_practice") : QString("t_Task_practice")); }

};

typedef std::shared_ptr<Task_practice> Task_practice_ptr;
typedef qx::QxCollection<long, Task_practice_ptr> list_of_Task_practice;
typedef std::shared_ptr<list_of_Task_practice> list_of_Task_practice_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Task_practice, qx::trait::no_base_class_defined, 0, Task_practice)

#include "../include/Passing_practice.h"


#endif // _DEPARTMENT_TASK_PRACTICE_H_

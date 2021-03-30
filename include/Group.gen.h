#ifndef _DEPARTMENT_GROUP_H_
#define _DEPARTMENT_GROUP_H_

class Student;

class DEPARTMENT_EXPORT Group
{

   QX_REGISTER_FRIEND_CLASS(Group)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Student> > type_list_of_Strudent;

protected:

   long m_Groups_id;
   QString m_number;
   type_list_of_Strudent m_list_of_Strudent;

public:

   Group();
   Group(const long & id);
   virtual ~Group();

   long getGroups_id() const;
   QString getnumber() const;
   type_list_of_Strudent getlist_of_Student() const;
   type_list_of_Strudent & list_of_Student();
   const type_list_of_Strudent & list_of_Student() const;

   void setGroups_id(const long & val);
   void setnumber(const QString & val);
   void setlist_of_Strudent(const type_list_of_Strudent & val);

   type_list_of_Strudent getlist_of_Student(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_Strudent & list_of_Student(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_Strudent(bool key = false) { Q_UNUSED(key); return "list_of_Strudent"; }

public:

   static QString column_Groups_id(bool key = false) { Q_UNUSED(key); return "Group_id"; }
   static QString column_number(bool key = false) { Q_UNUSED(key); return "number"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Group") : QString("t_Group")); }

};

typedef std::shared_ptr<Group> Group_ptr;
typedef qx::QxCollection<long, Group_ptr> list_of_Group;
typedef std::shared_ptr<list_of_Group> list_of_Group_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Group, qx::trait::no_base_class_defined, 0, Group)

#include "../include/Student.gen.h"



#endif // _DEPARTMENT_GROUP_H_

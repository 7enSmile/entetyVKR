#ifndef _DEPARTMENT_STUDENT_H_
#define _DEPARTMENT_STUDENT_H_

class Group;
class Person;

class DEPARTMENT_EXPORT Student
{

   QX_REGISTER_FRIEND_CLASS(Student)

public:

   typedef std::shared_ptr<Group> type_group_id;
   typedef std::shared_ptr<Person> type_person_id;

protected:

   long m_Strudent_id;
   type_group_id m_group_id;
   type_person_id m_person_id;

public:

   Student();
   Student(const long & id);
   virtual ~Student();

   long getStrudent_id() const;
   type_group_id getgroup_id() const;
   type_person_id getperson_id() const;

   void setStrudent_id(const long & val);
   void setgroup_id(const type_group_id & val);
   void setperson_id(const type_person_id & val);

   type_group_id getgroup_id(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_person_id getperson_id(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_group_id(bool key = false) { Q_UNUSED(key); return "group_id"; }
   static QString relation_person_id(bool key = false) { Q_UNUSED(key); return "person_id"; }

public:

   static QString column_Strudent_id(bool key = false) { Q_UNUSED(key); return "Strudent_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Student") : QString("t_Student")); }

};

typedef std::shared_ptr<Student> Student_ptr;
typedef qx::QxCollection<long, Student_ptr> list_of_Student;
typedef std::shared_ptr<list_of_Student> list_of_Student_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Student, qx::trait::no_base_class_defined, 0, Student)

#include "../include/Group.gen.h"
#include "../include/Person.gen.h"



#endif // _DEPARTMENT_STUDENT_H_

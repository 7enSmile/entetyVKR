#ifndef _DEPARTMENT_DEPARTMENT_H_
#define _DEPARTMENT_DEPARTMENT_H_

class Head_university;

class DEPARTMENT_EXPORT Department
{

   QX_REGISTER_FRIEND_CLASS(Department)

public:

   typedef qx::QxCollection<long, std::shared_ptr<Head_university> > type_list_of_head_university;

protected:

   long m_Department_id;
   QString m_name;
   type_list_of_head_university m_list_of_head_university;

public:

   Department();
   Department(const long & id);
   virtual ~Department();

   long getDepartment_id() const;
   QString getname() const;
   type_list_of_head_university getlist_of_head_university() const;
   type_list_of_head_university & list_of_head_university();
   const type_list_of_head_university & list_of_head_university() const;

   void setDepartment_id(const long & val);
   void setname(const QString & val);
   void setlist_of_head_university(const type_list_of_head_university & val);

   type_list_of_head_university getlist_of_head_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_list_of_head_university & list_of_head_university(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_list_of_head_university(bool key = false) { Q_UNUSED(key); return "list_of_head_university"; }

public:

   static QString column_Department_id(bool key = false) { Q_UNUSED(key); return "Department_id"; }
   static QString column_name(bool key = false) { Q_UNUSED(key); return "name"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Department") : QString("t_department")); }

};

typedef std::shared_ptr<Department> Department_ptr;
typedef qx::QxCollection<long, Department_ptr> list_of_Department;
typedef std::shared_ptr<list_of_Department> list_of_Department_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Department, qx::trait::no_base_class_defined, 0, Department)

#include "../include/Head_university.gen.h"



#endif // _DEPARTMENT_DEPARTMENT_H_

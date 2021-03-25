#include "../include/department_precompiled_header.gen.h"

#include "../include/Student.gen.h"
#include "../include/Group.gen.h"
#include "../include/Person.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Student, Student)

namespace qx {

template <>
void register_class(QxClass<Student> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Student");

   pData = t.id(& Student::m_Strudent_id, "Strudent_id", 0);

   pRelation = t.relationManyToOne(& Student::m_group, "group", 0);
   pRelation->getDataMember()->setName("group_id");
   pRelation = t.relationManyToOne(& Student::m_person, "person", 0);
   pRelation = t.relationManyToMany(& Student::m_list_of_passing_practice, "list_of_passing_practice", "t_qxee_Student_Passing_practice", "Student_id", "Passing_practice_id", 0);

   qx::QxValidatorX<Student> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Student::Student() : m_Strudent_id(0) { ; }

Student::Student(const long & id) : m_Strudent_id(id) { ; }

Student::~Student() { ; }

long Student::getStrudent_id() const { return m_Strudent_id; }

Student::type_group Student::getgroup() const { return m_group; }

Student::type_person Student::getperson() const { return m_person; }

Student::type_list_of_passing_practice Student::getlist_of_passing_practice() const { return m_list_of_passing_practice; }

Student::type_list_of_passing_practice & Student::list_of_passing_practice() { return m_list_of_passing_practice; }

const Student::type_list_of_passing_practice & Student::list_of_passing_practice() const { return m_list_of_passing_practice; }


void Student::setStrudent_id(const long & val) { m_Strudent_id = val; }

void Student::setgroup(const Student::type_group & val) { m_group = val; }

void Student::setperson(const Student::type_person & val) { m_person = val; }

void Student::setlist_of_passing_practice(const Student::type_list_of_passing_practice & val) { m_list_of_passing_practice = val; }

Student::type_group Student::getgroup(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getgroup(); }
   QString sRelation = "{Strudent_id} | group";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_group = tmp.m_group; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_group;
}

Student::type_person Student::getperson(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getperson(); }
   QString sRelation = "{Strudent_id} | person";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_person = tmp.m_person; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_person;
}

Student::type_list_of_passing_practice Student::getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_passing_practice(); }
   QString sRelation = "{Student_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Student::type_list_of_passing_practice & Student::list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passing_practice(); }
   QString sRelation = "{Student_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}


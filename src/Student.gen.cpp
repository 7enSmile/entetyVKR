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

   pRelation = t.relationManyToOne(& Student::m_group_id, "group_id", 0);
   pRelation = t.relationManyToOne(& Student::m_person_id, "person_id", 0);

   qx::QxValidatorX<Student> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Student::Student() : m_Strudent_id(0) { ; }

Student::Student(const long & id) : m_Strudent_id(id) { ; }

Student::~Student() { ; }

long Student::getStrudent_id() const { return m_Strudent_id; }

Student::type_group_id Student::getgroup_id() const { return m_group_id; }

Student::type_person_id Student::getperson_id() const { return m_person_id; }

void Student::setStrudent_id(const long & val) { m_Strudent_id = val; }

void Student::setgroup_id(const Student::type_group_id & val) { m_group_id = val; }

void Student::setperson_id(const Student::type_person_id & val) { m_person_id = val; }

Student::type_group_id Student::getgroup_id(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getgroup_id(); }
   QString sRelation = "{Strudent_id} | group_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_group_id = tmp.m_group_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_group_id;
}

Student::type_person_id Student::getperson_id(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getperson_id(); }
   QString sRelation = "{Strudent_id} | person_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Student tmp;
   tmp.m_Strudent_id = this->m_Strudent_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_person_id = tmp.m_person_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_person_id;
}
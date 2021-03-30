#include "../include/department_precompiled_header.gen.h"

#include "../include/Head_university.gen.h"
#include "../include/Person.gen.h"
#include "../include/Department.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Head_university, Head_university)

namespace qx {

template <>
void register_class(QxClass<Head_university> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Head_university");

   pData = t.id(& Head_university::m_Head_university_id, "Head_university_id", 0);

   pRelation = t.relationManyToOne(& Head_university::m_persone, "persone", 0);
   pRelation->getDataMember()->setName("persone_id");
   pRelation = t.relationManyToOne(& Head_university::m_department, "department", 0);
   pRelation->getDataMember()->setName("department_id");
   pRelation = t.relationOneToMany(& Head_university::m_list_of_passing_practice, "list_of_passing_practice", "Head_university_id", 0);
   pRelation = t.relationOneToMany(& Head_university::m_list_of_Reports, "list_of_Reports", "Head_university_id", 0);

   qx::QxValidatorX<Head_university> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Head_university::Head_university() : m_Head_university_id(0) { ; }

Head_university::Head_university(const long & id) : m_Head_university_id(id) { ; }

Head_university::~Head_university() { ; }

long Head_university::getHead_university_id() const { return m_Head_university_id; }

Head_university::type_persone Head_university::getpersone() const { return m_persone; }

Head_university::type_department Head_university::getdepartment() const { return m_department; }

Head_university::type_list_of_passing_practice Head_university::getlist_of_passing_practice() const { return m_list_of_passing_practice; }

Head_university::type_list_of_passing_practice & Head_university::list_of_passing_practice() { return m_list_of_passing_practice; }

const Head_university::type_list_of_passing_practice & Head_university::list_of_passing_practice() const { return m_list_of_passing_practice; }

Head_university::type_list_of_Reports Head_university::getlist_of_Reports() const { return m_list_of_Reports; }

Head_university::type_list_of_Reports & Head_university::list_of_Reports() { return m_list_of_Reports; }

const Head_university::type_list_of_Reports & Head_university::list_of_Reports() const { return m_list_of_Reports; }


void Head_university::setHead_university_id(const long & val) { m_Head_university_id = val; }

void Head_university::setpersone(const Head_university::type_persone & val) { m_persone = val; }

void Head_university::setdepartment(const Head_university::type_department & val) { m_department = val; }

void Head_university::setlist_of_passing_practice(const Head_university::type_list_of_passing_practice & val) { m_list_of_passing_practice = val; }

void Head_university::setlist_of_Reports(const Head_university::type_list_of_Reports & val) { m_list_of_Reports = val; }

Head_university::type_persone Head_university::getpersone(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpersone(); }
   QString sRelation = "{Head_university_id} | persone";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_persone = tmp.m_persone; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_persone;
}

Head_university::type_department Head_university::getdepartment(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getdepartment(); }
   QString sRelation = "{Head_university_id} | department";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_department = tmp.m_department; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_department;
}
Head_university::type_list_of_passing_practice Head_university::getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_passing_practice(); }
   QString sRelation = "{Head_university_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Head_university::type_list_of_passing_practice & Head_university::list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passing_practice(); }
   QString sRelation = "{Head_university_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Head_university::type_list_of_Reports Head_university::getlist_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Reports(); }
   QString sRelation = "{Head_university_id} | list_of_Reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Reports = tmp.m_list_of_Reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Reports;
}

Head_university::type_list_of_Reports & Head_university::list_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Reports(); }
   QString sRelation = "{Head_university_id} | list_of_Reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_university tmp;
   tmp.m_Head_university_id = this->m_Head_university_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Reports = tmp.m_list_of_Reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Reports;
}

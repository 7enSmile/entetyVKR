#include "../include/department_precompiled_header.gen.h"

#include "../include/Head_employer.gen.h"
#include "../include/Employer.gen.h"
#include "../include/Person.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Head_employer, Head_employer)

namespace qx {

template <>
void register_class(QxClass<Head_employer> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Head_employer");

   pData = t.id(& Head_employer::m_Head_employer, "Head_employer_id", 0);

   pRelation = t.relationManyToOne(& Head_employer::m_employer, "employer", 0);
   pRelation = t.relationManyToOne(& Head_employer::m_person, "person_id", 0);
   pRelation = t.relationOneToMany(& Head_employer::m_list_of_passing_practice, "list_of_passing_practice", "Head_employer_id", 0);
   pRelation = t.relationOneToMany(& Head_employer::m_list_of_Reports, "list_of_Reports", "Head_employer_id", 0);



   qx::QxValidatorX<Head_employer> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Head_employer::Head_employer() : m_Head_employer(0) { ; }

Head_employer::Head_employer(const long & id) : m_Head_employer(id) { ; }

Head_employer::~Head_employer() { ; }

long Head_employer::getHead_employer() const { return m_Head_employer; }

Head_employer::type_employer Head_employer::getemployer() const { return m_employer; }

Head_employer::type_person Head_employer::getperson() const { return m_person; }

Head_employer::type_list_of_passing_practice Head_employer::getlist_of_passing_practice() const { return m_list_of_passing_practice; }

Head_employer::type_list_of_passing_practice & Head_employer::list_of_passing_practice() { return m_list_of_passing_practice; }

const Head_employer::type_list_of_passing_practice & Head_employer::list_of_passing_practice() const { return m_list_of_passing_practice; }

Head_employer::type_list_of_Reports Head_employer::getlist_of_Reports() const { return m_list_of_Reports; }

Head_employer::type_list_of_Reports & Head_employer::list_of_Reports() { return m_list_of_Reports; }

const Head_employer::type_list_of_Reports & Head_employer::list_of_Reports() const { return m_list_of_Reports; }


void Head_employer::setHead_employer_id(const long & val) { m_Head_employer = val; }

void Head_employer::setemployer(const Head_employer::type_employer & val) { m_employer = val; }

void Head_employer::setperson(const Head_employer::type_person & val) { m_person = val; }

void Head_employer::setlist_of_passing_practice(const Head_employer::type_list_of_passing_practice & val) { m_list_of_passing_practice = val; }

void Head_employer::setlist_of_Reports(const Head_employer::type_list_of_Reports & val) { m_list_of_Reports = val; }

Head_employer::type_employer Head_employer::getemployer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getemployer(); }
   QString sRelation = "{Head_employer_id} | employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_employer = tmp.m_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_employer;
}

Head_employer::type_person Head_employer::getperson(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getperson(); }
   QString sRelation = "{Head_employer_id} | person_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_person = tmp.m_person; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_person;
}

Head_employer::type_list_of_passing_practice Head_employer::getlist_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_passing_practice(); }
   QString sRelation = "{Head_employer_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Head_employer::type_list_of_passing_practice & Head_employer::list_of_passing_practice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_passing_practice(); }
   QString sRelation = "{Head_employer_id} | list_of_passing_practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_passing_practice = tmp.m_list_of_passing_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_passing_practice;
}

Head_employer::type_list_of_Reports Head_employer::getlist_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getlist_of_Reports(); }
   QString sRelation = "{Head_employer_id} | list_of_Reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Reports = tmp.m_list_of_Reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Reports;
}

Head_employer::type_list_of_Reports & Head_employer::list_of_Reports(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return list_of_Reports(); }
   QString sRelation = "{Head_employer_id} | list_of_Reports";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer = this->m_Head_employer;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_list_of_Reports = tmp.m_list_of_Reports; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_list_of_Reports;
}


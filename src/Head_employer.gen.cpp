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

   pData = t.id(& Head_employer::m_Head_employer_id, "Head_employer_id", 0);

   pRelation = t.relationManyToOne(& Head_employer::m_employer, "employer", 0);
   pRelation = t.relationManyToOne(& Head_employer::m_person_id, "person_id", 0);

   qx::QxValidatorX<Head_employer> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Head_employer::Head_employer() : m_Head_employer_id(0) { ; }

Head_employer::Head_employer(const long & id) : m_Head_employer_id(id) { ; }

Head_employer::~Head_employer() { ; }

long Head_employer::getHead_employer_id() const { return m_Head_employer_id; }

Head_employer::type_employer Head_employer::getemployer() const { return m_employer; }

Head_employer::type_person_id Head_employer::getperson_id() const { return m_person_id; }

void Head_employer::setHead_employer_id(const long & val) { m_Head_employer_id = val; }

void Head_employer::setemployer(const Head_employer::type_employer & val) { m_employer = val; }

void Head_employer::setperson_id(const Head_employer::type_person_id & val) { m_person_id = val; }

Head_employer::type_employer Head_employer::getemployer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getemployer(); }
   QString sRelation = "{Head_employer_id} | employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer_id = this->m_Head_employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_employer = tmp.m_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_employer;
}

Head_employer::type_person_id Head_employer::getperson_id(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getperson_id(); }
   QString sRelation = "{Head_employer_id} | person_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Head_employer tmp;
   tmp.m_Head_employer_id = this->m_Head_employer_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_person_id = tmp.m_person_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_person_id;
}

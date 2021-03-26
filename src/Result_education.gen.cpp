#include "../include/department_precompiled_header.gen.h"

#include "../include/Result_education.gen.h"
#include "../include/Educational_program.gen.h"
#include "../include/Discipline.gen.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(Result_education, Result_education)

namespace qx {

template <>
void register_class(QxClass<Result_education> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Result_discipline");

   pData = t.id(& Result_education::m_Result_discipline_id, "Result_discipline_id", 0);

   pData = t.data(& Result_education::m_description, "description", 0, true, true);
   pData = t.data(& Result_education::m_acquired_skills, "acquired_skills", 0, true, true);

   pRelation = t.relationManyToOne(& Result_education::m_educational_program, "educational_program", 0);
   pRelation->getDataMember()->setName("Educational_program_id");
   pRelation = t.relationManyToOne(& Result_education::m_discipline, "discipline", 0);
   pRelation->getDataMember()->setName("Discipline_id");

   qx::QxValidatorX<Result_education> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

Result_education::Result_education() : m_Result_discipline_id(0) { ; }

Result_education::Result_education(const long & id) : m_Result_discipline_id(id) { ; }

Result_education::~Result_education() { ; }

long Result_education::getResult_discipline_id() const { return m_Result_discipline_id; }

QString Result_education::getdescription() const { return m_description; }

QString Result_education::getacquired_skills() const { return m_acquired_skills; }

Result_education::type_educational_program Result_education::geteducational_program() const { return m_educational_program; }

Result_education::type_discipline Result_education::getdiscipline() const { return m_discipline; }

void Result_education::setResult_discipline_id(const long & val) { m_Result_discipline_id = val; }

void Result_education::setdescription(const QString & val) { m_description = val; }

void Result_education::setacquired_skills(const QString & val) { m_acquired_skills = val; }

void Result_education::seteducational_program(const Result_education::type_educational_program & val) { m_educational_program = val; }

void Result_education::setdiscipline(const Result_education::type_discipline & val) { m_discipline = val; }

Result_education::type_educational_program Result_education::geteducational_program(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return geteducational_program(); }
   QString sRelation = "{Result_discipline_id} | educational_program";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Result_education tmp;
   tmp.m_Result_discipline_id = this->m_Result_discipline_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_educational_program = tmp.m_educational_program; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_educational_program;
}

Result_education::type_discipline Result_education::getdiscipline(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getdiscipline(); }
   QString sRelation = "{Result_discipline_id} | discipline";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   Result_education tmp;
   tmp.m_Result_discipline_id = this->m_Result_discipline_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_discipline = tmp.m_discipline; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_discipline;
}
// CHANGEAMMETER.cpp : implementation file
//

#include "stdafx.h"

#include "CHANGEAMMETERset.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCHANGEAMMETER

IMPLEMENT_DYNAMIC(CCHANGEAMMETERSet, CRecordset)

CCHANGEAMMETERSet::CCHANGEAMMETERSet(CDatabase* pdb)
	: CRecordset(pdb)
{
	//{{AFX_FIELD_INIT(CCHANGEAMMETER)
	m_CHANGEAMMETER_FDL = 0.0;
	m_CHANGEAMMETER_FDLOLD = 0.0;
	m_CHANGEAMMETER_GDL = 0.0;
	m_CHANGEAMMETER_GDLOLD = 0.0;
	m_CHANGEAMMETER_JFDL = 0.0;
	m_CHANGEAMMETER_JFDLOLD = 0.0;
	m_CHANGEAMMETER_LOSEDEGREE = 0.0;
	m_CHANGEAMMETER_LOSEDEGREEOLD = 0.0;
	m_CHANGEAMMETER_LOSEDEGREETOTAL = 0.0;
	m_CHANGEAMMETER_LOSEDEGREETOTALOLD = 0.0;
	m_CHANGEAMMETER_MODULENO = _T("");
	m_CHANGEAMMETER_MODULENOOLD = _T("");
	m_CHANGEAMMETER_NAME = _T("");
	m_CHANGEAMMETER_NO = _T("");
	m_CHANGEAMMETER_NOOLD = _T("");
	m_CHANGEAMMETER_PDL = 0.0;
	m_CHANGEAMMETER_PDLOLD = 0.0;
	m_CHANGEAMMETER_WORKDEGREE = 0.0;
	m_CHANGEAMMETER_WORKDEGREEOLD = _T("");
	m_CHANGEAMMETER_WORKDEGREETOTAL = 0.0;
	m_CHANGEAMMETER_WORKDEGREETOTALOLD = 0.0;
	m_nFields = 22;
	//}}AFX_FIELD_INIT
	m_nDefaultType = snapshot;
}


CString CCHANGEAMMETERSet::GetDefaultConnect()
{
	return _T("ODBC;DSN=IFRM");
}

CString CCHANGEAMMETERSet::GetDefaultSQL()
{
	return _T("[dbo].[TB_CHANGEAMMETER]");
}

void CCHANGEAMMETERSet::DoFieldExchange(CFieldExchange* pFX)
{
	//{{AFX_FIELD_MAP(CCHANGEAMMETER)
	pFX->SetFieldType(CFieldExchange::outputColumn);
	RFX_Double(pFX, _T("[CHANGEAMMETER_FDL]"), m_CHANGEAMMETER_FDL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_FDLOLD]"), m_CHANGEAMMETER_FDLOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_GDL]"), m_CHANGEAMMETER_GDL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_GDLOLD]"), m_CHANGEAMMETER_GDLOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_JFDL]"), m_CHANGEAMMETER_JFDL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_JFDLOLD]"), m_CHANGEAMMETER_JFDLOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_LOSEDEGREE]"), m_CHANGEAMMETER_LOSEDEGREE);
	RFX_Double(pFX, _T("[CHANGEAMMETER_LOSEDEGREEOLD]"), m_CHANGEAMMETER_LOSEDEGREEOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_LOSEDEGREETOTAL]"), m_CHANGEAMMETER_LOSEDEGREETOTAL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_LOSEDEGREETOTALOLD]"), m_CHANGEAMMETER_LOSEDEGREETOTALOLD);
	RFX_Text(pFX, _T("[CHANGEAMMETER_MODULENO]"), m_CHANGEAMMETER_MODULENO);
	RFX_Text(pFX, _T("[CHANGEAMMETER_MODULENOOLD]"), m_CHANGEAMMETER_MODULENOOLD);
	RFX_Text(pFX, _T("[CHANGEAMMETER_NAME]"), m_CHANGEAMMETER_NAME);
	RFX_Text(pFX, _T("[CHANGEAMMETER_NO]"), m_CHANGEAMMETER_NO);
	RFX_Text(pFX, _T("[CHANGEAMMETER_NOOLD]"), m_CHANGEAMMETER_NOOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_PDL]"), m_CHANGEAMMETER_PDL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_PDLOLD]"), m_CHANGEAMMETER_PDLOLD);
	RFX_Date(pFX, _T("[CHANGEAMMETER_UPDATETIME]"), m_CHANGEAMMETER_UPDATETIME);
	RFX_Double(pFX, _T("[CHANGEAMMETER_WORKDEGREE]"), m_CHANGEAMMETER_WORKDEGREE);
	RFX_Text(pFX, _T("[CHANGEAMMETER_WORKDEGREEOLD]"), m_CHANGEAMMETER_WORKDEGREEOLD);
	RFX_Double(pFX, _T("[CHANGEAMMETER_WORKDEGREETOTAL]"), m_CHANGEAMMETER_WORKDEGREETOTAL);
	RFX_Double(pFX, _T("[CHANGEAMMETER_WORKDEGREETOTALOLD]"), m_CHANGEAMMETER_WORKDEGREETOTALOLD);
	//}}AFX_FIELD_MAP
}

/////////////////////////////////////////////////////////////////////////////
// CCHANGEAMMETER diagnostics

#ifdef _DEBUG
void CCHANGEAMMETERSet::AssertValid() const
{
	CRecordset::AssertValid();
}

void CCHANGEAMMETERSet::Dump(CDumpContext& dc) const
{
	CRecordset::Dump(dc);
}
#endif //_DEBUG
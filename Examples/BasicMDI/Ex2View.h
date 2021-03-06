// Ex2View.h : interface of the CEx2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX2VIEW_H__58B8FCA6_0939_11D1_B1EB_002035964AAA__INCLUDED_)
#define AFX_EX2VIEW_H__58B8FCA6_0939_11D1_B1EB_002035964AAA__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx2View : public CView
{
protected: // create from serialization only
	CEx2View();
	DECLARE_DYNCREATE(CEx2View)

// Attributes
public:

	// here is the instance of Ultimate Grid for the view
	MyCug	m_ctrl;

	CEx2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEx2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEx2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	virtual void OnUpdate(CView* pSender, LPARAM lHint, CObject* pHint);

// Generated message map functions
protected:
	//{{AFX_MSG(CEx2View)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnViewUsexpthemes();
	afx_msg void OnUpdateViewUsexpthemes(CCmdUI* pCmdUI);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Ex2View.cpp
inline CEx2Doc* CEx2View::GetDocument()
   { return (CEx2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EX2VIEW_H__58B8FCA6_0939_11D1_B1EB_002035964AAA__INCLUDED_)

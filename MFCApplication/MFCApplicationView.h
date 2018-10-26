
// MFCApplicationView.h : CMFCApplicationView �N���X�̃C���^�[�t�F�C�X
//

#pragma once


class CMFCApplicationView : public CView
{
protected: // �V���A��������̂ݍ쐬���܂��B
	CMFCApplicationView();
	DECLARE_DYNCREATE(CMFCApplicationView)

// ����
public:
	CMFCApplicationDoc* GetDocument() const;

// ����
public:

// �I�[�o�[���C�h
public:
	virtual void OnDraw(CDC* pDC);  // ���̃r���[��`�悷�邽�߂ɃI�[�o�[���C�h����܂��B
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ����
public:
	virtual ~CMFCApplicationView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// �������ꂽ�A���b�Z�[�W���蓖�Ċ֐�
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MFCApplicationView.cpp �̃f�o�b�O �o�[�W����
inline CMFCApplicationDoc* CMFCApplicationView::GetDocument() const
   { return reinterpret_cast<CMFCApplicationDoc*>(m_pDocument); }
#endif



// ChildFrm.cpp : CChildFrame �N���X�̎���
//

#include "stdafx.h"
#include "MFCApplication.h"

#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CMDIChildWndEx)

BEGIN_MESSAGE_MAP(CChildFrame, CMDIChildWndEx)
END_MESSAGE_MAP()

// CChildFrame �R���X�g���N�V����/�f�X�g���N�V����

CChildFrame::CChildFrame()
{
	// TODO: �����o�[�������R�[�h�������ɒǉ����Ă��������B
}

CChildFrame::~CChildFrame()
{
}


BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs ��ύX���āAWindow �N���X�܂��̓X�^�C����ύX���܂��B
	if( !CMDIChildWndEx::PreCreateWindow(cs) )
		return FALSE;

	return TRUE;
}

// CChildFrame �f�f

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CMDIChildWndEx::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CMDIChildWndEx::Dump(dc);
}
#endif //_DEBUG

// CChildFrame ���b�Z�[�W �n���h���[

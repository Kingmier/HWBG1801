#include "stdafx.h"
#include "sudoku.h"
#include "sudokuDlg.h"
#include "afxdialogex.h"
#include<stdio.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CsudokuDlg 对话框



CsudokuDlg::CsudokuDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_SUDOKU_DIALOG, pParent)
	, numval1(0), numval2(0), numval3(0), numval4(0), numval5(0), numval6(0), numval7(0), numval8(0), numval9(0)
	, numval10(0), numval11(0), numval12(0), numval13(0), numval14(0), numval15(0), numval16(0), numval17(0), numval18(0)
	, numval19(0), numval20(0), numval21(0), numval22(0), numval23(0), numval24(0), numval25(0), numval26(0), numval27(0)
	, numval28(0), numval29(0), numval30(0), numval31(0), numval32(0), numval33(0), numval34(0), numval35(0), numval36(0)
	, numval37(0), numval38(0), numval39(0), numval40(0), numval41(0), numval42(0), numval43(0), numval44(0), numval45(0)
	, numval46(0), numval47(0), numval48(0), numval49(0), numval50(0), numval51(0), numval52(0), numval53(0), numval54(0)
	, numval55(0), numval56(0), numval57(0), numval58(0), numval59(0), numval60(0), numval61(0), numval62(0), numval63(0)
	, numval64(0), numval65(0), numval66(0), numval67(0), numval68(0), numval69(0), numval70(0), numval71(0), numval72(0)
	, numval73(0), numval74(0), numval75(0), numval76(0), numval77(0), numval78(0), numval79(0), numval80(0), numval81(0)
	, bRecycleFlag(false)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);

	memset(iaTriedTimes, 0, 9 * 9);
}

void CsudokuDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT15, numval2);
	DDV_MinMaxInt(pDX, numval2, 0, 9);
	DDX_Text(pDX, IDC_EDIT16, numval3);
	DDV_MinMaxInt(pDX, numval3, 0, 9);
	DDX_Text(pDX, IDC_EDIT17, numval4);
	DDV_MinMaxInt(pDX, numval4, 0, 9);
	DDX_Text(pDX, IDC_EDIT18, numval5);
	DDV_MinMaxInt(pDX, numval5, 0, 9);
	DDX_Text(pDX, IDC_EDIT19, numval6);
	DDV_MinMaxInt(pDX, numval6, 0, 9);
	DDX_Text(pDX, IDC_EDIT20, numval7);
	DDV_MinMaxInt(pDX, numval7, 0, 9);
	DDX_Text(pDX, IDC_EDIT21, numval8);
	DDV_MinMaxInt(pDX, numval8, 0, 9);
	DDX_Text(pDX, IDC_EDIT22, numval9);
	DDV_MinMaxInt(pDX, numval9, 0, 9);
	DDX_Text(pDX, IDC_EDIT14, numval1);
	DDV_MinMaxInt(pDX, numval1, 0, 9);
	DDX_Text(pDX, IDC_EDIT11, numval10);
	DDV_MinMaxInt(pDX, numval10, 0, 9);
	DDX_Text(pDX, IDC_EDIT6, numval11);
	DDV_MinMaxInt(pDX, numval11, 0, 9);
	DDX_Text(pDX, IDC_EDIT8, numval12);
	DDV_MinMaxInt(pDX, numval12, 0, 9);
	DDX_Text(pDX, IDC_EDIT9, numval13);
	DDV_MinMaxInt(pDX, numval13, 0, 9);
	DDX_Text(pDX, IDC_EDIT10, numval14);
	DDV_MinMaxInt(pDX, numval14, 0, 9);
	DDX_Text(pDX, IDC_EDIT12, numval15);
	DDV_MinMaxInt(pDX, numval15, 0, 9);
	DDX_Text(pDX, IDC_EDIT13, numval16);
	DDV_MinMaxInt(pDX, numval16, 0, 9);
	DDX_Text(pDX, IDC_EDIT23, numval17);
	DDV_MinMaxInt(pDX, numval17, 0, 9);
	DDX_Text(pDX, IDC_EDIT24, numval18);
	DDV_MinMaxInt(pDX, numval18, 0, 9);
	DDX_Text(pDX, IDC_EDIT25, numval19);
	DDV_MinMaxInt(pDX, numval19, 0, 9);
	DDX_Text(pDX, IDC_EDIT26, numval20);
	DDV_MinMaxInt(pDX, numval20, 0, 9);
	DDX_Text(pDX, IDC_EDIT27, numval21);
	DDV_MinMaxInt(pDX, numval21, 0, 9);
	DDX_Text(pDX, IDC_EDIT28, numval22);
	DDV_MinMaxInt(pDX, numval22, 0, 9);
	DDX_Text(pDX, IDC_EDIT29, numval23);
	DDV_MinMaxInt(pDX, numval23, 0, 9);
	DDX_Text(pDX, IDC_EDIT30, numval24);
	DDV_MinMaxInt(pDX, numval24, 0, 9);
	DDX_Text(pDX, IDC_EDIT31, numval25);
	DDV_MinMaxInt(pDX, numval25, 0, 9);
	DDX_Text(pDX, IDC_EDIT32, numval26);
	DDV_MinMaxInt(pDX, numval26, 0, 9);
	DDX_Text(pDX, IDC_EDIT33, numval27);
	DDV_MinMaxInt(pDX, numval27, 0, 9);
	DDX_Text(pDX, IDC_EDIT34, numval28);
	DDV_MinMaxInt(pDX, numval28, 0, 9);
	DDX_Text(pDX, IDC_EDIT35, numval29);
	DDV_MinMaxInt(pDX, numval29, 0, 9);
	DDX_Text(pDX, IDC_EDIT36, numval30);
	DDV_MinMaxInt(pDX, numval30, 0, 9);
	DDX_Text(pDX, IDC_EDIT37, numval31);
	DDV_MinMaxInt(pDX, numval31, 0, 9);
	DDX_Text(pDX, IDC_EDIT38, numval32);
	DDV_MinMaxInt(pDX, numval32, 0, 9);
	DDX_Text(pDX, IDC_EDIT39, numval33);
	DDV_MinMaxInt(pDX, numval33, 0, 9);
	DDX_Text(pDX, IDC_EDIT40, numval34);
	DDV_MinMaxInt(pDX, numval34, 0, 9);
	DDX_Text(pDX, IDC_EDIT41, numval35);
	DDV_MinMaxInt(pDX, numval35, 0, 9);
	DDX_Text(pDX, IDC_EDIT42, numval36);
	DDV_MinMaxInt(pDX, numval36, 0, 9);
	DDX_Text(pDX, IDC_EDIT43, numval37);
	DDV_MinMaxInt(pDX, numval37, 0, 9);
	DDX_Text(pDX, IDC_EDIT44, numval38);
	DDV_MinMaxInt(pDX, numval38, 0, 9);
	DDX_Text(pDX, IDC_EDIT45, numval39);
	DDV_MinMaxInt(pDX, numval39, 0, 9);
	DDX_Text(pDX, IDC_EDIT46, numval40);
	DDV_MinMaxInt(pDX, numval40, 0, 9);
	DDX_Text(pDX, IDC_EDIT47, numval41);
	DDV_MinMaxInt(pDX, numval41, 0, 9);
	DDX_Text(pDX, IDC_EDIT48, numval42);
	DDV_MinMaxInt(pDX, numval42, 0, 9);
	DDX_Text(pDX, IDC_EDIT49, numval43);
	DDV_MinMaxInt(pDX, numval43, 0, 9);
	DDX_Text(pDX, IDC_EDIT50, numval44);
	DDV_MinMaxInt(pDX, numval44, 0, 9);
	DDX_Text(pDX, IDC_EDIT51, numval45);
	DDV_MinMaxInt(pDX, numval45, 0, 9);
	DDX_Text(pDX, IDC_EDIT52, numval46);
	DDV_MinMaxInt(pDX, numval46, 0, 9);
	DDX_Text(pDX, IDC_EDIT53, numval47);
	DDV_MinMaxInt(pDX, numval47, 0, 9);
	DDX_Text(pDX, IDC_EDIT54, numval48);
	DDV_MinMaxInt(pDX, numval48, 0, 9);
	DDX_Text(pDX, IDC_EDIT55, numval49);
	DDV_MinMaxInt(pDX, numval49, 0, 9);
	DDX_Text(pDX, IDC_EDIT56, numval50);
	DDV_MinMaxInt(pDX, numval50, 0, 9);
	DDX_Text(pDX, IDC_EDIT57, numval51);
	DDV_MinMaxInt(pDX, numval51, 0, 9);
	DDX_Text(pDX, IDC_EDIT58, numval52);
	DDV_MinMaxInt(pDX, numval52, 0, 9);
	DDX_Text(pDX, IDC_EDIT59, numval53);
	DDV_MinMaxInt(pDX, numval53, 0, 9);
	DDX_Text(pDX, IDC_EDIT60, numval54);
	DDV_MinMaxInt(pDX, numval54, 0, 9);
	DDX_Text(pDX, IDC_EDIT61, numval55);
	DDV_MinMaxInt(pDX, numval55, 0, 9);
	DDX_Text(pDX, IDC_EDIT62, numval56);
	DDV_MinMaxInt(pDX, numval56, 0, 9);
	DDX_Text(pDX, IDC_EDIT63, numval57);
	DDV_MinMaxInt(pDX, numval57, 0, 9);
	DDX_Text(pDX, IDC_EDIT64, numval58);
	DDV_MinMaxInt(pDX, numval58, 0, 9);
	DDX_Text(pDX, IDC_EDIT65, numval59);
	DDV_MinMaxInt(pDX, numval59, 0, 9);
	DDX_Text(pDX, IDC_EDIT66, numval60);
	DDV_MinMaxInt(pDX, numval60, 0, 9);
	DDX_Text(pDX, IDC_EDIT67, numval61);
	DDV_MinMaxInt(pDX, numval61, 0, 9);
	DDX_Text(pDX, IDC_EDIT68, numval62);
	DDV_MinMaxInt(pDX, numval62, 0, 9);
	DDX_Text(pDX, IDC_EDIT69, numval63);
	DDV_MinMaxInt(pDX, numval63, 0, 9);
	DDX_Text(pDX, IDC_EDIT70, numval64);
	DDV_MinMaxInt(pDX, numval64, 0, 9);
	DDX_Text(pDX, IDC_EDIT71, numval65);
	DDV_MinMaxInt(pDX, numval65, 0, 9);
	DDX_Text(pDX, IDC_EDIT72, numval66);
	DDV_MinMaxInt(pDX, numval66, 0, 9);
	DDX_Text(pDX, IDC_EDIT73, numval67);
	DDV_MinMaxInt(pDX, numval67, 0, 9);
	DDX_Text(pDX, IDC_EDIT74, numval68);
	DDV_MinMaxInt(pDX, numval68, 0, 9);
	DDX_Text(pDX, IDC_EDIT75, numval69);
	DDV_MinMaxInt(pDX, numval69, 0, 9);
	DDX_Text(pDX, IDC_EDIT76, numval70);
	DDV_MinMaxInt(pDX, numval70, 0, 9);
	DDX_Text(pDX, IDC_EDIT77, numval71);
	DDV_MinMaxInt(pDX, numval71, 0, 9);
	DDX_Text(pDX, IDC_EDIT78, numval72);
	DDV_MinMaxInt(pDX, numval72, 0, 9);
	DDX_Text(pDX, IDC_EDIT79, numval73);
	DDV_MinMaxInt(pDX, numval73, 0, 9);
	DDX_Text(pDX, IDC_EDIT80, numval74);
	DDV_MinMaxInt(pDX, numval74, 0, 9);
	DDX_Text(pDX, IDC_EDIT81, numval75);
	DDV_MinMaxInt(pDX, numval75, 0, 9);
	DDX_Text(pDX, IDC_EDIT82, numval76);
	DDV_MinMaxInt(pDX, numval76, 0, 9);
	DDX_Text(pDX, IDC_EDIT83, numval77);
	DDV_MinMaxInt(pDX, numval77, 0, 9);
	DDX_Text(pDX, IDC_EDIT84, numval78);
	DDV_MinMaxInt(pDX, numval78, 0, 9);
	DDX_Text(pDX, IDC_EDIT85, numval79);
	DDV_MinMaxInt(pDX, numval79, 0, 9);
	DDX_Text(pDX, IDC_EDIT86, numval80);
	DDV_MinMaxInt(pDX, numval80, 0, 9);
	DDX_Text(pDX, IDC_EDIT7, numval81);
	DDV_MinMaxInt(pDX, numval81, 0, 9);
}

BEGIN_MESSAGE_MAP(CsudokuDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CsudokuDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_HELP, &CsudokuDlg::OnBnClickedHelp)
	ON_BN_CLICKED(IDCANCEL, &CsudokuDlg::OnBnClickedCancel)
	ON_EN_CHANGE(IDC_EDIT19, &CsudokuDlg::OnEnChangeEdit19)
	ON_BN_CLICKED(IDC_RESET, &CsudokuDlg::OnBnClickedRESET)
END_MESSAGE_MAP()


// CsudokuDlg 消息处理程序

BOOL CsudokuDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码

	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CsudokuDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CsudokuDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CsudokuDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

//开始运算
void CsudokuDlg::OnBnClickedOk()
{
	UpdateData();
	Getnum();
	if (check())
	{
		DFS(0);
		Setnum();
		UpdateData(false);
	}
	else
	{
		AfxMessageBox(_T("请检查重新输入！"));
	}
}


void CsudokuDlg::OnBnClickedCancel()
{
	OnCancel();
}

void CsudokuDlg::OnBnClickedHelp()
{
	AfxMessageBox(_T("在每个框中输入对应的数字，空位置零。"));
}

void CsudokuDlg::Setnum()
{
	numval1 = sodunum[0][0];
	numval2 = sodunum[0][1];
	numval3 = sodunum[0][2];
	numval4 = sodunum[0][3];
	numval5 = sodunum[0][4];
	numval6 = sodunum[0][5];
	numval7 = sodunum[0][6];
	numval8 = sodunum[0][7];
	numval9 = sodunum[0][8];
	numval10 = sodunum[1][0];
	numval11 = sodunum[1][1];
	numval12 = sodunum[1][2];
	numval13 = sodunum[1][3];
	numval14 = sodunum[1][4];
	numval15 = sodunum[1][5];
	numval16 = sodunum[1][6];
	numval17 = sodunum[1][7];
	numval18 = sodunum[1][8];
	numval19 = sodunum[2][0];
	numval20 = sodunum[2][1];
	numval21 = sodunum[2][2];
	numval22 = sodunum[2][3];
	numval23 = sodunum[2][4];
	numval24 = sodunum[2][5];
	numval25 = sodunum[2][6];
	numval26 = sodunum[2][7];
	numval27 = sodunum[2][8];
	numval28 = sodunum[3][0];
	numval29 = sodunum[3][1];
	numval30 = sodunum[3][2];
	numval31 = sodunum[3][3];
	numval32 = sodunum[3][4];
	numval33 = sodunum[3][5];
	numval34 = sodunum[3][6];
	numval35 = sodunum[3][7];
	numval36 = sodunum[3][8];
	numval37 = sodunum[4][0];
	numval38 = sodunum[4][1];
	numval39 = sodunum[4][2];
	numval40 = sodunum[4][3];
	numval41 = sodunum[4][4];
	numval42 = sodunum[4][5];
	numval43 = sodunum[4][6];
	numval44 = sodunum[4][7];
	numval45 = sodunum[4][8];
	numval46 = sodunum[5][0];
	numval47 = sodunum[5][1];
	numval48 = sodunum[5][2];
	numval49 = sodunum[5][3];
	numval50 = sodunum[5][4];
	numval51 = sodunum[5][5];
	numval52 = sodunum[5][6];
	numval53 = sodunum[5][7];
	numval54 = sodunum[5][8];
	numval55 = sodunum[6][0];
	numval56 = sodunum[6][1];
	numval57 = sodunum[6][2];
	numval58 = sodunum[6][3];
	numval59 = sodunum[6][4];
	numval60 = sodunum[6][5];
	numval61 = sodunum[6][6];
	numval62 = sodunum[6][7];
	numval63 = sodunum[6][8];
	numval64 = sodunum[7][0];
	numval65 = sodunum[7][1];
	numval66 = sodunum[7][2];
	numval67 = sodunum[7][3];
	numval68 = sodunum[7][4];
	numval69 = sodunum[7][5];
	numval70 = sodunum[7][6];
	numval71 = sodunum[7][7];
	numval72 = sodunum[7][8];
	numval73 = sodunum[8][0];
	numval74 = sodunum[8][1];
	numval75 = sodunum[8][2];
	numval76 = sodunum[8][3];
	numval77 = sodunum[8][4];
	numval78 = sodunum[8][5];
	numval79 = sodunum[8][6];
	numval80 = sodunum[8][7];
	numval81 = sodunum[8][8];
}

void CsudokuDlg::Getnum()
{
	sodunum[0][0] = GetDlgItemInt(IDC_EDIT14);
	sodunum[0][1] = GetDlgItemInt(IDC_EDIT15);
	sodunum[0][2] = GetDlgItemInt(IDC_EDIT16);
	sodunum[0][3] = GetDlgItemInt(IDC_EDIT17);
	sodunum[0][4] = GetDlgItemInt(IDC_EDIT18);
	sodunum[0][5] = GetDlgItemInt(IDC_EDIT19);
	sodunum[0][6] = GetDlgItemInt(IDC_EDIT20);
	sodunum[0][7] = GetDlgItemInt(IDC_EDIT21);
	sodunum[0][8] = GetDlgItemInt(IDC_EDIT22);
	sodunum[1][0] = GetDlgItemInt(IDC_EDIT11);
	sodunum[1][1] = GetDlgItemInt(IDC_EDIT6);
	sodunum[1][2] = GetDlgItemInt(IDC_EDIT8);
	sodunum[1][3] = GetDlgItemInt(IDC_EDIT9);
	sodunum[1][4] = GetDlgItemInt(IDC_EDIT10);
	sodunum[1][5] = GetDlgItemInt(IDC_EDIT12);
	sodunum[1][6] = GetDlgItemInt(IDC_EDIT13);
	sodunum[1][7] = GetDlgItemInt(IDC_EDIT23);
	sodunum[1][8] = GetDlgItemInt(IDC_EDIT24);
	sodunum[2][0] = GetDlgItemInt(IDC_EDIT25);
	sodunum[2][1] = GetDlgItemInt(IDC_EDIT26);
	sodunum[2][2] = GetDlgItemInt(IDC_EDIT27);
	sodunum[2][3] = GetDlgItemInt(IDC_EDIT28);
	sodunum[2][4] = GetDlgItemInt(IDC_EDIT29);
	sodunum[2][5] = GetDlgItemInt(IDC_EDIT30);
	sodunum[2][6] = GetDlgItemInt(IDC_EDIT31);
	sodunum[2][7] = GetDlgItemInt(IDC_EDIT32);
	sodunum[2][8] = GetDlgItemInt(IDC_EDIT33);
	sodunum[3][0] = GetDlgItemInt(IDC_EDIT34);
	sodunum[3][1] = GetDlgItemInt(IDC_EDIT35);
	sodunum[3][2] = GetDlgItemInt(IDC_EDIT36);
	sodunum[3][3] = GetDlgItemInt(IDC_EDIT37);
	sodunum[3][4] = GetDlgItemInt(IDC_EDIT38);
	sodunum[3][5] = GetDlgItemInt(IDC_EDIT39);
	sodunum[3][6] = GetDlgItemInt(IDC_EDIT40);
	sodunum[3][7] = GetDlgItemInt(IDC_EDIT41);
	sodunum[3][8] = GetDlgItemInt(IDC_EDIT42);
	sodunum[4][0] = GetDlgItemInt(IDC_EDIT43);
	sodunum[4][1] = GetDlgItemInt(IDC_EDIT44);
	sodunum[4][2] = GetDlgItemInt(IDC_EDIT45);
	sodunum[4][3] = GetDlgItemInt(IDC_EDIT46);
	sodunum[4][4] = GetDlgItemInt(IDC_EDIT47);
	sodunum[4][5] = GetDlgItemInt(IDC_EDIT48);
	sodunum[4][6] = GetDlgItemInt(IDC_EDIT49);
	sodunum[4][7] = GetDlgItemInt(IDC_EDIT50);
	sodunum[4][8] = GetDlgItemInt(IDC_EDIT51);
	sodunum[5][0] = GetDlgItemInt(IDC_EDIT52);
	sodunum[5][1] = GetDlgItemInt(IDC_EDIT53);
	sodunum[5][2] = GetDlgItemInt(IDC_EDIT54);
	sodunum[5][3] = GetDlgItemInt(IDC_EDIT55);
	sodunum[5][4] = GetDlgItemInt(IDC_EDIT56);
	sodunum[5][5] = GetDlgItemInt(IDC_EDIT57);
	sodunum[5][6] = GetDlgItemInt(IDC_EDIT58);
	sodunum[5][7] = GetDlgItemInt(IDC_EDIT59);
	sodunum[5][8] = GetDlgItemInt(IDC_EDIT60);
	sodunum[6][0] = GetDlgItemInt(IDC_EDIT61);
	sodunum[6][1] = GetDlgItemInt(IDC_EDIT62);
	sodunum[6][2] = GetDlgItemInt(IDC_EDIT63);
	sodunum[6][3] = GetDlgItemInt(IDC_EDIT64);
	sodunum[6][4] = GetDlgItemInt(IDC_EDIT65);
	sodunum[6][5] = GetDlgItemInt(IDC_EDIT66);
	sodunum[6][6] = GetDlgItemInt(IDC_EDIT67);
	sodunum[6][7] = GetDlgItemInt(IDC_EDIT68);
	sodunum[6][8] = GetDlgItemInt(IDC_EDIT69);
	sodunum[7][0] = GetDlgItemInt(IDC_EDIT70);
	sodunum[7][1] = GetDlgItemInt(IDC_EDIT71);
	sodunum[7][2] = GetDlgItemInt(IDC_EDIT72);
	sodunum[7][3] = GetDlgItemInt(IDC_EDIT73);
	sodunum[7][4] = GetDlgItemInt(IDC_EDIT74);
	sodunum[7][5] = GetDlgItemInt(IDC_EDIT75);
	sodunum[7][6] = GetDlgItemInt(IDC_EDIT76);
	sodunum[7][7] = GetDlgItemInt(IDC_EDIT77);
	sodunum[7][8] = GetDlgItemInt(IDC_EDIT78);
	sodunum[8][0] = GetDlgItemInt(IDC_EDIT79);
	sodunum[8][1] = GetDlgItemInt(IDC_EDIT80);
	sodunum[8][2] = GetDlgItemInt(IDC_EDIT81);
	sodunum[8][3] = GetDlgItemInt(IDC_EDIT82);
	sodunum[8][4] = GetDlgItemInt(IDC_EDIT83);
	sodunum[8][5] = GetDlgItemInt(IDC_EDIT84);
	sodunum[8][6] = GetDlgItemInt(IDC_EDIT85);
	sodunum[8][7] = GetDlgItemInt(IDC_EDIT86);
	sodunum[8][8] = GetDlgItemInt(IDC_EDIT7); 

}

int CsudokuDlg::chachong(int a[9])
{
	int flag = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (a[i] == a[j] && a[i] != 0 && a[j] != 0)
			{
				flag = 1;
				break;
			}
		}
	}
	return flag;
}

void CsudokuDlg::chushihua()
{
	for (int i = 0; i < 9; i++)
	{
		text[i] = 0;
	}
}

int CsudokuDlg::check()
{
	int a = 0;
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			text[j] = sodunum[i][j];
			if (j == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}//查行
	chushihua();
	for (int j = 0; j < 9; j++)
	{
		for (int i = 0; i < 9; i++)
		{
			text[i] = sodunum[i][j];
			if (i == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}//查列
	chushihua();
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 3; j < 6; j++)
	{
		for (int i = 0; i < 3; i++)
		{

			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 6; j < 8; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 3; i < 6; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 3; j < 6; j++)
	{
		for (int i = 3; i < 6; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 6; j < 8; j++)
	{
		for (int i = 3; i < 6; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 6; i < 8; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 3; j < 6; j++)
	{
		for (int i = 6; i < 8; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	a = 0;
	for (int j = 6; j < 8; j++)
	{
		for (int i = 6; i < 8; i++)
		{
			text[a] = sodunum[j][i];
			a++;
			if (a == 8)
			{
				if (chachong(text))
				{
					return 0;
				}
			}
		}
	}
	chushihua();
	return 1;
}

int CsudokuDlg::DFS(int n)
{
	// 获取当前坐标
	int iRowPos = n / 9;
	int iColPos = n % 9;
	/* 所有的都符合，退出递归 */
	if (n > 80)
	{
		sign = true;
		return 0;
	}
	/* 当前位不为空时跳过 */
	if (sodunum[iRowPos][iColPos ] != 0)
	{
		if (true == bRecycleFlag)
		{
			bRecycleFlag = false;
			int iCurVal = sodunum[iRowPos][iColPos] + 1;
			if (9 <= iCurVal)
			{
				sodunum[iRowPos][iColPos] = 0;
				n--;
				DFS(n);
				bRecycleFlag = true;
			}
			else
			{
				for (; iCurVal <= 9; ++iCurVal)
				{
					if (true == Check(n, iCurVal))
					{
						sodunum[iRowPos][iColPos] = iCurVal;
						DFS(n + 1);
						if (sign == true)
						{
							return 0; /* 如果构造不成功，还原当前位 */
						}
					}
				}
				if (9 == iCurVal)
				{
					sodunum[iRowPos][iColPos] = 0;
					n--;
					DFS(n);
					bRecycleFlag = true;
				}
			}
		}
		else
		{
			DFS(n + 1);
		}
	}
	else
	{
		int iTimes = 0;
		/* 否则对当前位进行枚举测试 */
		for (int i = 1; i <= 9; i++)
		{
			iTimes++;
			if (Check(n, i) == true)
			{
				/* 满足条件时填入数字 */
				sodunum[iRowPos][iColPos] = i;/* 继续搜索 */
				DFS(n + 1);/* 返回时如果构造成功，则直接退出 */
				if (sign == true)
				{
					return 0; /* 如果构造不成功，还原当前位 */
				}
				else
				{
					sodunum[iRowPos][iColPos] = 0;
				}
			}
		}
		if (9 == iTimes)
		{
			sodunum[iRowPos][iColPos] = 0;
			n = n - 1;
			bRecycleFlag = true;
			DFS(n);
		}
	}
	return 0;
}

bool CsudokuDlg::Check(int n, int key)             /* 判断key填入n时是否满足条件 */
{

	for (int i = 0; i < 9; i++)            /* 判断n所在横列是否合法 */
	{

		int j = n / 9;                  /* j为n竖坐标 */
		if (sodunum[j][i] == key)
			return false;
	}
	for (int i = 0; i < 9; i++)             /* 判断n所在竖列是否合法 */
	{
		int j = n % 9;                      /* j为n横坐标 */
		if (sodunum[i][j] == key) 
		{
			return false;
		}
	}
	int x = n / 9 / 3 * 3;                 /* x为n所在的小九宫格左顶点竖坐标 */
	int y = n % 9 / 3 * 3;                 /* y为n所在的小九宫格左顶点横坐标 */
	for (int i = x; i < x + 3; i++)                /* 判断n所在的小九宫格是否合法 */
	{
		for (int j = y; j < y + 3; j++)
		{
			if (sodunum[i][j] == key) return false;
		}
	}
	return true;                             /* 全部合法，返回正确 */
}

void CsudokuDlg::OnEnChangeEdit19()
{
	// TODO:  如果该控件是 RICHEDIT 控件，它将不
	// 发送此通知，除非重写 CDialogEx::OnInitDialog()
	// 函数并调用 CRichEditCtrl().SetEventMask()，
	// 同时将 ENM_CHANGE 标志“或”运算到掩码中。

	// TODO:  在此添加控件通知处理程序代码
}

//重置
void CsudokuDlg::OnBnClickedRESET()
{
	// TODO: 在此添加控件通知处理程序代码
	sign = false;
	for (int i = 0; i<9; i++)
		for (int j = 0; j < 9; j++)
		{
			sodunum[i][j] = 0;
		}
	Setnum();
	UpdateData(false);
	UpdateData();
}



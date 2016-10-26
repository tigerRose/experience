// convert_CString.c

// 1 CString �롡char *
CString s = "hello";
char *p = (LPSTR)(LPCTSTR)s;

char p[] = "world";
s.Format("%s", p);

// 2 CString �롡string
CString s;
string str = "hello";
s.Format("%s", str.c_str());

CString s = "hello";
string str(s.GetBuffer()); // string �����޷���printf��ӡ
CString.ReleaseBuffer();

// 3 char �롡string
char p[] = "hello";
string str(p);

const char *c = str.c_str();

// 4 CString �롡int
int i = atoi(s); // ת��������atof
int i = _ttoi(s);

CString.Format("%d", i);

// 5 CString �롡char[100]
char a[100];
CString s("abc");
strncpy(a, (LPCTSTR)s, sizeof(a)); // vs2013������Ҫ��strncpy_s

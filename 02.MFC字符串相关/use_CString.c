// use_CString.c

// ��ʼ��
CString s;
CString s("hello");
CString s = "hello";

char c[] = "hello";
CString s = "";
s.Format("%s", c);

CString s = "hello";
// ����
// ע�⣺Ӣ��ÿ���ַ�ռһ�����ȣ�����ÿ��ռ��������
printf("%d", s.GetLength());    // 5

// ��ת
s.MakeReverse();    // "olleh"

// ת����Сд
s.MakeUpper();      // "HELLO"
s.MakeLower();      // "hello"

// ���롡ɾ��
s.Insert(2, "a");   // "heallo"
s.Delete(3, 2);     // "hel"

// �滻���Ƴ�ָ���ַ�
s.Replace("ll", "yy");  // "heyyo"
s.Remove('l');          // "heo"

// ȥ���������߿ո�
// һ����ļ���ȡ�ַ�����������ȥ�����˿ո񣬷�ֹ��ȡ����������
s.TrimLeft();   // Ĭ��ȥ����˿ո�
s.TrimRight("a");  // ȥ���Ҷ˵�������"a"

// ����ַ����Լ��ж��ַ����Ƿ�Ϊ��
// �ж��Ƿ�Ϊ��Ҳ�����ڶ�ȡ�ļ�
s.Empty();
s.IsEmpty();    // Ϊ��ʱ����0

// ����
s.Find('e');    // 1
s.Find('ll');   // 2
s.Find('e', 1); // 0
s.Find('a');    // �Ҳ�������-1
s.ReverseFind('e'); // ������ң����ȷ����ٲ��ң�3

// ��ʽ��
s.Format("%d", 2);  // "2"

// ȡֵ�븳ֵ
s.GetAt(2); // "l"	�������Խ�磬����쳣
s.SetAt(2, 'h');    // "hehlo"

s.Left(2);  // "he"
s.Right(2);  // "lo"
s.Mid(2, 2);    // "ll"
s.Mid(2);   // "llo"

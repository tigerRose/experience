// use_CStringList.c

// ����
CStringList str_list;

// ���ɾ��Ԫ��
str_list.AddHead("123");    //���б�ͷ�����Ԫ��
str_list.AddTail("123");    //���б�β�����Ԫ��

str_list.InsertBefor(POSITION pos, "123");     // �ڸ���λ��ǰ������Ԫ��
str_list.InsertAfter(POSITION pos, "123");     // �ڸ���λ�ú������Ԫ��

str_list.RemoveHead();      // �ֱ�ʱɾ��ͷ��β������Ԫ��
str_list.RemoveTail();
str_list.RemoveAll();

// ����
str_list.GetHead();         // ��ȡͷ��β��Ԫ��
str_list.GetTail();

str_list.GetAt(POSITION pos);           // ��ȡָ��λ�õ�Ԫ��
str_list.SetAt(POSITION pos);           // ����ָ��λ�õ�Ԫ��
str_list.RemoveAt(POSITION pos);        // ɾ��ָ��λ�õ�Ԫ��

// ��������
str_list.GetHeadPosition(); // ��ȡͷ����β��Ԫ������λ��
str_list.GetTailPosition();

str_list.GetNext(POSITION pos);         // ��ȡ��һ��Ԫ��
str_list.GetPrev(POSITION pos);         // ��ȡǰһ��Ԫ��

// ����
POSITION pos = str_list.Find("123");            // ��ȡ���ַ���ָ����Ԫ�ص�λ��
POSITION pos = str_list.FindIndex(int i);       // ��ȡ������ָ����Ԫ�ص�λ��

// ״̬
str_list.GetCount();        // ����Ԫ�ظ���
str_list.IsEmpty();          // �����б��Ƿ�Ϊ��

// ����
POSITION pos;
pos = str_list.GetHeadPosition();
while (pos != NULL)
{
    CString s = str_list.GetNext(pos);
    printf("%s", s);
}

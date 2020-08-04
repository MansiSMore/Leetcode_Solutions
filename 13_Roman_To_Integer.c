//13. Roman to Integer
int romanToInt(char* Arr)
{
	int i = 0, iCnt = 0;

	while(Arr[iCnt] != '\0')
	{
		if(Arr[iCnt] == 'I')
		{
			if(Arr[iCnt+1] == 'V')
			{
				i = i + 4;
			}
			else if(Arr[iCnt+1] == 'X')
			{
				i = i + 9;
			}
			else
			{
				i = i + 1;
			}
		}
		else if((Arr[iCnt] == 'V') && (Arr[iCnt - 1] != 'I'))
		{
			i += 5;
		}
		else if((Arr[iCnt] == 'X') && (Arr[iCnt - 1] != 'I'))
		{
			if(Arr[iCnt+1] == 'L')
			{
				i += 40;
			}
			else if(Arr[iCnt+1] == 'C')
			{
				i += 90;
			}
			else
			{
				i += 10;
			}
		}
		else if((Arr[iCnt] == 'L') && (Arr[iCnt - 1] != 'X'))
		{
			i += 50;
		}
		else if((Arr[iCnt] == 'C') && (Arr[iCnt - 1] != 'X'))
		{
			if(Arr[iCnt+1] == 'D')
			{
				i = i + 400;
			}
			else if(Arr[iCnt+1] == 'M')
			{
				i = i + 900;
			}
			else
			{
				i += 100;
			}
		}
		else if((Arr[iCnt] == 'D') && (Arr[iCnt - 1] != 'C'))
		{
			i += 500;
		}
		else if((Arr[iCnt] == 'M') && (Arr[iCnt - 1] != 'C'))
		{
			i += 1000;
		}

		iCnt++;
	}
	return i;
}

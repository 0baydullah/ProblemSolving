
char s[111111] = "0000000000", o[111111];
main(n, l, i, j) {
	scanf("%d%s", &n, o), l = strlen(o);
	for (i = 0; i < l; i++)
		if (o[i] == 'L') {
			for (j = 0; s[j] == '1';) j++;
			s[j] = '1';
		} else if (o[i] == 'R') {
			for (j = 9; s[j] == '1';) j--;
			s[j] = '1';
		} else {
			s[o[i] - '0'] = '0';
		}
	puts(s);
}
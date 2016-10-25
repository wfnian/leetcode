void swap(char num2[], char temps[]) {
	char t1[100000] = " ";
	int i = 0, LEN11 = 0, LEN22 = 0;
	for (i = 0; num2[i] != '\0'; i++) {
		t1[i] = num2[i];
		LEN11++;
	}
	t1[LEN11] = '\0';
	for (i = 0; temps[i] != '\0'; i++) {
		num2[i] = temps[i];
		LEN22++;
	}
	num2[LEN22] = '\0';
	for (i = 0; i<LEN11; i++) {
		temps[i] = t1[i];
	}
	temps[LEN11] = '\0';
}
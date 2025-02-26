#include <stdio.h>

float calculatePAYE(float basicSalary) {
	if (basicSalary <= 24000) return 0;
	else if (basicSalary <= 50000) return 0.10 * basicSalary;
	else if (basicSalary <= 80000) return 0.20 * basicSalary;
	else if (basicSalary <= 100000) return 0.25 * basicSalary;
	else if (basicSalary <= 500000) return 0.30 * basicSalary;
	else return 0.35 * basicSalary;
}

int main() {
	float basicSalary, housing, transport, shift, riskAllowance = 15000;
	float grossSalary, paye, housinglevy, shif, nssf, totalDeductions, netSalary;

	// prompt input from the user
	printf("Enter your basic salary(kshs): ");
	scanf("%f", &basicSalary);

	// calculate allowances
	housing = 0.15 * basicSalary;
	transport = 0.10 * basicSalary;
	shift = 0.06 * basicSalary;
	
	// gross salary
	grossSalary = basicSalary + housing + transport + shift + riskAllowance;

	// deductions
	paye = calculatePAYE(basicSalary);
	housinglevy = 0.015 * grossSalary;
	shif = 0.0275 * grossSalary;
	nssf = 0.06 * grossSalary;
	totalDeductions = paye + housinglevy + shif + nssf;

	// net salary
	netSalary = grossSalary - totalDeductions;

	// output
	printf("Details:\n");
	printf("Basic Salary: Ksh %.2f\n", basicSalary);
    	printf("Housing Allowance: Ksh %.2f\n", housing);
    	printf("Transport Allowance: Ksh %.2f\n", transport);
    	printf("Shift Allowance: Ksh %.2f\n", shift);
    	printf("Risk Allowance: Ksh %.2f\n", riskAllowance);
    	printf("Gross Salary: Ksh %.2f\n", grossSalary);
    	printf("PAYE Deduction: Ksh %.2f\n", paye);
    	printf("Affordable Housing Levy: Ksh %.2f\n", housinglevy);
    	printf("SHIF Deduction: Ksh %.2f\n", shif);
    	printf("NSSF Deduction: Ksh %.2f\n", nssf);
    	printf("Total Deductions: Ksh %.2f\n", totalDeductions);
    	printf("Net Salary: Ksh %.2f\n", netSalary);

    	return 0;
}

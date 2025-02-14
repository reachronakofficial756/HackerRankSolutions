// You are tasked with building a simple risk management system for an investment advisor. The system evaluates the risk of a portfolio based on the investor's choices and calculates an appropriate risk level. The goal is to determine if the investor's portfolio is low, medium, or high risk, and then provide investment suggestions.

// An investment advisor wants to help clients build an investment portfolio. The risk level of the portfolio depends on three key factors:

// Age of the Investor:
// Investors under 30 years are more likely to take risks.
// Investors between 30 and 50 are generally conservative but willing to accept some risk.
// Investors above 50 are risk-averse and prefer stable investments.
// Annual Income of the Investor:
// Higher income investors are more likely to invest in riskier assets.
// Lower income investors should avoid high-risk investments.
// Investment Preference (Risk Tolerance):
// Investors who prefer higher returns are more likely to accept higher risk.
// Investors who prefer safe, steady returns are risk-averse.
// Write a program that determines the risk level of an investor’s portfolio based on the three inputs: age, income, and risk tolerance. The system should output one of the following risk levels:

// Low Risk: Suitable for conservative investors who prefer stable returns and do not take risks.
// Medium Risk: Suitable for investors who are willing to take moderate risks for a balance of returns.
// High Risk: Suitable for investors who are willing to take high risks for potentially high returns.
// Decision Logic:

// Low Risk Portfolio:
// Investor is above 50 years old, unless he has high income (>75,000) and high risk tolerance(3)
// Investor has low income (<= 30,000) and prefers low or medium risk (tolerance 1 or 2).
// Medium Risk Portfolio:
// Investor is between 30 and 50 years old (inclusive), with low or medium income (<= 75,000), and prefers medium risk (tolerance 2).
// Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers low or medium risk (tolerance 1 or 2).
// High Risk Portfolio:
// Investor is under 30 years old, regardless of income or risk tolerance.
// Investor is between 30 and 50 years old (inclusive), with high income (> 75,000), and prefers high risk (tolerance 3).
// Investor is above 50 years old, prefers high risk (tolerance 3), and has high income (> 75,000).
// Input Format

// Age: An integer representing the investor’s age.
// Annual Income: An integer representing the investor’s annual income.
// Risk Tolerance: An integer where:
// 1 means low risk (safe investments).
// 2 means medium risk (balanced investments).
// 3 means high risk (aggressive investments).
// Constraints

// 0 < Age < 100
// 0 < Annual Income < 1000000
// 0 < Risk Tolerance < 4
// Output Format

// Print one of the following messages based on the risk level:

// "Low Risk Portfolio: Suitable for conservative investments."
// "Medium Risk Portfolio: Balanced risk for moderate returns."
// "High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance."

#include <stdio.h>

int main() {
  int age;
  int income;
  int riskTolerance;
  scanf("%d %d %d", &age, &income, &riskTolerance);

    if((age<30) || (30<=age && age<=50 && income>75000 && riskTolerance == 3) || (age>50 && riskTolerance == 3 && income>75000)){
  printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
  return 0;
  
  } else if((30<=age && age<=50 && income<=75000 && riskTolerance == 2) || (30<=age && age<=50 && income>75000 && (riskTolerance == 1 || riskTolerance ==2))){
  printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
  return 0;
  } else if(((age>50 && !(income>75000 && riskTolerance == 3)) || 
  (income<=30000 && (riskTolerance == 1 || riskTolerance == 2)))){
  printf("Low Risk Portfolio: Suitable for conservative investments.");
  return 0;
  } 
}
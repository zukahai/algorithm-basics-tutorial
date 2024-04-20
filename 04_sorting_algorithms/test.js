import { chemicalEquationBalancer } from 'chemical-equation-balancer-haizuka';

const cbe = chemicalEquationBalancer("H2 + O2 = H2O");
const textResult = cbe.text;

console.log(textResult); // 2H2 + O2 = 2H2O
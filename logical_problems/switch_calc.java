package logical_problems;
java.util.*;

/**
 * switch_calc
 */
public class switch_calc {
    public static void main(String[] args) {
    char op;
    float num1, num2;

    scann
   // cout << "Enter an operator (+, -, *, /): ";
   // cin >> op;

    //cout << "Enter two numbers: ";
    //cin >> num1 >> num2;

    switch (op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0)
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            else
                cout << "Error! Division by zero." << endl;
            break;

        default:
            cout << "Operator is not correct." << endl;
            break;
    }
    }
    
}
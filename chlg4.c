#include <stdio.h>
// hours_worked
//payrate
//overtime pay_rate
//tax_rates
int main() {
    float hours_worked;
    float pay_rate=12;
    float overtime_pay_rate=12*1.5;
    float grosspay;
    float netpay;
    printf("How many hours did you worked this week ? : ");
    scanf("%f",&hours_worked);

    if (hours_worked>40){
     
        grosspay=overtime_pay_rate*hours_worked;

        if (grosspay >300 )
        {
            netpay = grosspay-(grosspay*0.15);
        }
        else if (grosspay > 300 & grosspay <=450)
        {
            netpay = grosspay-(grosspay*0.20);
        }
        else
        {
             netpay=grosspay*(grosspay*0.25);
        }
           
    }

        else {   
            
            grosspay=pay_rate*hours_worked;

            if (grosspay >300 )
        {
            netpay = grosspay-(grosspay*0.15);
        }
        else if (grosspay > 300 & grosspay <=450)
        {
            netpay = grosspay-(grosspay*0.20);
        }
        else
        {
             netpay=grosspay*(grosspay*0.25);
        }

        }

    printf("Your grosspay is %f",grosspay);
    printf("Your netpay is %f",netpay);
}

  
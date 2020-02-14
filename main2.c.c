#include <kipr/wombat.h>

int main()
{
    enable_servos();
    
    set_servo_position(0, 300);
    msleep(1000);
    
   while (analog(0) < 2800)
   {
       motor(0,50);
       motor(1,50);
      
   }
      if (analog(0) <= 2900);
      {
          motor(0,0);
          motor(1,0);
          set_servo_position(0,1800);  
          msleep(2000);
          set_servo_position(0,1200);
          msleep(1000);
      }
    
    
    set_servo_position(0,1000);
    msleep(1000);
   
    motor(0,-50);
    motor(1,-50);
    msleep(4000);
    
    motor(0,0);
    motor(1,80);
    msleep(700);
    
    motor(0,70);
    motor(1,55);
    msleep(3800);
    set_servo_position(0, 1000);
    
    motor(0,100);
    motor(1,10);
    msleep(1500);
    
    motor(0,100);
    motor(1,100);
    msleep(4000);
    
    
    
    ao();
    return 0;
}

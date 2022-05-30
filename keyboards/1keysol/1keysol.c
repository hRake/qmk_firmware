#include <string.h>
#include <quantum.h>
#include <1keysol.h>
#include <gpio.h>

void keyboard_post_init_kb(void)
{
    wait_ms(5000);
    setPinOutput(B13);
    writePin(B13, 1);
    wait_ms(4);
    writePin(B13,0);
    //debug_enable=true;
    //debug_matrix=true;
}

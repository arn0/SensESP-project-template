extern void setup();
extern void loop();

void app_main(void)
{
    setup();

    do
    {
        loop();
    } while (1);
    
}

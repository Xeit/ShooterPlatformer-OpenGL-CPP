#include "LEVEL_2.h"
#include "LEVEL_2.h"

void Level_2_render()
{
	platform(0.f, 250.f, 400.f, 450.f);//1st
	platform(250.f, 500.f, 400.f, 450.f);//2nd
	platform(500.f, 750.f, 400.f, 450.f);//3rd
	platform(750.f, 1000.f, 400.f, 450.f);//4th
	platform(750.f, 1000.f, 300.f, 350.f);//5th *
	platform(1150.f, 1400.f, 300.f, 350.f);//6th
	platform(1400.f, 1650.f, 300.f, 350.f);//7th
	platform(1850.f, 2100.f, 400.f, 450.f);//8th
	platform(2100.f, 2350.f, 400.f, 450.f);//9th
	platform(2450.f, 2700.f, 400.f, 450.f);//10th
	platform(2800.f, 3050.f, 350.f, 400.f);//11th
	platform(3150.f, 3400.f, 300.f, 350.f);//12th
	platform(3500.f, 3750.f, 250.f, 300.f);//13th
	platform(3850.f, 4100.f, 200.f, 250.f);//14th
	platform(4200.f, 4450.f, 200.f, 250.f);//15th
	platform(4450.f, 4700.f, 200.f, 250.f);//16th
	platform(4700.f, 4950.f, 200.f, 250.f);//17th 
	platform(4950.f, 5200.f, 200.f, 250.f);//18th 
	platform(5300.f, 5550.f, 150.f, 200.f);//19th 
	platform(5650.f, 5900.f, 150.f, 200.f);//20th
	platform(6000.f, 6250.f, 150.f, 200.f);//21th
	platform(6350.f, 6600.f, 400.f, 450.f);//22th
	platform(6500.f, 6750.f, 320.f, 370.f);//23th
	platform(6750.f, 7000.f, 320.f, 370.f);//24th
	platform(7000.f, 7250.f, 320.f, 370.f);//25th
	platform(7400.f, 7650.f, 320.f, 370.f);//26th
	platform(7800.f, 8050.f, 320.f, 370.f);//27th 
	platform(8150.f, 8400.f, 270.f, 320.f);//28th 
	platform(8400.f, 8650.f, 270.f, 320.f);//29th 
	platform(8750.f, 9000.f, 220.f, 270.f);//30th 
	platform(9150.f, 9400.f, 220.f, 270.f);//31
	platform(9400.f, 9650.f, 220.f, 270.f);//32 
	platform(9650.f, 9900.f, 220.f, 270.f);//33 
	platform(9900.f, 10150.f, 400.f, 450.f);//34
	platform(10150.f, 10400.f, 400.f, 450.f);//35 
	platform(10500.f, 10750.f, 400.f, 450.f);//36 
	platform(10750.f, 11000.f, 400.f, 450.f);//37 
	platform(11100.f, 11350.f, 350.f, 400.f);//38
	platform(11450.f, 11700.f, 300.f, 350.f);//39
	platform(11800.f, 12050.f, 250.f, 300.f);//40
	platform(12150.f, 12400.f, 200.f, 250.f);//41
	platform(12500.f, 12750.f, 150.f, 600.f);//42
	platform(12750.f, 13000.f, 150.f, 600.f);//43 
	platform(13000.f, 13250.f, 150.f, 600.f);//44 
	platform(13250.f, 13500.f, 150.f, 600.f);//45 Di Ent
	/*platform(10300.f, 10550.f, 100.f, 150.f);//46
	platform(10700.f, 10950.f, 100.f, 150.f);//47
	platform(11100.f, 11350.f, 200.f, 250.f);//48
	platform(11350.f, 11600.f, 200.f, 250.f);//49
	platform(11600.f, 11850.f, 200.f, 250.f);//50
	platform(12050.f, 12250.f, 400.f, 450.f);//51
	platform(12350.f, 12600.f, 350.f, 400.f);//52
	platform(12700.f, 12950.f, 450.f, 500.f);//53
	platform(13050.f, 13250.f, 400.f, 450.f);//54
	platform(13300.f, 13550.f, 300.f, 350.f);//55
	platform(13650.f, 13900.f, 350.f, 400.f);//56
	platform(13950.f, 14200.f, 250.f, 300.f);//57
	platform(14300.f, 14550.f, 300.f, 350.f);//58
	platform(14600.f, 14850.f, 200.f, 250.f);//59
	platform(15000.f, 15250.f, 250.f, 300.f);//60
	platform(15400.f, 15650.f, 200.f, 250.f);//61
	platform(15800.f, 16050.f, 150.f, 600.f);//62
	platform(16050.f, 16300.f, 150.f, 600.f);//63
	platform(16300.f, 16550.f, 150.f, 600.f);//64
	platform(16550.f, 16800.f, 150.f, 600.f);//65
	*/
}

void Level_2_collision()
{
	collision_line p47;//p1-p4
	p47.collision_points(0.f, 1000.f, 400.f);
	compare(p47.get_left_x(), p47.get_right_x(), p47.get_y());

	collision_line p48;//p5
	p48.collision_points(750.f, 1000.f, 300.f);
	compare(p48.get_left_x(), p48.get_right_x(), p48.get_y());

	collision_line p49;//p6-7
	p49.collision_points(1150.f, 1650.f, 300.f);
	compare(p49.get_left_x(), p49.get_right_x(), p49.get_y());

	collision_line p50; //p8-9
	p50.collision_points(1850.f, 2350.f, 400.f);
	compare(p50.get_left_x(), p50.get_right_x(), p50.get_y());

	collision_line p51; //p10
	p51.collision_points(2450.f, 2700.f, 400.f);
	compare(p51.get_left_x(), p51.get_right_x(), p51.get_y());

	collision_line p52; //p11
	p52.collision_points(2800.f, 3050.f, 350.f);
	compare(p52.get_left_x(), p52.get_right_x(), p52.get_y());

	collision_line p53; //p12
	p53.collision_points(3150.f, 3400.f, 300.f);
	compare(p53.get_left_x(), p53.get_right_x(), p53.get_y());

	collision_line p54;//p13
	p54.collision_points(3500.f, 3750.f, 250.f);
	compare(p54.get_left_x(), p54.get_right_x(), p54.get_y());

	collision_line p55; //p14
	p55.collision_points(3850.f, 4100.f, 200.f);
	compare(p55.get_left_x(), p55.get_right_x(), p55.get_y());

	collision_line p56;//p15-18
	p56.collision_points(4200.f, 5200.f, 200.f);
	compare(p56.get_left_x(), p56.get_right_x(), p56.get_y());

	collision_line p57;//p19
	p57.collision_points(5300.f, 5550.f, 150.f);
	compare(p57.get_left_x(), p57.get_right_x(), p57.get_y());

	collision_line p58;//p20
	p58.collision_points(5650.f, 5900.f, 150.f);
	compare(p58.get_left_x(), p58.get_right_x(), p58.get_y());

	collision_line p59;//p21
	p59.collision_points(6000.f, 6250.f, 150.f);
	compare(p59.get_left_x(), p59.get_right_x(), p59.get_y());

	collision_line p60;//p22
	p60.collision_points(6350.f, 6600.f, 400.f);
	compare(p60.get_left_x(), p60.get_right_x(), p60.get_y());

	collision_line p61;//p23-25
	p61.collision_points(6500.f, 7250.f, 320.f);
	compare(p61.get_left_x(), p61.get_right_x(), p61.get_y());

	collision_line p62;//p26
	p62.collision_points(7400.f, 7650.f, 320.f);
	compare(p62.get_left_x(), p62.get_right_x(), p62.get_y());

	collision_line p63;//p27
	p63.collision_points(7800.f, 8050.f, 320.f);
	compare(p63.get_left_x(), p63.get_right_x(), p63.get_y());

	collision_line p64;//p28-29
	p64.collision_points(8150.f, 8650.f, 270.f);
	compare(p64.get_left_x(), p64.get_right_x(), p64.get_y());

	collision_line p65;//p30
	p65.collision_points(8750.f, 9000.f, 220.f);
	compare(p65.get_left_x(), p65.get_right_x(), p65.get_y());

	collision_line p66;//p31-33
	p66.collision_points(9150.f, 9900.f, 220.f);
	compare(p66.get_left_x(), p66.get_right_x(), p66.get_y());

	collision_line p67;//p34-35
	p67.collision_points(9900.f, 10400.f, 400.f);
	compare(p67.get_left_x(), p67.get_right_x(), p67.get_y());

	collision_line p68;//p36-37
	p68.collision_points(10500.f, 11000.f, 400.f);
	compare(p68.get_left_x(), p68.get_right_x(), p68.get_y());

	collision_line p69;//p38
	p69.collision_points(11100.f, 11350.f, 350.f);
	compare(p69.get_left_x(), p69.get_right_x(), p69.get_y());

	collision_line p70;//p39
	p70.collision_points(11450.f, 11700.f, 300.f);
	compare(p70.get_left_x(), p70.get_right_x(), p70.get_y());

	collision_line p71;//p40
	p71.collision_points(11800.f, 12050.f, 250.f);
	compare(p71.get_left_x(), p71.get_right_x(), p71.get_y());

	collision_line p72;//p41
	p72.collision_points(12150.f, 12400.f, 200.f);
	compare(p72.get_left_x(), p72.get_right_x(), p72.get_y());

	collision_line p73;//p42-45
	p73.collision_points(12500.f, 13500.f, 150.f);
	compare(p73.get_left_x(), p73.get_right_x(), p73.get_y());

	/*collision_line p28;//p43
	p28.collision_points(10050.f, 10250.f, 400.f);
	compare(p28.get_left_x(), p28.get_right_x(), p28.get_y());

	collision_line p29;//p44
	p29.collision_points(10050.f, 10250.f, 280.f);
	compare(p29.get_left_x(), p29.get_right_x(), p29.get_y());

	collision_line p30;//p45
	p30.collision_points(10050.f, 10250.f, 160.f);
	compare(p30.get_left_x(), p30.get_right_x(), p30.get_y());

	collision_line p31;//p46
	p31.collision_points(10300.f, 10550.f, 100.f);
	compare(p31.get_left_x(), p31.get_right_x(), p31.get_y());

	collision_line p32;//p47
	p32.collision_points(10700.f, 10950.f, 100.f);
	compare(p32.get_left_x(), p32.get_right_x(), p32.get_y());

	collision_line p33;//p48
	p33.collision_points(11100.f, 11350.f, 200.f);
	compare(p33.get_left_x(), p33.get_right_x(), p33.get_y());

	collision_line p34;//p49-50
	p34.collision_points(11350.f, 11850.f, 200.f);
	compare(p34.get_left_x(), p34.get_right_x(), p34.get_y());

	collision_line p35;//p51
	p35.collision_points(12050.f, 12250.f, 400.f);
	compare(p35.get_left_x(), p35.get_right_x(), p35.get_y());

	collision_line p36;//p52
	p36.collision_points(12350.f, 12600.f, 350.f);
	compare(p36.get_left_x(), p36.get_right_x(), p36.get_y());

	collision_line p37;//p53
	p37.collision_points(12700.f, 12950.f, 450.f);
	compare(p37.get_left_x(), p37.get_right_x(), p37.get_y());

	collision_line p38;//p54
	p38.collision_points(13050.f, 13250.f, 400.f);
	compare(p38.get_left_x(), p38.get_right_x(), p38.get_y());

	collision_line p39;//p55
	p39.collision_points(13300.f, 13550.f, 300.f);
	compare(p39.get_left_x(), p39.get_right_x(), p39.get_y());

	collision_line p40;//p56
	p40.collision_points(13650.f, 13900.f, 350.f);
	compare(p40.get_left_x(), p40.get_right_x(), p40.get_y());

	collision_line p41;//p57
	p41.collision_points(13950.f, 14200.f, 250.f);
	compare(p41.get_left_x(), p41.get_right_x(), p41.get_y());

	collision_line p42;//p58
	p42.collision_points(14300.f, 14550.f, 300.f);
	compare(p42.get_left_x(), p42.get_right_x(), p42.get_y());

	collision_line p43;//p59
	p43.collision_points(14600.f, 14850.f, 200.f);
	compare(p43.get_left_x(), p43.get_right_x(), p43.get_y());

	collision_line p44;//p60
	p44.collision_points(15000.f, 15250.f, 250.f);
	compare(p44.get_left_x(), p44.get_right_x(), p44.get_y());

	collision_line p45;//p61
	p45.collision_points(15400.f, 15650.f, 200.f);
	compare(p45.get_left_x(), p45.get_right_x(), p45.get_y());

	collision_line p46;//p62-65
	p46.collision_points(15800.f, 16800.f, 150.f);//65);
	compare(p46.get_left_x(), p46.get_right_x(), p46.get_y());

	collision_line p47;
	p47.collision_points(13165.f, 13230.f, 395.f);
	compare(p47.get_left_x(), p47.get_right_x(), p47.get_y());

	collision_line p48;
	p48.collision_points(13295.f, 13360.f, 330.f);
	compare(p48.get_left_x(), p48.get_right_x(), p48.get_y());

	collision_line p49;
	p49.collision_points(13425.f, 13490.f, 265.f);
	compare(p49.get_left_x(), p49.get_right_x(), p49.get_y());

	collision_line p50;
	p50.collision_points(13555.f, 14555.f, 200.f);
	compare(p50.get_left_x(), p50.get_right_x(), p50.get_y());
	*/
}

void Level_2_values()
{

}

void Level_2_ending()
{
}

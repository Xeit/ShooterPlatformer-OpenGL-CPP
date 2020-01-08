#include "LEVEL_1.h"

void Level_1_render()
{
	platform(0.f, 250.f, 400.f, 450.f);//1st
	platform(250.f, 500.f, 400.f, 450.f);//2nd
	platform(500.f, 750.f, 400.f, 450.f);//3rd
	platform(750.f, 1000.f, 400.f, 450.f);//4th
	platform(750.f, 1000.f, 300.f, 350.f);//5th *
	platform(1150.f, 1400.f, 300.f, 350.f);//6th
	platform(1500.f, 1750.f, 240.f, 290.f);//7th
	platform(1850.f, 2100.f, 180.f, 230.f);//8th
	platform(2200.f, 2450.f, 130.f, 180.f);//9th
	platform(2600.f, 2850.f, 130.f, 180.f);//10th
	platform(2850.f, 3100.f, 130.f, 180.f);//11th
	platform(3100.f, 3350.f, 130.f, 180.f);//12th
	platform(3550.f, 3800.f, 500.f, 550.f);//13th
	platform(3800.f, 4050.f, 500.f, 550.f);//14th
	platform(4050.f, 4300.f, 500.f, 550.f);//15th
	platform(4300.f, 4550.f, 500.f, 550.f);//16th
	platform(4300.f, 4550.f, 380.f, 430.f);//17th *
	platform(4300.f, 4550.f, 280.f, 330.f);//18th *
	platform(4300.f, 4550.f, 180.f, 230.f);//19th *
	platform(4700.f, 4950.f, 180.f, 230.f);//20th
	platform(4950.f, 5200.f, 230.f, 280.f);//21th
	platform(5200.f, 5450.f, 280.f, 330.f);//22th
	platform(5650.f, 5900.f, 380.f, 430.f);//23th
	platform(6000.f, 6250.f, 330.f, 380.f);//24th
	platform(6350.f, 6600.f, 280.f, 330.f);//25th
	platform(6750.f, 7000.f, 550.f, 600.f);//26th
	platform(7000.f, 7250.f, 550.f, 600.f);//27th 
	platform(7250.f, 7500.f, 550.f, 600.f);//28th 
	platform(7500.f, 7750.f, 550.f, 600.f);//29th 
	platform(7750.f, 8000.f, 550.f, 600.f);//30th 
	platform(8000.f, 8250.f, 550.f, 600.f);//31
	platform(8150.f, 8400.f, 450.f, 500.f);//32 *
	platform(8000.f, 8250.f, 330.f, 380.f);//33 *
	platform(6770.f, 7020.f, 400.f, 450.f);//34 **
	platform(7120.f, 7370.f, 400.f, 450.f);//35 **
	platform(7520.f, 7770.f, 400.f, 450.f);//36 **
	platform(7870.f, 8120.f, 350.f, 400.f);//37 **
	platform(8400.f, 8650.f, 330.f, 380.f);//38
	platform(8750.f, 9000.f, 330.f, 380.f);//39
	platform(9000.f, 9250.f, 330.f, 380.f);//40
	platform(9250.f, 9500.f, 330.f, 380.f);//41
	platform(9700.f, 9950.f, 400.f, 450.f);//42
	platform(10050.f, 10250.f, 400.f, 450.f);//43 *
	platform(10050.f, 10250.f, 280.f, 330.f);//44 *
	platform(10050.f, 10250.f, 160.f, 210.f);//45 *
	platform(10300.f, 10550.f, 100.f, 150.f);//46
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
	platform(16550.f, 16800.f, 150.f, 600.f);//65 Di Ent
}

void Level_1_collision()
{
	collision_line p1;//p1-p4
	p1.collision_points(0.f, 1000.f, 400.f);
	compare(p1.get_left_x(), p1.get_right_x(), p1.get_y());

	collision_line p2;//p5
	p2.collision_points(750.f, 1000.f, 300.f);
	compare(p2.get_left_x(), p2.get_right_x(), p2.get_y());

	collision_line p3;//p6
	p3.collision_points(1150.f, 1400.f, 300.f);
	compare(p3.get_left_x(), p3.get_right_x(), p3.get_y());

	collision_line p4; //p7
	p4.collision_points(1500.f, 1750.f, 240.f);
	compare(p4.get_left_x(), p4.get_right_x(), p4.get_y());

	collision_line p5; //p8
	p5.collision_points(1850.f, 2100.f, 180.f);
	compare(p5.get_left_x(), p5.get_right_x(), p5.get_y());

	collision_line p6; //p9
	p6.collision_points(2200.f, 2450.f, 130.f);
	compare(p6.get_left_x(), p6.get_right_x(), p6.get_y());

	collision_line p7; //p10-12
	p7.collision_points(2600.f, 3350.f, 130.f);
	compare(p7.get_left_x(), p7.get_right_x(), p7.get_y());

	collision_line p8;//p13-16
	p8.collision_points(3550.f, 4550.f, 500.f);
	compare(p8.get_left_x(), p8.get_right_x(), p8.get_y());

	collision_line p9; //p17
	p9.collision_points(4300.f, 4550.f, 380.f);
	compare(p9.get_left_x(), p9.get_right_x(), p9.get_y());

	collision_line p10;//p18
	p10.collision_points(4300.f, 4550.f, 280.f);
	compare(p10.get_left_x(), p10.get_right_x(), p10.get_y());

	collision_line p11;//p19
	p11.collision_points(4300.f, 4550.f, 180.f);
	compare(p11.get_left_x(), p11.get_right_x(), p11.get_y());

	collision_line p12;//p20
	p12.collision_points(4700.f, 4950.f, 180.f);
	compare(p12.get_left_x(), p12.get_right_x(), p12.get_y());

	collision_line p13;//p21
	p13.collision_points(4950.f, 5200.f, 230.f);
	compare(p13.get_left_x(), p13.get_right_x(), p13.get_y());

	collision_line p14;//p22
	p14.collision_points(5200.f, 5450.f, 280.f);
	compare(p14.get_left_x(), p14.get_right_x(), p14.get_y());

	collision_line p15;//p23
	p15.collision_points(5650.f, 5900.f, 380.f);
	compare(p15.get_left_x(), p15.get_right_x(), p15.get_y());

	collision_line p16;//p24
	p16.collision_points(6000.f, 6250.f, 330.f);
	compare(p16.get_left_x(), p16.get_right_x(), p16.get_y());

	collision_line p17;//p25
	p17.collision_points(6350.f, 6600.f, 280.f);
	compare(p17.get_left_x(), p17.get_right_x(), p17.get_y());

	collision_line p18;//p26-31
	p18.collision_points(6750.f, 8250.f, 550.f);
	compare(p18.get_left_x(), p18.get_right_x(), p18.get_y());

	collision_line p19;//p32
	p19.collision_points(8150.f, 8400.f, 450.f);
	compare(p19.get_left_x(), p19.get_right_x(), p19.get_y());

	collision_line p20;//p33
	p20.collision_points(8000.f, 8250.f, 330.f);
	compare(p20.get_left_x(), p20.get_right_x(), p20.get_y());

	collision_line p21;//p34
	p21.collision_points(6770.f, 7020.f, 400.f);
	compare(p21.get_left_x(), p21.get_right_x(), p21.get_y());

	collision_line p22;//p35
	p22.collision_points(7120.f, 7370.f, 400.f);
	compare(p22.get_left_x(), p22.get_right_x(), p22.get_y());

	collision_line p23;//p36
	p23.collision_points(7520.f, 7770.f, 400.f);
	compare(p23.get_left_x(), p23.get_right_x(), p23.get_y());

	collision_line p24;//p37
	p24.collision_points(7870.f, 8120.f, 350.f);
	compare(p24.get_left_x(), p24.get_right_x(), p24.get_y());

	collision_line p25;//p38
	p25.collision_points(8400.f, 8650.f, 330.f);
	compare(p25.get_left_x(), p25.get_right_x(), p25.get_y());

	collision_line p26;//p39-41
	p26.collision_points(8750.f, 9500.f, 330.f);
	compare(p26.get_left_x(), p26.get_right_x(), p26.get_y());

	collision_line p27;//p42
	p27.collision_points(9700.f, 9950.f, 400.f);
	compare(p27.get_left_x(), p27.get_right_x(), p27.get_y());

	collision_line p28;//p43
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
	p46.collision_points(15800.f, 16800.f, 150.f);
	compare(p46.get_left_x(), p46.get_right_x(), p46.get_y());

	/*collision_line p4;
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

void Level_1_ending()
{
	level = 2;
	PLAYER_POSITION_X = 200.f;
	PLAYER_POSITION_Y = 400.f;
	for (int x = 0; x < 100; x++)
	{
		box_exist[x][0] = 1;
	}
}

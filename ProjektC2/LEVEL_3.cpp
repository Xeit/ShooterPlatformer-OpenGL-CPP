	#include "LEVEL_3.h"

void Level_3_render()
{
	platform(0.f, 250.f, 500.f, 550.f);//1st
	platform(250.f, 500.f, 500.f, 550.f);//2nd
	platform(500.f, 750.f, 500.f, 550.f);//3rd
	platform(750.f, 1000.f, 400.f, 450.f);//4th
	platform(1000.f, 1250.f, 300.f, 350.f);//5th
	platform(1250.f, 1500.f, 300.f, 350.f);//6th
	platform(1500.f, 1750.f, 300.f, 350.f);//7th
	platform(1750.f, 2000.f, 200.f, 250.f);//8th
	platform(2100.f, 2350.f, 200.f, 250.f);//9th
	platform(2500.f, 2750.f, 200.f, 250.f);//10th
	platform(2850.f, 3100.f, 150.f, 200.f);//11th
	platform(3200.f, 3450.f, 150.f, 200.f);//12th
	platform(3300.f, 3550.f, 150.f, 200.f);//13th
	platform(3700.f, 3950.f, 150.f, 200.f);//14th
	platform(4150.f, 4400.f, 500.f, 550.f);//15th
	platform(4500.f, 4750.f, 500.f, 550.f);//16th
	platform(4750.f, 5000.f, 450.f, 500.f);//17th 
	platform(5100.f, 5350.f, 400.f, 450.f);//18th 
	platform(5450.f, 5700.f, 550.f, 600.f);//19th 
	platform(5800.f, 6050.f, 550.f, 600.f);//20th
	platform(6100.f, 6350.f, 500.f, 550.f);//21th *
	platform(6100.f, 6350.f, 420.f, 470.f);//22th *
	platform(6100.f, 6350.f, 340.f, 390.f);//23th *
	platform(6100.f, 6350.f, 260.f, 310.f);//24th *
	platform(6450.f, 6700.f, 310.f, 360.f);//25th *
	platform(6450.f, 6700.f, 250.f, 300.f);//26th *
	platform(6800.f, 7050.f, 300.f, 350.f);//27th 
	platform(7200.f, 7450.f, 300.f, 350.f);//28th 
	platform(7550.f, 7800.f, 300.f, 350.f);//29th 
	platform(8000.f, 8250.f, 450.f, 500.f);//30th 
	platform(8200.f, 8450.f, 350.f, 400.f);//31
	platform(8600.f, 8850.f, 350.f, 400.f);//32 
	platform(8950.f, 9200.f, 300.f, 350.f);//33 
	platform(9200.f, 9450.f, 300.f, 350.f);//34 
	platform(9450.f, 9700.f, 300.f, 350.f);//35 
	platform(9800.f, 10050.f, 350.f, 400.f);//36 
	platform(10050.f, 10300.f, 350.f, 400.f);//37 
	platform(10200.f, 10450.f, 260.f, 310.f);//38
	platform(10300.f, 10550.f, 190.f, 240.f);//39
	platform(10700.f, 10950.f, 190.f, 600.f);//40
	platform(10950.f, 11200.f, 190.f, 600.f);//41
	platform(11200.f, 11450.f, 190.f, 600.f);//42 Di Ent
	/*platform(10050.f, 10250.f, 400.f, 450.f);//43
	platform(10050.f, 10250.f, 280.f, 330.f);//44
	platform(10050.f, 10250.f, 160.f, 210.f);//45
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
	platform(16550.f, 16800.f, 150.f, 600.f);//65
	*/
}

void Level_3_collision()
{
	collision_line p74;//p1-3
	p74.collision_points(0.f, 750.f, 500.f);
	compare(p74.get_left_x(), p74.get_right_x(), p74.get_y());

	collision_line p75;//p4
	p75.collision_points(750.f, 1000.f, 400.f);
	compare(p75.get_left_x(), p75.get_right_x(), p75.get_y());

	collision_line p76;//p5-7
	p76.collision_points(1000.f, 1750.f, 300.f);
	compare(p76.get_left_x(), p76.get_right_x(), p76.get_y());

	collision_line p77; //p8
	p77.collision_points(1750.f, 2000.f, 200.f);
	compare(p77.get_left_x(), p77.get_right_x(), p77.get_y());

	collision_line p78; //p9
	p78.collision_points(2100.f, 2350.f, 200.f);
	compare(p78.get_left_x(), p78.get_right_x(), p78.get_y());

	collision_line p79; //p10
	p79.collision_points(2500.f, 2750.f, 200.f);
	compare(p79.get_left_x(), p79.get_right_x(), p79.get_y());

	collision_line p80; //p11
	p80.collision_points(2850.f, 3100.f, 150.f);
	compare(p80.get_left_x(), p80.get_right_x(), p80.get_y());

	collision_line p81;//p12
	p81.collision_points(3200.f, 3450.f, 150.f);
	compare(p81.get_left_x(), p81.get_right_x(), p81.get_y());

	collision_line p82; //p13
	p82.collision_points(3300.f, 3550.f, 150.f);
	compare(p82.get_left_x(), p82.get_right_x(), p82.get_y());

	collision_line p83;//p14
	p83.collision_points(3700.f, 3950.f, 150.f);
	compare(p83.get_left_x(), p83.get_right_x(), p83.get_y());

	collision_line p84;//p15
	p84.collision_points(4150.f, 4400.f, 500.f);
	compare(p84.get_left_x(), p84.get_right_x(), p84.get_y());

	collision_line p85;//p16
	p85.collision_points(4500.f, 4750.f, 500.f);
	compare(p85.get_left_x(), p85.get_right_x(), p85.get_y());

	collision_line p86;//p17
	p86.collision_points(4750.f, 5000.f, 450.f);
	compare(p86.get_left_x(), p86.get_right_x(), p86.get_y());

	collision_line p87;//p18
	p87.collision_points(5100.f, 5350.f, 400.f);
	compare(p87.get_left_x(), p87.get_right_x(), p87.get_y());

	collision_line p88;//p19
	p88.collision_points(5450.f, 5700.f, 550.f);
	compare(p88.get_left_x(), p88.get_right_x(), p88.get_y());

	collision_line p89;//p20
	p89.collision_points(5800.f, 6050.f, 550.f);
	compare(p89.get_left_x(), p89.get_right_x(), p89.get_y());

	collision_line p90;//p21
	p90.collision_points(6100.f, 6350.f, 500.f);
	compare(p90.get_left_x(), p90.get_right_x(), p90.get_y());

	collision_line p91;//p22
	p91.collision_points(6100.f, 6350.f, 420.f);
	compare(p91.get_left_x(), p91.get_right_x(), p91.get_y());

	collision_line p92;//p23
	p92.collision_points(6100.f, 6350.f, 340.f);
	compare(p92.get_left_x(), p92.get_right_x(), p92.get_y());

	collision_line p93;//p24
	p93.collision_points(6100.f, 6350.f, 260.f);
	compare(p93.get_left_x(), p93.get_right_x(), p93.get_y());

	collision_line p94;//p25
	p94.collision_points(6450.f, 6700.f, 310.f);
	compare(p94.get_left_x(), p94.get_right_x(), p94.get_y());

	collision_line p95;//p26
	p95.collision_points(6450.f, 6700.f, 250.f);
	compare(p95.get_left_x(), p95.get_right_x(), p95.get_y());

	collision_line p96;//p27
	p96.collision_points(6800.f, 7050.f, 300.f);
	compare(p96.get_left_x(), p96.get_right_x(), p96.get_y());

	collision_line p97;//p28
	p97.collision_points(7200.f, 7450.f, 300.f);
	compare(p97.get_left_x(), p97.get_right_x(), p97.get_y());

	collision_line p98;//p29
	p98.collision_points(7550.f, 7800.f, 300.f);
	compare(p98.get_left_x(), p98.get_right_x(), p98.get_y());

	collision_line p99;//p30
	p99.collision_points(8000.f, 8250.f, 450.f);
	compare(p99.get_left_x(), p99.get_right_x(), p99.get_y());

	collision_line p100;//p31
	p100.collision_points(8200.f, 8450.f, 350.f);
	compare(p100.get_left_x(), p100.get_right_x(), p100.get_y());

	collision_line p101;//p32
	p101.collision_points(8600.f, 8850.f, 350.f);
	compare(p101.get_left_x(), p101.get_right_x(), p101.get_y());

	collision_line p102;//p33-35
	p102.collision_points(8950.f, 9700.f, 300.f);
	compare(p102.get_left_x(), p102.get_right_x(), p102.get_y());

	collision_line p103;//p36-37
	p103.collision_points(9800.f, 10300.f, 350.f);
	compare(p103.get_left_x(), p103.get_right_x(), p103.get_y());

	collision_line p104;//p38
	p104.collision_points(10200.f, 10450.f, 260.f);
	compare(p104.get_left_x(), p104.get_right_x(), p104.get_y());

	collision_line p105;//p39
	p105.collision_points(10300.f, 10550.f, 190.f);
	compare(p105.get_left_x(), p105.get_right_x(), p105.get_y());

	collision_line p106;//p40-42
	p106.collision_points(10700.f, 11450.f, 190.f);
	compare(p106.get_left_x(), p106.get_right_x(), p106.get_y());

	/*collision_line p34;//p49-50
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

void Level_3_values()
{
}

void Level_3_ending()
{
}

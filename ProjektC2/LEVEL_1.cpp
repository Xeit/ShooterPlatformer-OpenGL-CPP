#include "LEVEL_1.h"

void Level_1_render()
{
	platform(0.f, 900.f, 400.f, 450.f); // FIRST
	platform(600.f, 900.f, 280.f, 300.f); // SECOND
	platform(1000.f, 1100.f, 250.f, 270.f);//THIRD
	platform(1150.f, 1350.f, 180.f, 200.f); //4th
	platform(1350.f, 1650.f, 130.f, 140.f);//5th
	platform(1750.f, 2250.f, 500.f, 550.f);//6th
	platform(2350.f, 2400.f, 450.f, 460.f);//7th
	platform(2500.f, 2550.f, 400.f, 410.f);//8th
	platform(2650.f, 2700.f, 350.f, 360.f);//9th
	platform(2750.f, 3650.f, 320.f, 340.f);//10th
	platform(3750.f, 4350.f, 480.f, 510.f);//11th
	platform(4250.f, 4350.f, 380.f, 390.f);//12th
	platform(4250.f, 4350.f, 280.f, 290.f);//13th
	platform(4250.f, 4350.f, 180.f, 190.f);//14th
	platform(4450.f, 5100.f, 180.f, 200.f);//15th
	platform(5150.f, 5600.f, 230.f, 250.f);//16th
	platform(5650.f, 5900.f, 180.f, 200.f);//17th
	platform(5950.f, 6200.f, 120.f, 140.f);//18th
	platform(6360.f, 6860.f, 500.f, 530.f);//19th ***
	platform(6430.f, 6630.f, 300.f, 310.f);//20th
	platform(6730.f, 6830.f, 300.f, 310.f);//21th
	platform(6930.f, 7130.f, 300.f, 310.f);//22th
	platform(7230.f, 7330.f, 300.f, 310.f);//23th
	platform(7480.f, 7680.f, 300.f, 310.f);//24th
	platform(7790.f, 7950.f, 300.f, 310.f);//25th
	platform(8140.f, 8740.f, 330.f, 340.f);//26th
	platform(6970.f, 7360.f, 500.f, 530.f);//27th ***
	platform(7490.f, 7880.f, 500.f, 530.f);//28th ***
	platform(8010.f, 8290.f, 500.f, 530.f);//29th ***
	platform(8160.f, 8290.f, 390.f, 400.f);//30th ***
	platform(8690.f, 8740.f, 260.f, 270.f);//31
	platform(8800.f, 8850.f, 200.f, 210.f);//32
	platform(8910.f, 8960.f, 140.f, 150.f);//33
	platform(9020.f, 9070.f, 110.f, 130.f);//34
	platform(9130.f, 9530.f, 110.f, 130.f);//35
	platform(9650.f, 9900.f, 110.f, 130.f);//36
	platform(10040.f, 10190.f, 260.f, 270.f);//37
	platform(10260.f, 10410.f, 160.f, 170.f);//38
	platform(10550.f, 10700.f, 310.f, 320.f);//39
	platform(10770.f, 10920.f, 210.f, 220.f);//40
	platform(11060.f, 11210.f, 360.f, 370.f);//41
	platform(11280.f, 11430.f, 260.f, 270.f);//42
	platform(11570.f, 11720.f, 410.f, 420.f);//43
	platform(11790.f, 11940.f, 310.f, 320.f);//44
	platform(12080.f, 12580.f, 460.f, 480.f);//45
	platform(12700.f, 13100.f, 460.f, 480.f);//46    -->Easter Egg V V V
	platform(13165.f, 13230.f, 395.f, 405.f);//47
	platform(13295.f, 13360.f, 330.f, 340.f);//48
	platform(13425.f, 13490.f, 265.f, 275.f);//49
	platform(13555.f, 14555.f, 200.f, 600.f);//50
	platform(14505.f, 14555.f, 0.f, 600.f);//51  Di Ent

}

void Level_1_colision()
{
	collision_line first;
	first.collision_points(0.f, 900.f, 400.f);
	compare(first.get_left_x(), first.get_right_x(), first.get_y());

	collision_line second;
	second.collision_points(600.f, 900.f, 280.f);
	compare(second.get_left_x(), second.get_right_x(), second.get_y());

	collision_line third;
	third.collision_points(1000.f, 1100.f, 250.f);
	compare(third.get_left_x(), third.get_right_x(), third.get_y());

	collision_line fourth;
	fourth.collision_points(1150.f, 1350.f, 180.f);
	compare(fourth.get_left_x(), fourth.get_right_x(), fourth.get_y());

	collision_line fifth;
	fifth.collision_points(1350.f, 1650.f, 130.f);
	compare(fifth.get_left_x(), fifth.get_right_x(), fifth.get_y());

	collision_line sixth;
	sixth.collision_points(1750.f, 2250.f, 500.f);
	compare(sixth.get_left_x(), sixth.get_right_x(), sixth.get_y());

	collision_line seventh;
	seventh.collision_points(2350.f, 2400.f, 450.f);
	compare(seventh.get_left_x(), seventh.get_right_x(), seventh.get_y());

	collision_line eighth;
	eighth.collision_points(2500.f, 2550.f, 400.f);
	compare(eighth.get_left_x(), eighth.get_right_x(), eighth.get_y());

	collision_line ninth;
	ninth.collision_points(2650.f, 2700.f, 350.f);
	compare(ninth.get_left_x(), ninth.get_right_x(), ninth.get_y());

	collision_line tenth;
	tenth.collision_points(2750.f, 3650.f, 320.f);
	compare(tenth.get_left_x(), tenth.get_right_x(), tenth.get_y());

	collision_line eleventh;
	eleventh.collision_points(3750.f, 4350.f, 480.f);
	compare(eleventh.get_left_x(), eleventh.get_right_x(), eleventh.get_y());

	collision_line twelveth;
	twelveth.collision_points(4250.f, 4350.f, 380.f);
	compare(twelveth.get_left_x(), twelveth.get_right_x(), twelveth.get_y());

	collision_line thirteenth;
	thirteenth.collision_points(4250.f, 4350.f, 280.f);
	compare(thirteenth.get_left_x(), thirteenth.get_right_x(), thirteenth.get_y());

	collision_line fourteenth;
	fourteenth.collision_points(4250.f, 4350.f, 180.f);
	compare(fourteenth.get_left_x(), fourteenth.get_right_x(), fourteenth.get_y());

	collision_line fifteenth;
	fifteenth.collision_points(4450.f, 5100.f, 180.f);
	compare(fifteenth.get_left_x(), fifteenth.get_right_x(), fifteenth.get_y());

	collision_line sixteenth;
	sixteenth.collision_points(5150.f, 5600.f, 230.f);
	compare(sixteenth.get_left_x(), sixteenth.get_right_x(), sixteenth.get_y());

	collision_line seventeenth;
	seventeenth.collision_points(5650.f, 5900.f, 180.f);
	compare(seventeenth.get_left_x(), seventeenth.get_right_x(), seventeenth.get_y());

	collision_line eighteenth;
	eighteenth.collision_points(5950.f, 6200.f, 120.f);
	compare(eighteenth.get_left_x(), eighteenth.get_right_x(), eighteenth.get_y());

	collision_line nineteenth;
	nineteenth.collision_points(6360.f, 6950.f, 500.f);
	compare(nineteenth.get_left_x(), nineteenth.get_right_x(), nineteenth.get_y());

	collision_line twentyth;
	twentyth.collision_points(6430.f, 6700.f, 300.f);
	compare(twentyth.get_left_x(), twentyth.get_right_x(), twentyth.get_y());

	collision_line twentyoneth;
	twentyoneth.collision_points(6730.f, 6830.f, 300.f);
	compare(twentyoneth.get_left_x(), twentyoneth.get_right_x(), twentyoneth.get_y());

	collision_line twentytwoth;
	twentytwoth.collision_points(6930.f, 7130.f, 300.f);
	compare(twentytwoth.get_left_x(), twentytwoth.get_right_x(), twentytwoth.get_y());

	collision_line twentythreeth;
	twentythreeth.collision_points(7230.f, 7330.f, 300.f);
	compare(twentythreeth.get_left_x(), twentythreeth.get_right_x(), twentythreeth.get_y());

	collision_line twentyfourth;
	twentyfourth.collision_points(7480.f, 7680.f, 300.f);
	compare(twentyfourth.get_left_x(), twentyfourth.get_right_x(), twentyfourth.get_y());

	collision_line twentyfifth;
	twentyfifth.collision_points(7790.f, 7950.f, 300.f);
	compare(twentyfifth.get_left_x(), twentyfifth.get_right_x(), twentyfifth.get_y());

	collision_line twentysixth;
	twentysixth.collision_points(8140.f, 8740.f, 330.f);
	compare(twentysixth.get_left_x(), twentysixth.get_right_x(), twentysixth.get_y());

	collision_line twentyseventh;
	twentyseventh.collision_points(6970.f, 7360.f, 500.f);
	compare(twentyseventh.get_left_x(), twentyseventh.get_right_x(), twentyseventh.get_y());

	collision_line twentyeighth;
	twentyeighth.collision_points(7490.f, 7880.f, 500.f);
	compare(twentyeighth.get_left_x(), twentyeighth.get_right_x(), twentyeighth.get_y());

	collision_line twentynineth;
	twentynineth.collision_points(8010.f, 8290.f, 500.f);
	compare(twentynineth.get_left_x(), twentynineth.get_right_x(), twentynineth.get_y());

	collision_line thirtyth;
	thirtyth.collision_points(8160.f, 8290.f, 390.f);
	compare(thirtyth.get_left_x(), thirtyth.get_right_x(), thirtyth.get_y());

	collision_line p31;
	p31.collision_points(8690.f, 8740.f, 260.f);
	compare(p31.get_left_x(), p31.get_right_x(), p31.get_y());

	collision_line p32;
	p32.collision_points(8800.f, 8850.f, 200.f);
	compare(p32.get_left_x(), p32.get_right_x(), p32.get_y());

	collision_line p33;
	p33.collision_points(8910.f, 8960.f, 140.f);
	compare(p33.get_left_x(), p33.get_right_x(), p33.get_y());

	collision_line p34;
	p34.collision_points(9020.f, 9070.f, 110.f);
	compare(p34.get_left_x(), p34.get_right_x(), p34.get_y());

	collision_line p35;
	p35.collision_points(9130.f, 9530.f, 110.f);
	compare(p35.get_left_x(), p35.get_right_x(), p35.get_y());

	collision_line p36;
	p36.collision_points(9650.f, 9900.f, 110.f);
	compare(p36.get_left_x(), p36.get_right_x(), p36.get_y());

	collision_line p37;
	p37.collision_points(10040.f, 10190.f, 260.f);
	compare(p37.get_left_x(), p37.get_right_x(), p37.get_y());

	collision_line p38;
	p38.collision_points(10260.f, 10410.f, 160.f);
	compare(p38.get_left_x(), p38.get_right_x(), p38.get_y());

	collision_line p39;
	p39.collision_points(10550.f, 10700.f, 310.f);
	compare(p39.get_left_x(), p39.get_right_x(), p39.get_y());

	collision_line p40;
	p40.collision_points(10770.f, 10920.f, 210.f);
	compare(p40.get_left_x(), p40.get_right_x(), p40.get_y());

	collision_line p41;
	p41.collision_points(11060.f, 11210.f, 360.f);
	compare(p41.get_left_x(), p41.get_right_x(), p41.get_y());

	collision_line p42;
	p42.collision_points(11280.f, 11430.f, 260.f);
	compare(p42.get_left_x(), p42.get_right_x(), p42.get_y());

	collision_line p43;
	p43.collision_points(11570.f, 11720.f, 410.f);
	compare(p43.get_left_x(), p43.get_right_x(), p43.get_y());

	collision_line p44;
	p44.collision_points(11790.f, 11940.f, 310.f);
	compare(p44.get_left_x(), p44.get_right_x(), p44.get_y());

	collision_line p45;
	p45.collision_points(12080.f, 12580.f, 460.f);
	compare(p45.get_left_x(), p45.get_right_x(), p45.get_y());

	collision_line p46;
	p46.collision_points(12700.f, 13100.f, 460.f);
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

}

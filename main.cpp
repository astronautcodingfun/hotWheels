#include "SFML/Graphics.hpp"
#include <iostream>

const double PI = 3.141592653589793238462;
int lightray = 110;

int main()
{
	sf::RenderWindow window(sf::VideoMode(1100, 1000), "Car - Street Scenario");
	window.setFramerateLimit(100);

	sf::Image icon;
	icon.loadFromFile("blueIco.png");
	window.setIcon(1312,460, icon.getPixelsPtr());

	sf::VertexArray quad(sf::Quads, 4);

	quad[0].position = sf::Vector2f(50, 200);
	quad[0].color = sf::Color::Blue;

	quad[1].position = sf::Vector2f(240, 200);
	quad[1].color = sf::Color::Red;

	quad[2].position = sf::Vector2f(240, 280);
	quad[2].color = sf::Color::Cyan;

	quad[3].position = sf::Vector2f(50, 280);
	quad[3].color = sf::Color::White;

	sf::VertexArray quad2(sf::Quads, 4);

	quad2[0].position = sf::Vector2f(50, 200);
	quad2[0].color = sf::Color::Green;

	quad2[1].position = sf::Vector2f(240, 200);
	quad2[1].color = sf::Color::Blue;

	quad2[2].position = sf::Vector2f(240, 280);
	quad2[2].color = sf::Color::Red;

	quad2[3].position = sf::Vector2f(50, 280);
	quad2[3].color = sf::Color::Cyan;

	sf::RectangleShape r;
	r.setSize(sf::Vector2f(30, 400));
	r.setPosition(-130, 250);
	r.setFillColor(sf::Color(40, 40, 40));

	sf::RectangleShape r2;
	r2.setSize(sf::Vector2f(70, 30));
	r2.setPosition(-150, 250);
	r2.setFillColor(sf::Color(40, 40, 40));

	sf::RectangleShape r3;
	r3.setSize(sf::Vector2f(30, 400));
	r3.setPosition(530, 250);
	r3.setFillColor(sf::Color(40, 40, 40));

	sf::RectangleShape r4;
	r4.setSize(sf::Vector2f(70, 30));
	r4.setPosition(510, 250);
	r4.setFillColor(sf::Color(40, 40, 40));

	sf::RectangleShape r5;
	r5.setSize(sf::Vector2f(30, 400));
	r5.setPosition(1310, 250);
	r5.setFillColor(sf::Color(40, 40, 40));

	sf::RectangleShape r6;
	r6.setSize(sf::Vector2f(70, 30));
	r6.setPosition(1290, 250);
	r6.setFillColor(sf::Color(40, 40, 40));

	sf::VertexArray quad3(sf::Quads, 4);
	quad3[0].position = sf::Vector2f(-130, 280);
	quad3[0].color = sf::Color::White;

	quad3[1].position = sf::Vector2f(-100, 280);
	quad3[1].color = sf::Color::White;

	quad3[2].position = sf::Vector2f(0, 380);
	quad3[2].color = sf::Color::Transparent;

	quad3[3].position = sf::Vector2f(-230, 380);
	quad3[3].color = sf::Color::Transparent;

	sf::VertexArray quad4(sf::Quads, 4);
	quad4[0].position = sf::Vector2f(520, 280);
	quad4[0].color = sf::Color::White;

	quad4[1].position = sf::Vector2f(570, 280);
	quad4[1].color = sf::Color::White;

	quad4[2].position = sf::Vector2f(670, 380);
	quad4[2].color = sf::Color::Transparent;

	quad4[3].position = sf::Vector2f(420, 380);
	quad4[3].color = sf::Color::Transparent;

	sf::VertexArray quad5(sf::Quads, 4);
	quad5[0].position = sf::Vector2f(1300, 280);
	quad5[0].color = sf::Color::White;

	quad5[1].position = sf::Vector2f(1350, 280);
	quad5[1].color = sf::Color::White;

	quad5[2].position = sf::Vector2f(1450, 380);
	quad5[2].color = sf::Color::Transparent;

	quad5[3].position = sf::Vector2f(1200, 380);
	quad5[3].color = sf::Color::Transparent;

	sf::VertexArray quad6(sf::Quads, 4);
	quad6[0].position = sf::Vector2f(1500, 400);
	quad6[0].color = sf::Color(126, 126, 126);

	quad6[1].position = sf::Vector2f(1700, 400);
	quad6[1].color = sf::Color::Transparent;

	quad6[2].position = sf::Vector2f(1700, 600);
	quad6[2].color = sf::Color::Transparent;

	quad6[3].position = sf::Vector2f(1500, 600);
	quad6[3].color = sf::Color::Transparent;

	sf::VertexArray quad7(sf::Quads, 4);
	quad7[0].position = sf::Vector2f(780, 470);
	quad7[0].color = sf::Color(255, 159, 0);

	quad7[1].position = sf::Vector2f(800, 470);
	quad7[1].color = sf::Color(255, 159, 0);

	quad7[2].position = sf::Vector2f(830, 510);
	quad7[2].color = sf::Color::Transparent;

	quad7[3].position = sf::Vector2f(750, 510);
	quad7[3].color = sf::Color::Transparent;

	sf::RectangleShape abovedoor;
	abovedoor.setPosition(700, 450);
	abovedoor.setSize(sf::Vector2f(180, 20));
	abovedoor.setFillColor(sf::Color(126, 126, 126));

	sf::RectangleShape insideShadow;
	insideShadow.setPosition(650, 380);
	insideShadow.setSize(sf::Vector2f(290, 70));
	insideShadow.setFillColor(sf::Color::Black);

	sf::VertexArray quad8(sf::Quads, 4);
	quad8[0].position = sf::Vector2f(1300, 280);
	quad8[0].color = sf::Color::White;

	quad8[1].position = sf::Vector2f(1350, 280);
	quad8[1].color = sf::Color::White;

	quad8[2].position = sf::Vector2f(1450, 380);
	quad8[2].color = sf::Color::Transparent;

	quad8[3].position = sf::Vector2f(1200, 380);
	quad8[3].color = sf::Color::Transparent;

	sf::Texture t1, t2, t3, t4, t5, t6, t7, t8;
	t1.loadFromFile("bricks4.png");
	t2.loadFromFile("neon3Transparent.png");
	t3.loadFromFile("bricks6.png");
	t4.loadFromFile("2.png");
	t5.loadFromFile("bricks5Transparent.png");
	t6.loadFromFile("6.png");
	t7.loadFromFile("ClubTransparent.png");
	t8.loadFromFile("blueTransparent.png");

	sf::Sprite sBricks(t1), sNeon(t2), sTree(t4), sTree2(t4), sTree3(t4), sTree4(t4), sSmallwall(t5), sBush(t6), sClub(t7);

	sClub.setPosition(sf::Vector2f(600, 118));

	//light inside Club
	sf::VertexArray light(sf::TriangleFan, 8);

	light[0].position = sf::Vector2f(700, 200);
	light[0].color = sf::Color::Magenta;

	for (int k = 1; k < 7; k++)
	{
		float angle = 2 * PI / 6 * (k + 0.5);
		light[k].position = sf::Vector2f(
			light[0].position.x + lightray * cos(angle),
			light[0].position.y + lightray * sin(angle));
		light[k].color = sf::Color::Transparent;
	}

	light[7].position = light[1].position;
	light[7].color = sf::Color::Transparent;

	sf::VertexArray light2(sf::TriangleFan, 8);

	light2[0].position = sf::Vector2f(700, 200);
	light2[0].color = sf::Color::Red;

	for (int k = 1; k < 7; k++)
	{
		float angle = 2 * PI / 6 * (k + 0.5);
		light2[k].position = sf::Vector2f(
			light2[0].position.x + lightray * cos(angle),
			light2[0].position.y + lightray * sin(angle));
		light2[k].color = sf::Color::Transparent;
	}

	light2[7].position = light2[1].position;
	light2[7].color = sf::Color::Transparent;

	sf::VertexArray light3(sf::TriangleFan, 8);

	light3[0].position = sf::Vector2f(840, 200);
	light3[0].color = sf::Color::Green;

	for (int k = 1; k < 7; k++)
	{
		float angle = 2 * PI / 6 * (k + 0.5);
		light3[k].position = sf::Vector2f(
			light3[0].position.x + lightray * cos(angle),
			light3[0].position.y + lightray * sin(angle));
		light3[k].color = sf::Color::Transparent;
	}

	light3[7].position = light3[1].position;
	light3[7].color = sf::Color::Transparent;

	sf::VertexArray light4(sf::TriangleFan, 8);

	light4[0].position = sf::Vector2f(840, 200);
	light4[0].color = sf::Color::Blue;

	for (int k = 1; k < 7; k++)
	{
		float angle = 2 * PI / 6 * (k + 0.5);
		light4[k].position = sf::Vector2f(
			light4[0].position.x + lightray * cos(angle),
			light4[0].position.y + lightray * sin(angle));
		light4[k].color = sf::Color::Transparent;
	}

	light4[7].position = light4[1].position;
	light4[7].color = sf::Color::Transparent;

	sSmallwall.setTextureRect(sf::IntRect(0, 0, 300, 100));
	sSmallwall.setPosition(-500, 550);

	t1.setRepeated(true);
	sBricks.setTextureRect(sf::IntRect(0, 0, 1200, 360));
	sBricks.setPosition(sf::Vector2f(0, 300));

	sNeon.setPosition(50, 200);
	sNeon.setScale(0.5, 0.7);

	//neon support
	sf::RectangleShape rect1, rect2;
	rect1.setSize(sf::Vector2f(10, 45));
	rect1.setPosition(90, 276);
	rect1.setFillColor(sf::Color(126, 126, 126));
	rect2.setSize(sf::Vector2f(10, 45));
	rect2.setPosition(200, 276);
	rect2.setFillColor(sf::Color(126, 126, 126));

	//wall line
	sf::RectangleShape wall;
	wall.setSize(sf::Vector2f(600, 5));
	wall.setPosition(sf::Vector2f(0, 320));
	wall.setFillColor(sf::Color(126, 126, 126));

	//sidewalk lines
	sf::RectangleShape street;
	street.setSize(sf::Vector2f(3500, 10));
	street.setPosition(sf::Vector2f(-500, 650));

	sf::RectangleShape street2;
	street2.setSize(sf::Vector2f(3500, 10));
	street2.setPosition(sf::Vector2f(-500, 850));

	sTree.setPosition(sf::Vector2f(-450, 400));
	sTree.setScale(0.5, 0.5);
	sTree2.setPosition(200, 400);
	sTree2.setScale(0.5, 0.5);
	sTree3.setPosition(1000, 400);
	sTree3.setScale(0.5, 0.5);
	sTree4.setPosition(1700, 400);
	sTree4.setScale(0.5, 0.5);

	sBush.setPosition(1520, 527);
	sBush.setScale(0.25, 0.25);

	sf::RectangleShape baseBush;
	baseBush.setSize(sf::Vector2f(60, 30));
	baseBush.setFillColor(sf::Color::Black);
	baseBush.setOutlineThickness(10);
	baseBush.setOutlineColor(sf::Color(126, 126, 126));
	baseBush.setPosition(1570, 610);

	sf::RectangleShape win;
	win.setSize(sf::Vector2f(100, 70));
	win.setPosition(1150, 510);
	win.setFillColor(sf::Color::Black);
	win.setOutlineThickness(10);
	win.setOutlineColor(sf::Color::Red);

	sf::RectangleShape win2;
	win2.setSize(sf::Vector2f(200, 200));
	win2.setPosition(1500, 400);
	win2.setFillColor(sf::Color::Black);
	win2.setOutlineThickness(10);
	win2.setOutlineColor(sf::Color::Red);

	sf::Sprite bricks[1000];

	float currentFrame = 0;
	sf::IntRect rectcar(0, 0, 1300, 445);
	sf::Sprite sCar(t8, rectcar);
	sCar.setPosition(-1000, 600);
	sCar.setScale(0.3, 0.3);


	int n = 0;
	for (int i = 1; i <= 4; i++)
		for (int j = 1; j <= 7; j++)
		{
			bricks[n].setTextureRect(sf::IntRect(0, 0, 65, 65));
			bricks[n].setTexture(t3);
			bricks[n].setPosition(1015 + i * 65, 130 + j * 65);
			n++;
		}

	sf::Sprite bricks2[1000];
	for (int i = 1; i <= 12; i++)
		for (int j = 1; j <= 8; j++)
		{
			bricks2[n].setTextureRect(sf::IntRect(130, 0, 65, 65));
			bricks2[n].setTexture(t3);
			bricks2[n].setPosition(1280 + i * 65, 65 + j * 65);
			n++;
		}
	sf::Sprite bricks3[1000];
	for (int i = 1; i <= 2; i++)
		for (int j = 1; j <= 1; j++)
		{
			bricks3[n].setTextureRect(sf::IntRect(0, 65, 65, 65));
			bricks3[n].setTexture(t3);
			bricks3[n].setPosition(390 + i * 65 * 3.7, 520 + j * 65);
			n++;
		}
	sf::Sprite sBush2(t6), sBush3(t6);

	sBush2.setPosition(600, 527);
	sBush2.setScale(0.2, 0.2);
	sBush3.setPosition(840, 527);
	sBush3.setScale(0.2, 0.2);

	sf::View view(sf::FloatRect(0, 0, 1100, 950));

	//stars
	const int M = 300;
	sf::RectangleShape star[M];
	for (int i = 0; i < M; i++)
	{
		star[i].setPosition(sf::Vector2f(-500 + rand() % 3000, rand() % 300));
		star[i].setFillColor(sf::Color::White);
		star[i].setSize(sf::Vector2f(1.0f, 1.0f));
	}

	sf::Clock clock;

	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();

				break;

			}
		}

		if (!(view.getCenter().x > 1500)) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				view.move(1, 0);
		}

		if (!(view.getCenter().x < 100)) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				view.move(-1, 0);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			sCar.move(1, 0);

			currentFrame += 0.05;
			if (currentFrame > 2) currentFrame -= 2;

			sCar.setTextureRect(sf::IntRect(0, 489 * int(currentFrame), 1300, 465));
		}

		if (sCar.getPosition().x > -250)
			view.setCenter(sCar.getPosition().x + 350, 474);


		if (sCar.getPosition().x > 1450)
			view.setCenter(1800, 474);

		window.clear();
		window.setView(view);
		for (int i = 0; i < M; i++)
			window.draw(star[i]);
		window.draw(quad);
		window.draw(light);
		window.draw(light4);
		if (clock.getElapsedTime().asSeconds() > 0.50f) {
			window.draw(light2);
			window.draw(light3);
		}
		if (clock.getElapsedTime().asSeconds() > 1.0f) {
			window.draw(quad2);
			window.draw(light);
			window.draw(light4);
		}
		if (clock.getElapsedTime().asSeconds() > 1.5f) {
			window.draw(light2);
			window.draw(light3);
		}
		if (clock.getElapsedTime().asSeconds() > 2) {
			clock.restart();
		}
		window.draw(sBricks);
		window.draw(street);
		window.draw(street2);
		window.draw(sNeon);
		window.draw(rect1);
		window.draw(rect2);
		window.draw(wall);
		window.draw(insideShadow);
		window.draw(sClub);
		for (int i = 0; i < n; i++)
			window.draw(bricks[i]);
		for (int i = 0; i < n; i++)
			window.draw(bricks2[i]);
		for (int i = 0; i < n; i++)
			window.draw(bricks3[i]);
		window.draw(sBush2);
		window.draw(sBush3);
		window.draw(win);
		window.draw(win2);
		window.draw(r);
		window.draw(sSmallwall);
		window.draw(r2);
		window.draw(r3);
		window.draw(r4);
		window.draw(r5);
		window.draw(r6);
		window.draw(quad3);
		window.draw(quad4);
		window.draw(quad5);
		window.draw(quad6);
		window.draw(quad7);
		window.draw(abovedoor);
		window.draw(baseBush);
		window.draw(sBush);
		window.draw(sCar);
		window.draw(sTree);
		window.draw(sTree2);
		window.draw(sTree3);
		window.draw(sTree4);
		window.display();
	}
}
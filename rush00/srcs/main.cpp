/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 11:01:12 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 21:29:39 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <unistd.h>
#include "Screen.hpp"
#include "PlayerShip.hpp"
#include "EntityList.hpp"
#include "Bullet.hpp"
#include "EnemyBullet.hpp"
#include "EnemyShip.hpp"
#include "Asteroid.hpp"

extern int	global_score;

void	printInfo(int nframe, int hp) {

	mvprintw(1, 2, "Frame: %d", nframe);
	mvprintw(1, (COLS / 1.5), "Score: %d", global_score);
	mvprintw(LINES - 2, (COLS/1.5) - 3, "HP: %d", hp);
}

void	printGameOver() {

	attron(COLOR_PAIR(1));
	attron(A_BOLD);
	mvprintw((LINES/2) - 1, (COLS/2) - 5, "GAME OVER");
	attroff(A_BOLD);
	attroff(COLOR_PAIR(1));

	attron(COLOR_PAIR(1));
	attron(A_BOLD);
	mvprintw((LINES/2) + 1, (COLS/2) - 10, "Press <esc> to exit");
	attroff(A_BOLD);
	attroff(COLOR_PAIR(1));
}

int	 clockToUseconds(clock_t ticks){
    return (ticks * 1000000)/CLOCKS_PER_SEC;
}

void	gameStart() {

	PlayerShip	p1;
	EntityList	list;
	clock_t		time_start = 0;
	int			time_left = 0;
	int			nframe = 0;
	int			ch;
	int enemy_rand = 0;

	while (42) {
		nframe++;

		time_left = 33333 - (clockToUseconds(clock()) - clockToUseconds(time_start));
 		if (time_left > 0)
			usleep(time_left);
 		time_start = clock();
		ch = getch();
		clear();
		// box(stdscr, ACS_VLINE, ACS_HLINE);
		printInfo(nframe, p1.hp);

		if (p1.hp <= 0)
			printGameOver();
		else {
			p1.move(ch);
			if(!(nframe % 60)) {
				enemy_rand = rand() % LINES;
				list.push(new EnemyShip(enemy_rand, COLS - 4));
				list.push(new EnemyBullet(enemy_rand, COLS - 6));
			}
			if(!(nframe % 15)) {
				list.push(new Asteroid(rand() % LINES, COLS - 4));
			}
			if (ch == ' ' && !(nframe % 2)) {
				list.push(new Bullet(p1.row, p1.col));
			}
			p1.draw();
		}

		if (ch == 27)
			break;
		list.move(nframe);
		list.draw();
		list.check_collisions(&p1);
		list.border_colision();
	}
}

int		main() {

	Screen	scr;

	scr.startMenu();
	if (getch() != 27) {
		clear();
		nodelay(stdscr, TRUE);
		gameStart();
	}

	return 0;
}

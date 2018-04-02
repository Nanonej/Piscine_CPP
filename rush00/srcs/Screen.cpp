/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Screen.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aridolfi <aridolfi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 10:14:45 by aridolfi          #+#    #+#             */
/*   Updated: 2018/04/01 20:38:16 by aridolfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Screen.hpp"

// ------------------------- CONSTRUCTOR / DESTRUCTOR --------------------------

Screen::Screen() {

	setlocale(LC_ALL, "");
	initscr(); // Initialization
	cbreak(); // Catch input one by one
	clear(); // Clear screen
	noecho(); // User input suppressed
	raw(); // Catch signals
	keypad(stdscr, TRUE); // Catch special keystroke
	curs_set(0); // Hide cursor
	start_color();
	init_pair(1, COLOR_RED, COLOR_BLACK);
	init_pair(2, COLOR_YELLOW, COLOR_BLACK);
}

Screen::Screen(Screen const & src) {

	*this = src;
}

Screen::~Screen() {
	endwin(); // Restore terminal settings
}

// ---------------------------- OPPERATOR OVERLOAD -----------------------------

Screen &	Screen::operator=(Screen const & rhs) {

	(void)rhs;
	return *this;
}

// ------------------------------ MEMBER FUNCTION ------------------------------

void	Screen::startMenu() {

	std::string	wlc = "Welcome in ft_retro game !";
	std::string	key = "Press any key to start and press <esc> to exit the game";

	box(stdscr, ACS_VLINE, ACS_HLINE);
	mvprintw(LINES/4, (COLS / 2) - (wlc.length() / 2), wlc.c_str());
	mvprintw((LINES/4) + 4, (COLS / 2) - (key.length() / 2), key.c_str());
	nodelay(stdscr, FALSE);
	refresh();
}

// -----------------------------------------------------------------------------

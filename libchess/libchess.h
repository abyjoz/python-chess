#ifndef LIBCHESS_LIBCHESS_H
#define LIBCHESS_LIBCHESS_H

#include "piece.h"
#include "square.h"
#include "move.h"
#include "move_info.h"
#include "attacker_generator.h"
#include "legal_move_generator.h"
#include "pseudo_legal_move_generator.h"
#include "position.h"

namespace chess {

    char opposite_color(char color);

}

#endif

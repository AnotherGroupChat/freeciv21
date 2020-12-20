/*__            ___                 ***************************************
/   \          /   \          Copyright (c) 1996-2020 Freeciv21 and Freeciv
\_   \        /  __/          contributors. This file is part of Freeciv21.
 _\   \      /  /__     Freeciv21 is free software: you can redistribute it
 \___  \____/   __/    and/or modify it under the terms of the GNU  General
     \_       _/          Public License  as published by the Free Software
       | @ @  \_               Foundation, either version 3 of the  License,
       |                              or (at your option) any later version.
     _/     /\                  You should have received  a copy of the GNU
    /o)  (o/\ \_                General Public License along with Freeciv21.
    \_____/ /                     If not, see https://www.gnu.org/licenses/.
      \____/        ********************************************************/
#ifndef FC__UNIV_VALUE_H
#define FC__UNIV_VALUE_H

typedef void (*univ_kind_values_cb)(const char *value, bool current,
                                    void *data);

bool universal_value_initial(struct universal *src);
void universal_kind_values(struct universal *univ, univ_kind_values_cb cb,
                           void *data);

#endif /* FC__UNIV_VALUE_H */

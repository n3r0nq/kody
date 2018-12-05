#!/usr/bin/env python
# -*- coding: utf-8 -*-
# models.py
from peewee import *

baza = SqliteDatabase('quiz.db')


class BaseModel(Model):
    class Meta:
        database = baza


class Pytanie(BaseModel):
    pytanie = CharField()
    odp_ok = CharField()


class Odpowiedz(BaseModel):
    pnr = ForeignKeyField(Pytanie, related_name='odpowiedzi')
    odpowiedz = CharField()


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

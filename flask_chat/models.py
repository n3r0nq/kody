#!/usr/bin/env python
# -*- coding: utf-8 -*-
# models.py
from peewee import *

baza_plik = "quiz.db"
baza = SqliteDatabase('quiz.db')


class BaseModel(Model):
    class Meta:
        database = baza


class Kategoria(BaseModel):
    kategoria = CharField(null=False)


class Pytanie(BaseModel):
    pytanie = CharField(null=False)
    kategoria = ForeignKeyField(Kategoria, related_name='pytania')


class Odpowiedz(BaseModel):
    odpowiedz = CharField(null=False)
    pytanie = ForeignKeyField(Pytanie, related_name='odpowiedzi')
    odpok = BooleanField()

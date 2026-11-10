/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027fdc4; name: FUN_.text__0027fdc4
 */


byte FUN__text__0027fdc4(long param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  if (*(char *)(param_1 + 0xe38) != '\0') {
    FUN__text__003d01d0();
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe08));
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe10));
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe18));
    FUN__text__003d56f4(*(undefined8 *)(param_1 + 0xe20));
    FUN__text__003d0e20(*(undefined8 *)(param_1 + 0xe28));
    FUN__text__003d0e20(*(undefined8 *)(param_1 + 0xe30));
    *(undefined1 *)(param_1 + 0xe38) = 0;
    lVar9 = FUN__text__00321ac0();
    memset((void *)(lVar9 + 0x7a87c),0,2000);
    return 0;
  }
  bVar2 = FUN__text__003d0288(*(undefined8 *)(param_1 + 0xe00));
  bVar3 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe08));
  bVar4 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe10));
  bVar5 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe18));
  bVar6 = FUN__text__003d5744(*(undefined8 *)(param_1 + 0xe20));
  iVar7 = FUN__text__003d0e70(*(undefined8 *)(param_1 + 0xe28));
  iVar8 = FUN__text__003d0e70(*(undefined8 *)(param_1 + 0xe30));
  bVar1 = 0;
  if (iVar8 == 1) {
    bVar1 = bVar2 & bVar3 & bVar4 & bVar5 & bVar6 & iVar7 == 1;
  }
  return bVar1;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00410910; name: FUN_.text__00410910
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00410910(int param_1,int param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  long lVar6;
  
  if ((param_1 == 0) && (param_2 - 0xaeU < 7)) {
    iVar3 = FUN__text__00405f90(param_2,param_3,param_4);
    if (iVar3 == 1) {
      return 1;
    }
    goto LAB__text__00410970;
  }
  if ((param_1 == 0) && (param_2 == 0xb5)) {
    iVar3 = 0;
    goto LAB__text__00410970;
  }
  uVar2 = param_2 * 0x10000 + param_1 * 0x10 | 7;
  puVar4 = (uint *)*_DAT_008a47c0;
  uVar1 = *(uint *)(_DAT_008a47c0 + 1);
  puVar5 = puVar4;
  if (uVar1 == 0) {
LAB__text__004109d0:
    if (puVar5 == puVar4 + (ulong)uVar1 * 8) goto LAB__text__004109dc;
  }
  else {
    lVar6 = (ulong)uVar1 << 5;
    do {
      if (*puVar5 == uVar2) goto LAB__text__004109d0;
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
LAB__text__004109dc:
    puVar5 = DAT_00aea5d8;
    if (DAT_00aea5e0 != 0) {
      lVar6 = (ulong)DAT_00aea5e0 * 0x28;
      iVar3 = 0x58;
      do {
        if (*puVar5 == uVar2) goto LAB__text__00410a20;
        puVar5 = puVar5 + 10;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
      goto LAB__text__00410970;
    }
LAB__text__00410a20:
    if (puVar5 == DAT_00aea5d8 + (ulong)DAT_00aea5e0 * 10) goto LAB__text__00410a5c;
  }
  lVar6 = FUN__text__00425ef0();
  if (lVar6 == 0) {
LAB__text__00410a5c:
    *param_3 = 0;
    return 0x58;
  }
  iVar3 = 0;
  if ((*(code **)(lVar6 + 0x10) != (code *)0x0) &&
     (iVar3 = (**(code **)(lVar6 + 0x10))(param_3,param_4), iVar3 == 1)) {
    return 1;
  }
LAB__text__00410970:
  *param_3 = 0;
  return iVar3;
}



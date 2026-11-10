/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c52e0; name: FUN_.text__004c52e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004c52e0(int param_1,long param_2,uint param_3,int param_4,int param_5,long param_6,
                   int param_7,byte param_8)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  puVar2 = _DAT_008a4780;
  iVar1 = param_4 * 0x10 + (param_3 & 0xff) + param_5 * 0x10000;
  piVar4 = (int *)*_DAT_008a4780;
  uVar6 = *(uint *)(_DAT_008a4780 + 1);
  uVar7 = (ulong)uVar6;
  piVar3 = piVar4;
  if (uVar6 == 0) {
LAB__text__004c5380:
    if (piVar3 != piVar4 + uVar7 * 10) {
      if ((char)piVar3[9] != '\0') {
        FUN__text__00400fc0(5,*(undefined8 *)(piVar3 + 6));
      }
      if (param_6 != 0) {
        *(long *)(piVar3 + 6) = param_6;
        piVar3[8] = param_7;
        *(byte *)(piVar3 + 9) = param_8 & 1;
        return 1;
      }
      piVar4 = (int *)*puVar2;
      uVar6 = *(uint *)(puVar2 + 1);
      piVar3 = piVar4;
      if (uVar6 != 0) {
        lVar5 = (ulong)uVar6 * 0x28;
        while (((*piVar3 != param_1 || (piVar3[4] != iVar1)) || (*(long *)(piVar3 + 2) != param_2)))
        {
          piVar3 = piVar3 + 10;
          lVar5 = lVar5 + -0x28;
          if (lVar5 == 0) {
            return 1;
          }
        }
      }
      if (piVar3 == piVar4 + (ulong)uVar6 * 10) {
        return 1;
      }
      uVar6 = uVar6 - 1;
      if (piVar3 < piVar4 + (ulong)uVar6 * 10) {
        memmove(piVar3,piVar3 + 10,(ulong)(uint)((int)(piVar4 + (ulong)uVar6 * 10) - (int)piVar3));
        uVar6 = *(int *)(puVar2 + 1) - 1;
      }
      *(uint *)(puVar2 + 1) = uVar6;
      return 1;
    }
  }
  else {
    lVar5 = uVar7 * 0x28;
    do {
      if (((*piVar3 == param_1) && (piVar3[4] == iVar1)) && (*(long *)(piVar3 + 2) == param_2))
      goto LAB__text__004c5380;
      piVar3 = piVar3 + 10;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if (param_6 == 0) {
    return 1;
  }
  piVar3 = piVar4;
  if (uVar6 == 0) {
LAB__text__004c5400:
    if (piVar3 != piVar4 + uVar7 * 10) goto LAB__text__004c5464;
  }
  else {
    lVar5 = uVar7 * 0x28;
    do {
      if (((*piVar3 == param_1) && (piVar3[4] == iVar1)) && (*(long *)(piVar3 + 2) == param_2))
      goto LAB__text__004c5400;
      piVar3 = piVar3 + 10;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if (*(uint *)((long)_DAT_008a4780 + 0xc) <= uVar6) {
    uVar7 = FUN__text__004c56d0(_DAT_008a4780);
    if (((uVar7 & 1) == 0) || (*(uint *)((long)puVar2 + 0xc) <= uVar6)) goto LAB__text__004c5478;
    uVar6 = *(uint *)(puVar2 + 1);
    piVar4 = (int *)*puVar2;
  }
  *(uint *)(puVar2 + 1) = uVar6 + 1;
  if (piVar4 != (int *)0x0) {
    piVar3 = piVar4 + (ulong)uVar6 * 10;
    *piVar3 = param_1;
    *(long *)(piVar3 + 2) = param_2;
    piVar3[4] = iVar1;
LAB__text__004c5464:
    *(long *)(piVar3 + 6) = param_6;
    piVar3[8] = param_7;
    *(byte *)(piVar3 + 9) = param_8 & 1;
    return 1;
  }
LAB__text__004c5478:
  if ((param_8 & 1) != 0) {
    FUN__text__00400fc0(5,param_6);
  }
  return 0x34;
}



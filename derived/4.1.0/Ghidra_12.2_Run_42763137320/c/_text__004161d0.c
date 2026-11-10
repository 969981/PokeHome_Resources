/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004161d0; name: FUN_.text__004161d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004161d0(long *param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *param_1;
  if ((*(int *)(lVar8 + 800) != 0) && (DAT_00aea238 != 0)) {
    lVar7 = (ulong)DAT_00aea238 << 3;
    plVar6 = DAT_00aea230;
    do {
      lVar4 = *plVar6;
      lVar1 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        lVar1 = *(long *)(lVar4 + 8) + -0x18;
      }
      if ((*(int *)(lVar1 + 800) == *(int *)(lVar8 + 800)) && (*(long *)(lVar4 + 0xe8) == 0)) {
        FUN__text__00450ed0(lVar4,lVar8,0);
        FUN__text__00475aac(lVar8);
        return 5;
      }
      plVar6 = plVar6 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  lVar7 = FUN__text__00400f80(5,0x160);
  if (lVar7 == 0) {
    FUN__text__00475a44(lVar8,1);
    return 2;
  }
  FUN__text__0044dea8();
  uVar3 = FUN__text__00450ed0(lVar7,lVar8,1);
  plVar6 = _DAT_008a48f0;
  if (uVar3 == 1) {
    uVar5 = FUN__text__00415c70(lVar7);
    *(ushort *)((long)param_1 + 0xc) =
         *(ushort *)((long)param_1 + 0xc) & 0xfeff | (ushort)((int)uVar5 == 1) << 8;
    return uVar5;
  }
  if (uVar3 != 0x3f) {
    FUN__text__004061f0(lVar7,uVar3 != 3);
    return (ulong)uVar3;
  }
  *(undefined8 *)(lVar7 + 0x68) = 0;
  lVar8 = *plVar6;
  *plVar6 = lVar7;
  plVar2 = plVar6 + 1;
  if (plVar6[1] != 0) {
    plVar2 = (long *)(lVar8 + 0x68);
  }
  *plVar2 = lVar7;
  return 1;
}



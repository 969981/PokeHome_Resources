/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00164dd0; name: FUN_.text__00164dd0
 */


void FUN__text__00164dd0(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  ulong uVar9;
  
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_3 * 0x18);
  if (((param_4 & 0xffff) != 0) && (iVar1 = FUN__text__005f324c(uVar7), iVar1 != 0)) {
    iVar1 = FUN__text__0016a530();
    lVar2 = FUN__text__005f3244(uVar7);
    puVar8 = (ushort *)(lVar2 + -2);
    puVar5 = puVar8;
    do {
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = (uint)*puVar8;
    } while ((uVar6 != 0 && 8 < uVar6 - 0x30) && (uVar6 == 0 || uVar6 - 0x30 != 9));
    lVar2 = 4;
    if (iVar1 == 6) {
      lVar2 = 5;
    }
    uVar3 = FUN__text__005f324c(uVar7);
    lVar4 = FUN__text__005f3244(uVar7);
    uVar9 = (long)puVar5 - lVar4 >> 1;
    lVar4 = (uVar3 & 0xffffffff) - uVar9;
    if (lVar2 <= lVar4) {
      for (puVar5 = (ushort *)FUN__text__005f3244(uVar7); puVar5 < puVar8; puVar5 = puVar5 + 1) {
        if (*puVar5 == 0x10) {
          return;
        }
        FUN__text__005f335c(param_2);
      }
      if (0 < lVar4) {
        uVar3 = ~uVar9 + (uVar3 & 0xffffffff);
        do {
          if (*puVar5 == 0x10) {
            return;
          }
          FUN__text__005f335c(param_2);
          if ((uVar3 != 0) && ((uVar3 / 3) * 3 == uVar3)) {
            FUN__text__005f335c(param_2,param_4);
          }
          uVar9 = uVar3 + 1;
          puVar5 = puVar5 + 1;
          uVar3 = uVar3 - 1;
        } while (1 < uVar9);
      }
      return;
    }
  }
  FUN__text__005f3304(param_2,uVar7);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fe9f0; name: FUN_.text__004fe9f0
 */


undefined8 FUN__text__004fe9f0(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  uVar5 = *(uint *)((long)param_1 + 0xc);
  iVar1 = uVar5 + (uVar5 >> 1);
  if (uVar5 == 0) {
    iVar1 = 1;
  }
  if (*param_1 == 0) {
    uVar6 = *(uint *)(param_1 + 1);
    lVar7 = FUN__text__00400f80(0,(ulong)(iVar1 + uVar5) << 4);
    if (lVar7 != 0) {
      lVar8 = *param_1;
      if ((lVar8 != 0) && (lVar8 != lVar7)) {
        if (uVar6 != 0) {
          lVar8 = 0;
          do {
            puVar2 = (undefined8 *)(lVar7 + lVar8);
            puVar2[1] = 0;
            puVar3 = (undefined8 *)(*param_1 + lVar8);
            lVar8 = lVar8 + 0x10;
            uVar4 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar4;
          } while ((ulong)uVar6 * 0x10 != lVar8);
          lVar8 = *param_1;
        }
        FUN__text__00400fc0(0,lVar8);
      }
      goto LAB__text__004feab0;
    }
  }
  else {
    lVar7 = FUN__text__00400fa0(0);
    if (lVar7 != 0) {
LAB__text__004feab0:
      *param_1 = lVar7;
      *(uint *)((long)param_1 + 0xc) = iVar1 + uVar5;
      return 1;
    }
  }
  return 0;
}



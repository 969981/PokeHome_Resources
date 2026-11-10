/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004356c0; name: FUN_.text__004356c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004356c0(undefined8 param_1,ulong param_2,ulong param_3,long param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined4 auStack_230 [128];
  
  lVar3 = -((ulong)param_5 * 0xc + 0xf & 0x1ffffffff0);
  if (param_5 != 0) {
    uVar6 = (ulong)param_5;
    puVar9 = (undefined4 *)((long)auStack_230 + lVar3 + 0x208);
    puVar7 = (undefined4 *)(param_4 + 4);
    do {
      uVar6 = uVar6 - 1;
      puVar9[-2] = puVar7[-1];
      puVar9[-1] = *puVar7;
      *puVar9 = 9;
      puVar9 = puVar9 + 3;
      puVar7 = puVar7 + 3;
    } while (uVar6 != 0);
  }
  uVar4 = 0x1f;
  if (((((param_2 & 0xff00000000) != 0x800000000) && ((param_2 & 0xffffffff) != 0)) &&
      ((param_3 & 0xff00000000) != 0x800000000)) && ((param_3 & 0xffffffff) != 0)) {
    uVar6 = param_3 >> 0x20 & 0xff;
    plVar8 = (long *)(*_DAT_008a45f0 + uVar6 * 0x18);
    uVar1 = *(uint *)(plVar8 + 1);
    if (uVar1 == 0) {
LAB__text__004357a8:
      plVar8 = (long *)FUN__text__00434fac(*_DAT_008a45f0,
                                           param_3 & 0xffffff0000000000 |
                                           param_3 & 0xffffffff | uVar6 << 0x20);
      if (plVar8 == (long *)0x0) {
        return 0x34;
      }
    }
    else {
      uVar2 = 0;
      uVar5 = (uint)param_3;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      plVar8 = (long *)(*plVar8 + (ulong)(uVar5 - uVar2 * uVar1) * 8);
      do {
        plVar8 = (long *)*plVar8;
        if (plVar8 == (long *)0x0) goto LAB__text__004357a8;
      } while (*(uint *)(plVar8 + 1) != uVar5);
    }
    uVar4 = FUN__text__00437ed8(param_2,plVar8,(long)auStack_230 + lVar3 + 0x200,param_5);
    FUN__text__00437660(plVar8,uVar4);
    uVar4 = 1;
  }
  return uVar4;
}



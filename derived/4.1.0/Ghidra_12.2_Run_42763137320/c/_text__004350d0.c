/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004350d0; name: FUN_.text__004350d0
 */


void FUN__text__004350d0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar2 = param_2 >> 0x20 & 0xff;
  plVar4 = (long *)(param_1 + uVar2 * 0x18);
  uVar7 = *(uint *)(plVar4 + 1);
  uVar5 = (uint)param_2;
  if (uVar7 == 0) {
LAB__text__0043512c:
    plVar4 = (long *)FUN__text__00434fac(param_1,param_2 & 0xffffff0000000000 |
                                                 param_2 & 0xffffffff | uVar2 << 0x20);
    if (plVar4 == (long *)0x0) {
      return;
    }
  }
  else {
    uVar1 = 0;
    if (uVar7 != 0) {
      uVar1 = uVar5 / uVar7;
    }
    plVar4 = (long *)(*plVar4 + (ulong)(uVar5 - uVar1 * uVar7) * 8);
    do {
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) goto LAB__text__0043512c;
    } while (*(uint *)(plVar4 + 1) != uVar5);
  }
  *(uint *)((long)plVar4 + 0x1c) = param_3;
  FUN__text__004351c0(param_1,param_2);
  if (param_3 != 0) {
    param_1 = param_1 + (ulong)param_3 * 0x10;
    puVar6 = (uint *)(param_1 + 0x58);
    uVar7 = *puVar6;
    if (*(uint *)(param_1 + 0x5c) <= uVar7) {
      uVar2 = FUN__text__00435fa0((long *)(param_1 + 0x50));
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(uint *)(param_1 + 0x5c) <= uVar7) {
        return;
      }
      uVar7 = *puVar6;
    }
    lVar3 = *(long *)(param_1 + 0x50);
    *puVar6 = uVar7 + 1;
    if (lVar3 != 0) {
      puVar6 = (uint *)(lVar3 + (ulong)uVar7 * 8);
      *puVar6 = uVar5;
      *(char *)(puVar6 + 1) = (char)(param_2 >> 0x20);
    }
  }
  return;
}



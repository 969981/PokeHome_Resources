/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d0830; name: FUN_.text__002d0830
 */


uint FUN__text__002d0830(undefined8 param_1,uint param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  
  if (DAT_008e52a8 == 0) {
    return 0;
  }
  plVar1 = *(long **)(DAT_008e5278 + 0x1e8);
  plVar2 = *(long **)(DAT_008e5278 + 0x1f0);
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    lVar8 = *plVar1;
    plVar3 = (long *)(*(code *)**(undefined8 **)(lVar8 + 0x50))();
    plVar4 = (long *)FUN__text__002d29c4();
    if (plVar4 == plVar3) break;
    do {
      plVar3 = (long *)*plVar3;
    } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
    if (plVar3 != (long *)0x0) {
      if (lVar8 == 0) {
        return 0;
      }
      break;
    }
    plVar1 = plVar1 + 1;
  }
  uVar5 = FUN__text__005fdad0(param_2 & 0xffff);
  if (1 < param_4) {
    return 0;
  }
  uVar6 = FUN__text__005fe794(uVar5,param_3,7);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  puVar7 = (uint *)FUN__text__002d4f10(lVar8,param_2);
  return *puVar7 >> (ulong)(param_3 & 0x1f) & 1;
}



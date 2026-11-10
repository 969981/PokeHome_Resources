/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014e0d8; name: FUN_.text__0014e0d8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0014e0d8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xc0,8);
  if (plVar2 != (long *)0x0) {
    FUN__text__005a7c38(plVar2,0,1);
    lVar1 = _DAT_008a0060;
    plVar2[0x16] = 0;
    plVar2[0x17] = 0;
    *plVar2 = lVar1 + 0x10;
    plVar2[9] = lVar1 + 0x98;
    plVar2[10] = lVar1 + 0xd8;
    FUN__text__005e927c(&local_50,_DAT_008a0048);
    lVar1 = local_38;
    plVar2[0x10] = local_50;
    plVar2[0x11] = lStack_48;
    plVar2[0x12] = local_40;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
    }
    lVar3 = plVar2[0x13];
    plVar2[0x13] = lVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    plVar2[1] = (long)param_2;
    plVar2[2] = (long)plVar2;
    plVar2[3] = 0xc0;
    plVar2[4] = 8;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    return plVar2;
  }
  (**(code **)(*param_2 + 0xb8))(param_2);
  plVar2 = (long *)FUN__text__005a7c38(0,0,1);
  lVar1 = _DAT_008a0060 + 0x98;
  lVar3 = _DAT_008a0060 + 0xd8;
  *plVar2 = _DAT_008a0060 + 0x10;
  plVar2[9] = lVar1;
  plVar2[10] = lVar3;
  if (plVar2[0x17] != 0) {
    (**(code **)(*(long *)(plVar2[0x17] + 0x48) + 0x18))();
    plVar2[0x17] = 0;
  }
  if (plVar2[0x16] != 0) {
    (**(code **)(*(long *)(plVar2[0x16] + 0x48) + 0x18))();
    plVar2[0x16] = 0;
  }
  plVar2 = (long *)FUN__text__005a7e90(plVar2);
  return plVar2;
}



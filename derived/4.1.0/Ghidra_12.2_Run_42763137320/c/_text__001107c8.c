/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001107c8; name: FUN_.text__001107c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__001107c8(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x278,8);
  if (plVar4 != (long *)0x0) {
    lVar5 = *param_3;
    FUN__text__005e6444();
    plVar4[0x4c] = 0;
    *(undefined4 *)(plVar4 + 0x4d) = 1;
    *(undefined1 *)((long)plVar4 + 0x26c) = 0;
    lVar1 = _DAT_0089fda8 + 0x10;
    lVar2 = _DAT_0089fda8 + 0x68;
    lVar3 = _DAT_0089fda8 + 0xa8;
    plVar4[0x4e] = lVar5;
    plVar4[9] = lVar2;
    plVar4[10] = lVar3;
    *plVar4 = lVar1;
    plVar4[1] = (long)param_2;
    plVar4[2] = (long)plVar4;
    plVar4[3] = 0x278;
    plVar4[4] = 8;
    *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
    FUN__text__005e706c(plVar4);
    return plVar4;
  }
  (**(code **)(*param_2 + 0xb8))(param_2);
  plVar4 = (long *)FUN__text__005e6444(0);
  lVar1 = _DAT_0089fdb0 + 0x68;
  lVar2 = _DAT_0089fdb0 + 0xa8;
  *plVar4 = _DAT_0089fdb0 + 0x10;
  plVar4[9] = lVar1;
  plVar4[10] = lVar2;
  if (plVar4[0x4c] != 0) {
    (**(code **)(*(long *)(plVar4[0x4c] + 0x48) + 0x18))();
    plVar4[0x4c] = 0;
  }
  plVar4 = (long *)FUN__text__005e66f0(plVar4);
  return plVar4;
}



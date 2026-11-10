/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003576ec; name: FUN_.text__003576ec
 */


void FUN__text__003576ec(long *param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  
  if (1 < (param_5 | param_4)) {
    *param_1 = 0;
    return;
  }
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_3;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_3 + 0x10))(param_3,0x310,8);
  if (lVar1 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
  }
  FUN__text__00637458(lVar1,param_3,0,0,0);
  *param_1 = lVar1;
  *(long **)(lVar1 + 8) = param_3;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x310;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  FUN__text__00637704(lVar1,param_2 + (ulong)param_4 * 0x2b8 + (ulong)param_5 * 0x149 + 0x61);
  return;
}



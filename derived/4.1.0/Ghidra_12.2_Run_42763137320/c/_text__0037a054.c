/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037a054; name: FUN_.text__0037a054
 */


void FUN__text__0037a054(undefined4 *param_1,long *param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = param_3;
  uVar2 = tpidr_el0;
  uVar2 = uVar2 & 0xffffffffffffe000;
  if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,0x400,0x10);
  if (lVar1 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__0037a21c(lVar1,param_3,param_4);
  *(long *)(param_1 + 2) = lVar1;
  *(long **)(lVar1 + 8) = param_2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x400;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
                    /* WARNING: Could not recover jumptable at 0x0037a120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48));
  return;
}



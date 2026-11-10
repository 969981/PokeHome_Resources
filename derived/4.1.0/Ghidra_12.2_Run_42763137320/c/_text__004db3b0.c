/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004db3b0; name: FUN_.text__004db3b0
 */


void FUN__text__004db3b0(long param_1,undefined4 *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0xd0);
  if ((plVar2 != (long *)0x0) && (*(short *)(param_1 + 0xca) == 0)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 + -0x18;
    }
    if (*(short *)(lVar1 + 0x160) == 0) {
      (**(code **)(*plVar2 + 0x48))(plVar2,*param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004db418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2);
  return;
}



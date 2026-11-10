/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00469848; name: FUN_.text__00469848
 */


void FUN__text__00469848(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if (lVar2 != 0) {
    *(short *)(lVar2 + 0xc4) = *(short *)(lVar2 + 0xc4) + -1;
    if ((param_2 & 1) != 0) {
      *(short *)(lVar2 + 0xc6) = *(short *)(lVar2 + 0xc6) + -1;
    }
    lVar2 = *(long *)(param_1 + 0x70);
    if ((((*(short *)(lVar2 + 0xc0) < 1 && *(short *)(lVar2 + 0xc4) < 1) &&
         (*(short *)(lVar2 + 0xa8) == 0)) && (*(short *)(lVar2 + 0xaa) == 0)) &&
       ((*(long *)(lVar2 + 0x10) == 0 && (*(int *)(lVar2 + 8) == 0)))) {
      FUN__text__00463eb0(param_1);
    }
  }
  if (((param_2 & 1) != 0) && (plVar1 = *(long **)(param_1 + 0x80), plVar1 != (long *)0x0)) {
    param_2 = param_2 & 0xfffffffe;
    (**(code **)(*plVar1 + 0x130))(plVar1,1);
  }
  plVar1 = *(long **)(param_1 + 0x78);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004698fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x130))(plVar1,param_2);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c0454; name: FUN_.text__003c0454
 */


void FUN__text__003c0454(long param_1)

{
  long lVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    lVar1 = *(long *)(param_1 + 0x58);
    if (lVar1 == 0) {
      FUN__text__003c19c0(param_1 + 0x90,0);
      if (*(char *)(param_1 + 0x98) == '\0' && *(char *)(param_1 + 0x9a) == '\0')
      goto LAB__text__003c04e8;
    }
    else {
      plVar2 = (long *)(lVar1 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      FUN__text__003c19c0(param_1 + 0x90,lVar1);
      (**(code **)(*plVar2 + 0x18))(plVar2);
      if (*(char *)(param_1 + 0x98) == '\0' && *(char *)(param_1 + 0x9a) == '\0') {
LAB__text__003c04e8:
        lVar1 = *(long *)(param_1 + 0x58);
        if (lVar1 == 0) {
          FUN__text__003c1370(param_1 + 0x68,0);
          return;
        }
        plVar2 = (long *)(lVar1 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN__text__003c1370(param_1 + 0x68,lVar1);
                    /* WARNING: Could not recover jumptable at 0x003c052c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x18))(plVar2);
        return;
      }
    }
  }
  return;
}



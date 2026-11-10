/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300588; name: FUN_.text__00300588
 */


void FUN__text__00300588(long param_1,long *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long local_28;
  
  if ((param_3 < 300) && (param_4 < 0x1e)) {
    lVar2 = *param_2;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar1 + 0x10))(plVar1);
      local_28 = lVar2;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      FUN__text__00300724(param_1,&local_28,param_3,param_4,*(undefined4 *)(param_1 + 0x700fd8));
      (**(code **)(*plVar1 + 0x18))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00300634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1);
      return;
    }
    local_28 = 0;
    FUN__text__00300724(param_1,&local_28,param_3,param_4,*(undefined4 *)(param_1 + 0x700fd8));
  }
  return;
}



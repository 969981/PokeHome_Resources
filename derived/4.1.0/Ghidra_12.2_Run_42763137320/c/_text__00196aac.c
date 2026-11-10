/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196aac; name: FUN_.text__00196aac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00196aac(long param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 local_24;
  
  if ((*param_2 != 0) &&
     (plVar2 = (long *)FUN__text__003c79c0(*param_2,param_1 + 0x10), plVar2 != (long *)0x0)) {
    puVar1 = _DAT_008a1778;
    if ((param_3 & 1) == 0) {
      puVar1 = _DAT_008a1780;
    }
    local_24 = *puVar1;
    (**(code **)(*plVar2 + 0x28))(plVar2,0,&local_24);
    (**(code **)(*plVar2 + 0x28))(plVar2,1,&local_24);
    (**(code **)(*plVar2 + 0x28))(plVar2,2,&local_24);
    (**(code **)(*plVar2 + 0x28))(plVar2,3,&local_24);
  }
  return;
}



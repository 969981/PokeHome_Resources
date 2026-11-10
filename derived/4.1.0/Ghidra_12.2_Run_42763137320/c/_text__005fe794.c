/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fe794; name: FUN_.text__005fe794
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__005fe794(undefined4 param_1,undefined4 param_2,byte param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  if (((param_3 == 6) || (7 < param_3)) ||
     (plVar2 = *(long **)(_DAT_008a5d78 + (ulong)param_3 * 8), plVar2 == (long *)0x0)) {
    return 0;
  }
  plVar3 = plVar2 + 9;
  (**(code **)(*plVar3 + 0x10))(plVar3);
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_1,param_2);
  (**(code **)(*plVar3 + 0x18))(plVar3);
  return uVar1 & 1;
}



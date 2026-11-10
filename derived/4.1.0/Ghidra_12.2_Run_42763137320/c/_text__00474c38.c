/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474c38; name: FUN_.text__00474c38
 */


void FUN__text__00474c38(long param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_1 + 0x313);
  if ((*puVar1 & 0x5000) == 0x4000) {
    FUN__text__0047af90(param_1 + 0x18,0);
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN__text__00458840();
    }
    *puVar1 = *puVar1 & 0xffffbfff;
    FUN__text__004730bc(3,param_1);
    if (*(long *)(param_1 + 0x288) != 0) {
      FUN__text__0042f634(DAT_00ae9a60);
      return;
    }
  }
  return;
}



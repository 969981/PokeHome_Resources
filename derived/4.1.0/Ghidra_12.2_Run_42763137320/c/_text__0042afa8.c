/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0042afa8; name: FUN_.text__0042afa8
 */


int FUN__text__0042afa8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN__text__00429d40();
  if (iVar1 == 1) {
    iVar1 = FUN__text__004ce580(param_1 + 0x14,param_2,param_3);
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return iVar1;
}



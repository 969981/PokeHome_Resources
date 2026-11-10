/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00679fb4; name: FUN_.text__00679fb4
 */


void FUN__text__00679fb4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long local_8;
  
  local_8 = 0;
  iVar1 = FUN__text__00679ffc(&local_8,param_2,param_3,0,0,0);
  if (iVar1 == 0) {
    *(undefined4 *)(local_8 + 0x930) = 1;
    *param_1 = local_8;
  }
  return;
}



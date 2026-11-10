/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675100; name: FUN_.text__00675100
 */


undefined4 FUN__text__00675100(long *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN__text__00678414(1,0x18);
  *(undefined8 *)(*param_1 + 0x1e8) = uVar1;
  uVar2 = 0x1b;
  if (*(long *)(*param_1 + 0x1e8) != 0) {
    uVar2 = 0;
  }
  return uVar2;
}



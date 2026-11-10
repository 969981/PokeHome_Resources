/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00675d14; name: FUN_.text__00675d14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00675d14(void)

{
  undefined8 uVar1;
  long in_x5;
  
  if ((*(uint *)(in_x5 + 0x18) - 2 < 4) || (*(uint *)(in_x5 + 0x18) < 2)) {
    uVar1 = FUN__text__00675d78();
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



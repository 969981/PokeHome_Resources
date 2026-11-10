/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00685d7c; name: FUN_.text__00685d7c
 */


undefined8 FUN__text__00685d7c(long param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0xe4) & (param_2 ^ 0xff);
  *(byte *)(param_1 + 0xe4) = bVar1;
  if ((bVar1 & 0xc) == 0) {
    uVar2 = FUN__text__00685f68(*(undefined8 *)(param_1 + 0x70),param_1);
    return uVar2;
  }
  return 0;
}



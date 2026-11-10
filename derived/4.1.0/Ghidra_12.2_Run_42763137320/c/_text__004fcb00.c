/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004fcb00; name: FUN_.text__004fcb00
 */


void FUN__text__004fcb00(long param_1)

{
  undefined8 local_2c;
  undefined4 local_24;
  
  if ((*(byte *)(param_1 + 0x5a) & 0xf) == 0) {
    local_24 = 0;
    *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x98) + 8) + 0x68) = 0;
    local_2c = 0x400000000;
    FUN__text__004ebee4(*(undefined8 *)(*(long *)(param_1 + 0x98) + 8),&local_2c);
    FUN__text__004ebc10(param_1);
    return;
  }
  FUN__text__004ebc10(param_1);
  return;
}



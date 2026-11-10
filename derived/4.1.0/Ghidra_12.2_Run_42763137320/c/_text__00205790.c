/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00205790; name: FUN_.text__00205790
 */


undefined4 FUN__text__00205790(byte param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((byte)(param_1 - 0x18) < 6) {
    return 0;
  }
  if ((byte)(param_1 - 0x1e) < 5) {
    return *(undefined4 *)((long)(char)(param_1 - 0x1e) * 4 + 0x727130);
  }
  if ((byte)(param_1 - 0x23) < 7) {
    return 3;
  }
  bVar1 = param_1 & 0xfe;
  if (bVar1 == 0x2a) {
    return 5;
  }
  if (bVar1 == 0x2c) {
    return 6;
  }
  if (bVar1 == 0x30) {
    return 7;
  }
  if (param_1 == 0x2f) {
    return 8;
  }
  if ((param_1 & 0xfe) == 0x32) {
    return 9;
  }
  if (param_1 == 0x34) {
    return 10;
  }
  uVar2 = 0xb;
  if ((param_1 & 0xfe) != 0x38) {
    uVar2 = 2;
  }
  return uVar2;
}



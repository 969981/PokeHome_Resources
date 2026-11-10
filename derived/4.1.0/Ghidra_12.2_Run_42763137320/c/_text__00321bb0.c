/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00321bb0; name: FUN_.text__00321bb0
 */


ulong FUN__text__00321bb0(byte param_1,int param_2)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = param_1 & 0xfe;
  if (bVar1 == 0x2a) {
    return 1;
  }
  if (bVar1 == 0x2c) {
    uVar2 = FUN__text__00356a28(param_2);
    return uVar2;
  }
  if (param_1 == 0x2f) {
    uVar2 = FUN__text__002c6dd0(param_2);
    return uVar2;
  }
  if (bVar1 == 0x32) {
    uVar2 = FUN__text__00395e84(param_2);
    return uVar2;
  }
  if (bVar1 == 0x30) {
    uVar2 = FUN__text__002a52a0(param_2);
    return uVar2;
  }
  if (param_1 == 0x34) {
    uVar2 = FUN__text__002ca898(param_2);
    return uVar2;
  }
  if (bVar1 == 0x38) {
    uVar2 = FUN__text__00356a28(param_2);
    return uVar2;
  }
  return (ulong)(param_2 == 0);
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0063e484; name: FUN_.text__0063e484
 */


byte FUN__text__0063e484(ushort param_1,char param_2)

{
  ushort uVar1;
  byte *pbVar2;
  byte bVar3;
  
  uVar1 = 0;
  if (param_1 < 0x19c) {
    uVar1 = param_1;
  }
  pbVar2 = (byte *)((ulong)uVar1 * 0x1a + 0x75c779);
  if (param_2 != '\x01') {
    pbVar2 = (byte *)((ulong)uVar1 * 0x1a + 0x75c778);
  }
  bVar3 = *pbVar2;
  if (bVar3 == 0x4c) {
    return 0;
  }
  if (bVar3 == 0x4d) {
    return 0x4c;
  }
  if (0x4b < bVar3) {
    bVar3 = 0;
  }
  return bVar3;
}



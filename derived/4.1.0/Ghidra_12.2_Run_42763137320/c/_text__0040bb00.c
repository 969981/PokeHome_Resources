/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040bb00; name: FUN_.text__0040bb00
 */


uint FUN__text__0040bb00(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = 0;
  if (param_1 != (byte *)0x0) {
    uVar2 = 0x811c9dc5;
    bVar3 = *param_1;
    if (bVar3 != 0) {
      do {
        param_1 = param_1 + 1;
        bVar1 = bVar3 + 0x20;
        if (0x19 < (byte)(bVar3 + 0xbf)) {
          bVar1 = bVar3;
        }
        uVar2 = uVar2 * 0x1000193 ^ (uint)bVar1;
        bVar3 = *param_1;
      } while (bVar3 != 0);
    }
  }
  return uVar2;
}



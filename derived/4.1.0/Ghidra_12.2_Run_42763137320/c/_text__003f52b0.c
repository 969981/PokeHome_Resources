/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f52b0; name: FUN_.text__003f52b0
 */


ulong FUN__text__003f52b0(undefined8 param_1,byte *param_2)

{
  size_t sVar1;
  byte *pbVar2;
  size_t sVar3;
  ulong uVar4;
  byte *pbVar5;
  
  uVar4 = 0xcbf29ce484222325;
  sVar1 = strlen((char *)param_2);
  if (sVar1 != 0) {
    pbVar2 = param_2;
    sVar3 = sVar1;
    do {
      if (*pbVar2 - 0x41 < 0x1a) {
        *pbVar2 = *pbVar2 + 0x20;
      }
      sVar3 = sVar3 - 1;
      pbVar2 = pbVar2 + 1;
    } while (sVar3 != 0);
    if ((sVar1 & 0xffffffff) != 0) {
      pbVar2 = param_2;
      do {
        pbVar5 = pbVar2 + 1;
        uVar4 = uVar4 * 0x100000001b3 ^ (ulong)*pbVar2;
        pbVar2 = pbVar5;
      } while (pbVar5 < param_2 + (sVar1 & 0xffffffff));
    }
  }
  return uVar4;
}



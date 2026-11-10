/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006241f0; name: FUN_.text__006241f0
 */


bool FUN__text__006241f0(undefined8 param_1)

{
  char *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  FUN__text__006303f4(auStack_2c6,param_1);
  FUN__text__0060e784(auStack_2d8,auStack_2c6);
  pcVar1 = (char *)(local_2d0 + 0xd8);
  uVar3 = FUN__text__0060e994(auStack_2d8,pcVar1);
  bVar2 = false;
  while (((uVar3 & 1) != 0 && (bVar2 = *pcVar1 == '\x01', !bVar2))) {
    pcVar1 = pcVar1 + (ulong)*(ushort *)(pcVar1 + 1) + 3;
    uVar3 = FUN__text__0060e994(auStack_2d8,pcVar1);
  }
  FUN__text__0060e79c(auStack_2d8);
  return bVar2;
}



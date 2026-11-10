/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006267a0; name: FUN_.text__006267a0
 */


void FUN__text__006267a0(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 auStack_2d8 [8];
  long local_2d0;
  undefined1 auStack_2c6 [662];
  
  memset(auStack_2c6,0,0x296);
  FUN__text__006303f4(auStack_2c6,param_1);
  FUN__text__0060e784(auStack_2d8,auStack_2c6);
  uVar1 = FUN__text__0060e7f8(auStack_2d8);
  pcVar3 = (char *)(local_2d0 + 0xd8);
  uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3);
  while ((uVar2 & 1) != 0) {
    if (*pcVar3 == '\x04') {
      pcVar3 = (char *)(local_2d0 + 0xd8);
      uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3);
      if ((uVar2 & 1) != 0) goto LAB__text__00626850;
      goto LAB__text__00626888;
    }
    pcVar3 = pcVar3 + (ulong)*(ushort *)(pcVar3 + 1) + 3;
    uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3);
  }
  goto LAB__text__00626894;
  while( true ) {
    pcVar3 = pcVar3 + (ulong)*(ushort *)(pcVar3 + 1) + 3;
    uVar2 = FUN__text__0060e994(auStack_2d8,pcVar3);
    if ((uVar2 & 1) == 0) break;
LAB__text__00626850:
    if (*pcVar3 == '\x04') {
      FUN__text__006268b0(pcVar3 + 3,uVar1);
      break;
    }
  }
LAB__text__00626888:
  FUN__text__00630654(param_1,auStack_2c6);
LAB__text__00626894:
  FUN__text__0060e79c(auStack_2d8);
  return;
}



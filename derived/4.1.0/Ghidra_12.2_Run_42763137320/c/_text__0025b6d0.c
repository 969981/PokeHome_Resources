/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025b6d0; name: FUN_.text__0025b6d0
 */


void FUN__text__0025b6d0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  
  lVar4 = *(long *)(param_1 + 0x678);
  lVar3 = 0;
  pcVar5 = (char *)(param_1 + 0x6b0);
  do {
    if (pcVar5[-0x30] == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = *pcVar5 != '\0';
    }
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(lVar4 + 0x2d0),lVar3 + 0x72c710);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
    if (pcVar5[-0x30] == '\0') {
      bVar1 = *pcVar5 != '\0';
    }
    else {
      bVar1 = false;
    }
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar3 + 0x72c890);
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
    lVar2 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar3 + 0x72ca10);
    lVar3 = lVar3 + 8;
    pcVar5 = pcVar5 + 1;
    *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe | bVar1;
  } while (lVar3 != 0x180);
  return;
}



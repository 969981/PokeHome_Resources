/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601a20; name: FUN_.text__00601a20
 */


void FUN__text__00601a20(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  
  iVar4 = FUN__text__0060172c(param_2);
  if (*(char *)(param_1 + 0x28) != '\0') {
    lVar6 = 0;
    uVar7 = 0;
    do {
      iVar5 = FUN__text__0060172c(*(long *)(param_1 + 8) + lVar6);
      if (iVar5 == iVar4) {
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x1a0;
    } while (uVar7 < *(byte *)(param_1 + 0x28));
  }
  FUN__text__006016f4(param_2,*(long *)(param_1 + 8) + (ulong)*(byte *)(param_1 + 0x29) * 0x1a0);
  uVar1 = *(byte *)(param_1 + 0x29) + 1;
  bVar2 = *(byte *)(param_1 + 0x28);
  cVar3 = '\0';
  if (bVar2 != 0) {
    cVar3 = (char)(uVar1 / bVar2);
  }
  *(byte *)(param_1 + 0x29) = (char)uVar1 - cVar3 * bVar2;
  return;
}



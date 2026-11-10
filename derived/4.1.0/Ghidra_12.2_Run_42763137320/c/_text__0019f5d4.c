/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019f5d4; name: FUN_.text__0019f5d4
 */


byte FUN__text__0019f5d4(long param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  char *pcVar7;
  char cVar8;
  long lVar9;
  long lVar10;
  
  lVar6 = *(long *)(param_1 + 0x68);
  if (*(char *)(lVar6 + 0x20) == '\0') {
    bVar3 = false;
    pcVar7 = (char *)(*(long *)(param_1 + 0x88) + 0x5b68);
    cVar8 = *(char *)(*(long *)(param_1 + 0x88) + 0x20);
    if (cVar8 == '\0') {
      cVar8 = '\0';
      goto LAB__text__0019f614;
    }
  }
  else {
    bVar3 = *(char *)(lVar6 + 0x5b68) != '\0';
    pcVar7 = (char *)(*(long *)(param_1 + 0x88) + 0x5b68);
    cVar8 = *(char *)(*(long *)(param_1 + 0x88) + 0x20);
    if (cVar8 == '\0') goto LAB__text__0019f614;
  }
  if (*pcVar7 != '\0') {
    bVar3 = true;
  }
LAB__text__0019f614:
  lVar9 = *(long *)(param_1 + 0xa8);
  cVar1 = *(char *)(lVar9 + 0x20);
  if ((cVar1 != '\0') && (*(char *)(lVar9 + 0x5884) != '\0')) {
    bVar3 = true;
  }
  lVar10 = *(long *)(param_1 + 200);
  cVar2 = *(char *)(lVar10 + 0x20);
  if ((cVar2 != '\0') && (*(char *)(lVar10 + 0x5884) != '\0')) {
    bVar3 = true;
  }
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(lVar9 + 0x5864) != '\0';
  }
  if ((cVar2 != '\0') && (*(char *)(lVar10 + 0x5864) != '\0')) {
    bVar4 = true;
  }
  if (*(char *)(lVar6 + 0x20) == '\0') {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(lVar6 + 0x5b69) != '\0';
  }
  if ((cVar8 != '\0') && (pcVar7[1] != '\0')) {
    bVar5 = true;
  }
  if ((cVar1 != '\0') && (*(char *)(lVar9 + 0x588c) != '\0')) {
    bVar5 = true;
  }
  if ((cVar2 != '\0') && (*(char *)(lVar10 + 0x588c) != '\0')) {
    bVar5 = true;
  }
  return bVar3 | bVar4 | bVar5;
}



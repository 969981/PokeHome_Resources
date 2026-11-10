/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f4c90; name: FUN_.text__003f4c90
 */


undefined4 FUN__text__003f4c90(long *param_1,char *param_2)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  size_t sVar6;
  long *plVar7;
  size_t sVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  int local_34;
  
  sVar4 = strlen(param_2);
  uVar10 = (uint)sVar4;
  uVar12 = (ulong)(uVar10 + 1);
  if (uVar10 == 0) {
    lVar11 = 0x10;
    lVar5 = FUN__text__003f5990();
    sVar6 = strlen((char *)(lVar5 + 1));
    uVar1 = sVar6 + 1;
  }
  else {
    uVar2 = uVar10;
    if (param_2[uVar10 - 1] != '/') {
      uVar2 = uVar10 + 1;
    }
    lVar11 = (ulong)uVar2 + 0x10;
    lVar5 = FUN__text__003f5990();
    sVar6 = strlen((char *)(lVar5 + 1));
    uVar1 = sVar6 + uVar12;
  }
  if (0x103 < uVar1) {
    return 0x1f;
  }
  plVar7 = (long *)FUN__text__00400f80(7,lVar11);
  if (plVar7 == (long *)0x0) {
    return 0x34;
  }
  sVar6 = uVar12 - 1;
  sVar8 = strlen(param_2);
  if (sVar8 + 1 <= sVar6) {
    sVar6 = sVar8 + 1;
  }
  strncpy((char *)(plVar7 + 1),param_2,sVar6);
  *(char *)((long)(plVar7 + 1) + sVar6) = '\0';
  if ((uVar10 != 0) && (param_2[uVar10 - 1] != '/')) {
    *(undefined1 *)((long)plVar7 + (sVar4 & 0xffffffff) + 8) = 0x2f;
    *(undefined1 *)((long)plVar7 + uVar12 + 8) = 0;
  }
  *plVar7 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)plVar7;
    *plVar7 = 0;
  }
  else {
    *plVar7 = *param_1;
    *param_1 = (long)plVar7;
  }
  iVar3 = nn::fs::GetEntryType((DirectoryEntryType *)&local_34,param_2);
  uVar9 = 0x24;
  if (iVar3 == 0 && local_34 == 0) {
    uVar9 = 1;
  }
  return uVar9;
}



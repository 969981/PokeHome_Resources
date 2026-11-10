/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00425300; name: FUN_.text__00425300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00425300(char *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  size_t sVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    iVar10 = (int)sVar4;
    uVar11 = iVar10 + 2;
    pcVar5 = (char *)FUN__text__00400f80(0,uVar11);
    if (pcVar5 == (char *)0x0) {
      DAT_00aea5e8 = pcVar5;
      return 0x34;
    }
    sVar4 = (ulong)(iVar10 + 1) - 1;
    DAT_00aea5e8 = pcVar5;
    sVar6 = strlen(param_1);
    if (sVar6 + 1 <= sVar4) {
      sVar4 = sVar6 + 1;
    }
    strncpy(pcVar5,param_1,sVar4);
    pcVar5[sVar4] = '\0';
    pcVar5 = DAT_00aea5e8;
    if ((2 < uVar11) && (DAT_00aea5e8[iVar10 - 1] != '/')) {
      sVar4 = strlen(DAT_00aea5e8);
      strncat(pcVar5,(char *)0x70eff8,(ulong)(~(uint)sVar4 + uVar11 != 0));
    }
  }
  puVar1 = _DAT_008a47a8;
  piVar7 = (int *)*_DAT_008a47a8;
  uVar11 = *(uint *)(_DAT_008a47a8 + 1);
  uVar12 = (ulong)uVar11;
  piVar8 = piVar7;
  if (uVar11 == 0) {
LAB__text__0042540c:
    if (piVar8 != piVar7 + uVar12 * 10) goto LAB__text__004254e8;
  }
  else {
    lVar9 = uVar12 * 0x28;
    do {
      if (*piVar8 == 0x10001) goto LAB__text__0042540c;
      piVar8 = piVar8 + 10;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  if (_DAT_008ab048 == 0 || _DAT_008ab050 == 0) {
    return 0x1f;
  }
  piVar8 = piVar7;
  if (uVar11 == 0) {
LAB__text__0042547c:
    if (piVar8 == piVar7 + uVar12 * 10) goto LAB__text__0042548c;
  }
  else {
    lVar9 = uVar12 * 0x28;
    do {
      if (*piVar8 == 0x10001) goto LAB__text__0042547c;
      piVar8 = piVar8 + 10;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
LAB__text__0042548c:
    if (*(uint *)((long)_DAT_008a47a8 + 0xc) <= uVar11) {
      uVar12 = FUN__text__00425f70(_DAT_008a47a8);
      if (((uVar12 & 1) == 0) || (*(uint *)((long)puVar1 + 0xc) <= uVar11)) {
        return 0x34;
      }
      uVar11 = *(uint *)(puVar1 + 1);
      piVar7 = (int *)*puVar1;
    }
    *(uint *)(puVar1 + 1) = uVar11 + 1;
    if (piVar7 == (int *)0x0) {
      return 0x34;
    }
    piVar8 = piVar7 + (ulong)uVar11 * 10;
    *piVar8 = 0x10001;
  }
  uVar3 = _DAT_008ab060;
  lVar2 = _DAT_008ab050;
  lVar9 = _DAT_008ab048;
  *(undefined8 *)(piVar8 + 6) = _DAT_008ab058;
  *(undefined8 *)(piVar8 + 8) = uVar3;
  *(long *)(piVar8 + 2) = lVar9;
  *(long *)(piVar8 + 4) = lVar2;
LAB__text__004254e8:
  FUN__text__00425690(DAT_00aea5f0);
  return 1;
}



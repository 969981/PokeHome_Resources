/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ece4; name: FUN_.text__0040ece4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__0040ece4(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined2 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = (float)NEON_fminnm(param_1,0x3f800000);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = (float)NEON_fminnm(param_2,0x3f800000);
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  uVar5 = FUN__text__004af700();
  plVar4 = _DAT_008a45c0;
  lVar6 = FUN__text__004b0170(*_DAT_008a45c0,0x15,uVar5);
  *(undefined8 *)(lVar6 + 4) = param_3;
  lVar7 = *plVar4;
  *(undefined8 *)(lVar6 + 0xc) = param_4;
  piVar1 = (int *)(lVar7 + 0xd4);
  *(float *)(lVar6 + 0x14) = fVar8;
  *(float *)(lVar6 + 0x18) = fVar9;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return 1;
}



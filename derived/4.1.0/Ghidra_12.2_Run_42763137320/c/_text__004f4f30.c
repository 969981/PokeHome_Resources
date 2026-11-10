/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4f30; name: FUN_.text__004f4f30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__004f4f30(long param_1,int *param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ulong extraout_x1;
  long lVar6;
  undefined8 unaff_x21;
  long lVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c0 [128];
  
  puVar3 = _DAT_008a4b68;
  auVar1 = SEXT816((long)((ulong)*_DAT_008a4b68 * (long)*param_2)) * SEXT816(0x20c49ba5e353f7cf);
  uVar5 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  iVar4 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x90));
  if ((int)uVar5 < -iVar4) {
    iVar4 = FUN__text__004f47e8(*(undefined8 *)(param_1 + 0x90));
    uVar5 = -iVar4;
  }
  if ((param_3 & 1) != 0) {
    uVar5 = FUN__text__004f4a40(*(undefined8 *)(param_1 + 0x90),uVar5);
    dVar8 = (double)NEON_ucvtf((ulong)*puVar3);
    dVar8 = ((double)(int)uVar5 * 1000.0) / dVar8;
    dVar9 = 0.5;
    if (dVar8 <= 0.0) {
      dVar9 = -0.5;
    }
    *param_2 = (int)(dVar9 + dVar8);
  }
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0) {
    return 2;
  }
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  uVar2 = (ulong)uVar5;
  lVar6 = *(long *)(param_1 + 0x30);
  while (lVar6 != 0) {
    lVar7 = *(long *)(lVar6 + 8);
    FUN__text__004ec13c(lVar6,uVar2);
    uVar2 = extraout_x1;
    lVar6 = lVar7;
  }
  FUN__text__004f5550(param_1);
  lVar6 = *(long *)(param_1 + 0x60);
  iVar4 = FUN__text__004f4de4(param_1,*(undefined8 *)(lVar6 + 0x30),lVar6 + 0x18,(ulong)uVar5,
                              auStack_c0 + 0xac,*(undefined1 *)(lVar6 + 0x38));
  if (iVar4 == 1) {
    lVar6 = 0;
    lVar7 = param_1;
    do {
      lVar6 = *(long *)(lVar7 + 0x68) + lVar6;
      lVar7 = *(long *)(lVar7 + 0x10);
    } while (lVar7 != 0);
    *(long *)(param_1 + 0x68) =
         (*(long *)(*(long *)(param_1 + 0x60) + 8) - lVar6) + (long)(int)((ulong)unaff_x21 >> 0x20);
  }
  else {
    FUN__text__004ec010(param_1,auStack_c0 + 0x88,0);
  }
  FUN__text__004eb980(param_1);
  return iVar4;
}



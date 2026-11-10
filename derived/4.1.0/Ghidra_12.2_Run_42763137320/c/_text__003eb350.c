/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003eb350; name: FUN_.text__003eb350
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003eb350(undefined4 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                        undefined8 param_5)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  
  *(undefined8 *)(param_1 + 2) = param_3;
  puVar1 = param_1 + 4;
  uVar5 = FUN__text__003e73fc(param_4,param_5);
  FUN__text__00699a30(puVar1,uVar5);
  uVar2 = FUN__text__00699b8c(puVar1);
  if (uVar2 == 0) {
    uVar9 = (uint)*(ushort *)(*(long *)(param_1 + 6) + 0xe);
  }
  else {
    lVar6 = FUN__text__00699ba4(puVar1);
    uVar9 = 0;
    uVar10 = (ulong)uVar2;
    do {
      lVar7 = FUN__text__0069e6c0(*(undefined8 *)(param_2 + 0x20),lVar6);
      if (lVar7 != 0) {
        uVar3 = FUN__text__00699bc0(puVar1);
        iVar4 = FUN__text__00699c10(puVar1,lVar7,uVar3 & 1);
        uVar9 = iVar4 + uVar9;
      }
      lVar6 = lVar6 + 0x24;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  plVar8 = *(long **)(param_1 + 2);
  uVar5 = FUN__text__003e751c(param_4);
  (**(code **)(*plVar8 + 0x48))(plVar8,_DAT_008a0448,uVar5,*(undefined8 *)(param_1 + 6),uVar9);
  *param_1 = 1;
  param_1[0xc] = 0x3f800000;
  return;
}



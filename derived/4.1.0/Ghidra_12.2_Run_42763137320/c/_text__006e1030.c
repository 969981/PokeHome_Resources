/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e1030; name: FUN_.text__006e1030
 */


void FUN__text__006e1030(undefined8 param_1,long param_2,long param_3,uint param_4,
                        undefined8 param_5,long param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  
  if (param_4 == 3) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_3 + 0x238) + (ulong)param_4 * 8 + 0x340);
  }
  lVar7 = *(long *)(param_3 + 0x418);
  uVar8 = *(undefined8 *)(*(long *)(param_3 + 0x238) + 0x338);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  uVar10 = *(undefined8 *)(param_6 + 0x30);
  uVar2 = FUN__text__006dd36c(param_1,param_3,param_4,uVar6);
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined4 *)(*(long *)(param_3 + 0x238) + 0x3d0);
    uVar3 = FUN__text__006eb02c(param_3 + 0x7a8,*(undefined4 *)(lVar7 + 0x38));
    FUN__text__006ed12c(param_1,uVar1,uVar3,0x50,*(undefined8 *)(param_3 + 0x818));
    for (lVar11 = *(long *)(lVar7 + 0x18); lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x68)) {
      if (0 < *(int *)(lVar11 + 0x78)) {
        FUN__text__006e1194(param_1,uVar9,uVar10,param_3,uVar6,uVar8,lVar7,lVar11);
      }
    }
    iVar5 = *(int *)(param_3 + 0x230);
    if (0 < iVar5) {
      lVar11 = 0;
      lVar12 = 0x18;
      do {
        lVar4 = *(long *)(*(long *)(param_3 + 0xb0) + lVar12);
        if (((lVar4 != 0) && (*(char *)(lVar4 + 0x90) != '\0')) && (0 < *(int *)(lVar4 + 0x78))) {
          FUN__text__006e1194(param_1,uVar9,uVar10,param_3,uVar6,uVar8,lVar7);
          iVar5 = *(int *)(param_3 + 0x230);
        }
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 0x20;
      } while (lVar11 < iVar5);
    }
  }
  return;
}



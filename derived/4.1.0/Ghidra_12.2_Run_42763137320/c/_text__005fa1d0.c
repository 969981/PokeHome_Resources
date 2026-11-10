/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005fa1d0; name: FUN_.text__005fa1d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005fa1d0(long param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  piVar6 = _DAT_008a0300;
  local_70 = 0;
  local_68 = 0;
  lVar11 = *(long *)(param_1 + 0x60);
  lVar13 = *(long *)(param_1 + 0x138);
  iVar5 = *_DAT_008a0300;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  FUN__text__006ebf00(&local_90);
  FUN__text__006eddd4(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123);
  FUN__text__006eddfc(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123);
  piVar12 = *(int **)(param_1 + 0x150);
  piVar3 = *(int **)(param_1 + 0x158);
  if (piVar12 != piVar3) {
    do {
      iVar1 = *piVar12;
      iVar2 = piVar12[1];
      iVar7 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x140));
      iVar4 = piVar12[4];
      iVar8 = FUN__text__005cd4dc(*(undefined8 *)(param_1 + 0x140));
      iVar9 = FUN__text__005cd554(*(undefined8 *)(param_1 + 0x140));
      local_90 = CONCAT44(local_90._4_4_,(iVar1 + iVar7 * iVar2 + iVar8 * iVar4 * iVar9) * 4);
      uStack_88 = CONCAT44(*piVar12,(undefined4)uStack_88);
      local_80 = CONCAT44(local_80._4_4_,piVar12[1]);
      local_78 = *(undefined8 *)(piVar12 + 2);
      local_68 = CONCAT44(local_68._4_4_,piVar12[4]);
      uVar10 = FUN__text__005a78b8(*(undefined8 *)(param_1 + 0x140));
      FUN__text__006ed69c(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,
                          lVar13 + (long)iVar5 * 0x70 + 0x58,uVar10,&local_90);
      piVar12 = piVar12 + 5;
    } while (piVar12 != piVar3);
  }
  FUN__text__006eddd4(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123);
  FUN__text__006eddfc(*(long *)(lVar11 + 0x58) + (long)*piVar6 * 0x168,0x123);
  return;
}



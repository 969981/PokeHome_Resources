/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044fbd0; name: FUN_.text__0044fbd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0044fbd0(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar4 = _DAT_008a4b70;
  if (*(long *)(param_1 + 0xf0) == 0) {
    *(short *)(param_2 + 0x10) = (short)*_DAT_008a4b70;
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x78))(*(long **)(param_1 + 0xe0),param_2);
    iVar6 = *(int *)(param_2 + 0x2c);
    if (iVar6 == 0x2e) {
      if ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) >> 1 & 1) != 0) {
        return;
      }
      *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
      lVar1 = 0;
      if (*(long *)(param_1 + 8) != 0) {
        lVar1 = *(long *)(param_1 + 8) + -0x18;
      }
      uVar2 = *(undefined4 *)(lVar1 + 0x280);
      uVar7 = *_DAT_008a45d8;
      uVar5 = FUN__text__00478e4c(lVar1 + 0x18);
      FUN__text__0048dbf0(uVar7,uVar2,uVar5);
      iVar6 = *(int *)(param_2 + 0x2c);
    }
    if ((iVar6 == 0x11) && (*(long *)(param_1 + 0xe8) != 0)) {
      iVar6 = FUN__text__0044fe08(param_1,param_2);
      *(int *)(param_2 + 0x2c) = iVar6;
      if (iVar6 == 0x2b) {
        *(short *)(param_2 + 0x10) = (short)*puVar4;
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x78))(*(long **)(param_1 + 0xe0),param_2);
        if ((*(int *)(param_2 + 0x2c) == 0x2e) &&
           ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) >> 1 & 1) == 0)) {
          *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
          lVar1 = 0;
          if (*(long *)(param_1 + 8) != 0) {
            lVar1 = *(long *)(param_1 + 8) + -0x18;
          }
          uVar2 = *(undefined4 *)(lVar1 + 0x280);
          uVar7 = *_DAT_008a45d8;
          uVar5 = FUN__text__00478e4c(lVar1 + 0x18);
          FUN__text__0048dbf0(uVar7,uVar2,uVar5);
          return;
        }
      }
    }
  }
  else {
    FUN__text__004da354(*(long *)(param_1 + 0xf0),param_2);
    puVar4 = _DAT_008a4b70;
    puVar3 = _DAT_008a45d8;
    if (*(int *)(param_2 + 0x2c) == 0x2b) {
      while( true ) {
        *(short *)(param_2 + 0x10) = (short)*puVar4;
        (**(code **)(**(long **)(param_1 + 0xe0) + 0x78))(*(long **)(param_1 + 0xe0),param_2);
        iVar6 = *(int *)(param_2 + 0x2c);
        if (iVar6 == 0x2e) {
          if ((*(byte *)(*(long *)(param_1 + 0xe0) + 0x20) >> 1 & 1) != 0) {
            return;
          }
          uVar7 = *puVar3;
          *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
          lVar1 = 0;
          if (*(long *)(param_1 + 8) != 0) {
            lVar1 = *(long *)(param_1 + 8) + -0x18;
          }
          uVar2 = *(undefined4 *)(lVar1 + 0x280);
          uVar5 = FUN__text__00478e4c(lVar1 + 0x18);
          FUN__text__0048dbf0(uVar7,uVar2,uVar5);
          iVar6 = *(int *)(param_2 + 0x2c);
        }
        if ((iVar6 != 0x2d) && (iVar6 != 0x11)) break;
        FUN__text__004da3f0(*(undefined8 *)(param_1 + 0xf0),param_2);
        if (*(int *)(param_2 + 0x2c) != 0x2b) {
          return;
        }
      }
      return;
    }
  }
  return;
}



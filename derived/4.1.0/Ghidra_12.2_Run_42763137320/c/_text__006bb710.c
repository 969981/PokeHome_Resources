/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006bb710; name: FUN_.text__006bb710
 */


void FUN__text__006bb710(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long local_50;
  long local_48;
  
  lVar8 = *(long *)(param_1 + 0xd8);
  if ((lVar8 == 0) || ((**(byte **)(param_2 + 200) >> 1 & 1) != 0)) {
    return;
  }
  if (3 < *(byte *)(param_1 + 0xf0)) {
    uVar5 = FUN__text__0069de6c(param_2,*(undefined8 *)(lVar8 + 0x20),*(undefined2 *)(lVar8 + 0x4a))
    ;
    if ((uVar5 & 1) != 0) {
      FUN__text__006b0fdc(*(undefined8 *)(param_1 + 0xd8),param_3);
    }
    FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    local_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 8);
    uVar6 = FUN__text__006eb7a0(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar7 = FUN__text__006eb7cc(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN__text__006ed12c(param_3,0,&local_50,uVar6,uVar7);
    *(byte *)(param_2 + 0x194) = *(byte *)(param_2 + 0x194) | 0x40;
    FUN__text__006b09e8(*(undefined8 *)(param_1 + 0xd8),param_3,param_2);
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
      FUN__text__006b4e74(param_1,param_3,param_2);
    }
    plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                     (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
    local_48 = plVar1[1];
    local_50 = *plVar1 + *(long *)(*(long *)(param_1 + 0xf8) + 0x10);
    uVar2 = FUN__text__006eb7e4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    uVar3 = FUN__text__006eb7f4(*(undefined8 *)(*(long *)(param_1 + 0xf8) + 0x18));
    FUN__text__006eca30(param_3,3,uVar2,&local_50,uVar3,0);
    return;
  }
  if ((*(byte *)(param_1 + 0x62) >> 2 & 1) != 0) {
    lVar8 = FUN__text__006b27a8(param_1,0x12);
    if (lVar8 != 0) {
      lVar4 = FUN__text__006b253c(param_1,6);
      if ((((*(byte *)(param_1 + 0x62) >> 1 & 1) == 0) && ((*(byte *)(lVar4 + 4) >> 4 & 1) != 0)) &&
         (0.0 < *(float *)(lVar4 + 0xdc))) {
        FUN__text__006bb5a0(param_1,param_2,param_3,lVar4,lVar8);
      }
      if ((*(byte *)(lVar4 + 4) & 0x9f) == 0x90) {
        return;
      }
      FUN__text__0069db40(param_3,param_2,*(undefined8 *)(param_1 + 0xd8));
      FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      local_48 = plVar1[1];
      local_50 = *plVar1 + (ulong)*(uint *)(lVar8 + 8);
      if (-1 < *(int *)(lVar8 + 4)) {
        FUN__text__006ee1d4(param_3,*(int *)(lVar8 + 4),4,&local_50,0x120);
      }
      if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
        FUN__text__006b4e74(param_1,param_3,param_2);
      }
      FUN__text__0069dbb0(param_3,param_2);
      return;
    }
    lVar8 = *(long *)(param_1 + 0xd8);
  }
  FUN__text__0069db40(param_3,param_2,lVar8);
  FUN__text__006af484(*(undefined8 *)(param_1 + 0xd8),param_2,param_3);
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
    FUN__text__006b4e74(param_1,param_3,param_2);
  }
  FUN__text__0069dbb0(param_3,param_2);
  return;
}



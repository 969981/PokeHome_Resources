/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f132c; name: FUN_.text__004f132c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004f132c(long param_1,long param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((*(byte *)(param_1 + 0x5a) & 0xe) != 0) {
    return 0;
  }
  lVar6 = *(long *)(param_2 + 0x2a0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  if ((*(ushort *)(lVar6 + 0xc) & 0x7c) == 4) {
    iVar4 = *(int *)(lVar6 + 0x24);
  }
  else {
    iVar4 = 0;
  }
  *param_3 = iVar4;
  if (*(short *)(lVar6 + 0x1a) == 0x11) {
    uVar2 = _DAT_008ab03c & 0xffff;
    if (*(int *)(param_2 + 0x3b8) != 0) {
      uVar2 = (_DAT_008ab03c & 0xffff) << 2;
    }
    iVar4 = uVar2 + iVar4;
    *param_3 = iVar4;
  }
  uVar2 = 0;
  if ((_DAT_008ab03c & 0xffff) != 0) {
    uVar2 = (((_DAT_008ab03c & 0xffff) + iVar4) - 1) / (_DAT_008ab03c & 0xffff);
  }
  *param_3 = uVar2 * (_DAT_008ab03c & 0xffff);
  iVar4 = FUN__text__004ed5e8(uVar7);
  iVar5 = FUN__text__004ed5b0(uVar7);
  if (*(int *)(param_2 + 0x3b0) + *(int *)(param_2 + 0x3ac) <= *param_3 + (iVar5 - iVar4)) {
    return 0;
  }
  uVar2 = ((iVar5 - iVar4) - *(int *)(param_2 + 0x3ac)) + *param_3 + *(int *)(param_2 + 0x3b8);
  uVar1 = *(uint *)(param_2 + 0x3b4);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = uVar2 / uVar1;
  }
  uVar2 = uVar2 - uVar3 * uVar1;
  *param_4 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  return 1;
}



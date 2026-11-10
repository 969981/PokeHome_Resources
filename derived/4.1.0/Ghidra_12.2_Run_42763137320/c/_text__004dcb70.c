/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dcb70; name: FUN_.text__004dcb70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004dcb70(long param_1,undefined8 param_2,undefined1 param_3)

{
  ushort uVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined8 local_38;
  byte local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  lVar5 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x2a0);
  if ((((*(ushort *)(lVar4 + 0xc) & 0x7c) == 4) && (*(long *)(lVar4 + 0x10) == 0)) &&
     (*(int *)(lVar4 + 4) == -1)) {
    return 2;
  }
  local_20 = 0x3f800000;
  local_18 = 0;
  local_13 = (undefined1)(int)*(float *)(lVar5 + 0x318);
  bVar2 = (*(ushort *)(lVar4 + 0xc) & 0x7c) == 0xc;
  *(byte *)(param_1 + 0x82) = *(byte *)(param_1 + 0x82) & 0xdf | bVar2 << 5;
  local_14 = param_3;
  if (!bVar2) {
    uVar1 = *(ushort *)(lVar4 + 0xc);
    local_30 = (byte)uVar1 & 1;
    if ((uVar1 >> 9 & 1) == 0) {
      local_2c = *(undefined4 *)(lVar4 + 4);
      local_40 = 0;
      local_38 = 0;
      if ((uVar1 & 0x500) != 0) {
        local_2c = 0xffffffff;
      }
      uStack_44 = (uint)*(ushort *)(lVar4 + 0x1a);
      local_28 = 0;
      local_48 = (uint)((uVar1 >> 8 & 1) != 0);
      uVar3 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x38))
                        ((long *)*_DAT_008a43d8,*(undefined4 *)(lVar4 + 4),&local_48,&local_20,
                         param_2,param_1 + 0x58,*_DAT_008a4598);
      return uVar3;
    }
    local_2c = *(undefined4 *)(lVar4 + 4);
    local_40 = 0;
    local_38 = 0;
    if ((uVar1 & 0x500) != 0) {
      local_2c = 0xffffffff;
    }
    uStack_44 = (uint)*(ushort *)(lVar4 + 0x1a);
    local_28 = 0;
    local_48 = (uint)((uVar1 >> 8 & 1) != 0);
    uVar3 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x30))
                      ((long *)*_DAT_008a43d8,*(undefined8 *)(lVar4 + 0x10),&local_48,&local_20,
                       param_2,param_1 + 0x58,*_DAT_008a4598);
    return uVar3;
  }
  if (*(long *)(lVar5 + 0x340) == 0) {
    return 0x2e;
  }
  uVar3 = (**(code **)(*(long *)*_DAT_008a43d8 + 0x40))
                    ((long *)*_DAT_008a43d8,*(long *)(lVar5 + 0x340),*(undefined4 *)(lVar5 + 0x348),
                     &local_20,param_1 + 0x58);
  return uVar3;
}



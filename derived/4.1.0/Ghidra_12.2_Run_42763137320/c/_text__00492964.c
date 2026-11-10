/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00492964; name: FUN_.text__00492964
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00492964(undefined4 param_1,undefined4 param_2,long param_3,long param_4,
                        undefined8 param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_18;
  
  local_70 = *(undefined8 *)(param_3 + 8);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xff;
  local_50 = 0xff;
  local_48 = 0;
  uVar1 = *(ushort *)(param_3 + 0x48);
  if ((uVar1 & 1) != 0) {
    FUN__text__004355b0(*(undefined4 *)(param_4 + 0x30),*_DAT_008a45f0,1,&local_70);
    uVar1 = *(ushort *)(param_3 + 0x48);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    FUN__text__004355b0(*(float *)(param_4 + 0x34) * 57.295776,*_DAT_008a45f0,4,&local_70);
    uVar1 = *(ushort *)(param_3 + 0x48);
  }
  if ((uVar1 >> 6 & 1) != 0) {
    FUN__text__004355b0(*(float *)(param_4 + 0x38) * 57.295776,*_DAT_008a45f0,7,&local_70);
    uVar1 = *(ushort *)(param_3 + 0x48);
  }
  uVar2 = (uint)uVar1;
  if ((uVar1 & 6) != 0) {
    local_18 = 0;
    FUN__text__00480b40(param_5,param_4,(long)&local_18 + 4,&local_18);
    uVar1 = *(ushort *)(param_3 + 0x48);
    if ((uVar1 >> 1 & 1) != 0) {
      FUN__text__004355b0(local_18._4_4_ * 57.295776,*_DAT_008a45f0,2,&local_70);
      uVar1 = *(ushort *)(param_3 + 0x48);
    }
    uVar2 = (uint)uVar1;
    if ((uVar1 >> 2 & 1) != 0) {
      FUN__text__004355b0((float)local_18 * 57.295776,*_DAT_008a45f0,3,&local_70);
      uVar2 = (uint)*(ushort *)(param_3 + 0x48);
    }
  }
  if ((uVar2 >> 4 & 1) == 0) {
    if ((uVar2 >> 5 & 1) == 0) goto LAB__text__00492ae8;
LAB__text__00492b2c:
    FUN__text__004355b0(*(undefined4 *)(param_4 + 0x48),*_DAT_008a45f0,6,&local_70);
    uVar2 = (uint)*(ushort *)(param_3 + 0x48);
    if ((*(ushort *)(param_3 + 0x48) >> 7 & 1) != 0) goto LAB__text__00492b50;
  }
  else {
    FUN__text__004355b0(*(undefined4 *)(param_4 + 0x4c),*_DAT_008a45f0,5,&local_70);
    uVar2 = (uint)*(ushort *)(param_3 + 0x48);
    if ((*(ushort *)(param_3 + 0x48) >> 5 & 1) != 0) goto LAB__text__00492b2c;
LAB__text__00492ae8:
    if ((uVar2 >> 7 & 1) != 0) {
LAB__text__00492b50:
      FUN__text__004355b0(param_1,*_DAT_008a45f0,8,&local_70);
      if ((*(ushort *)(param_3 + 0x48) >> 8 & 1) == 0) {
        return;
      }
      goto LAB__text__00492b74;
    }
  }
  if ((uVar2 >> 8 & 1) == 0) {
    return;
  }
LAB__text__00492b74:
  FUN__text__004355b0(param_2,*_DAT_008a45f0,9,&local_70);
  return;
}



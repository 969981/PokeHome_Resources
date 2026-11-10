/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0025d6b8; name: FUN_.text__0025d6b8
 */


uint FUN__text__0025d6b8(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_45 [13];
  long local_38;
  undefined4 local_14;
  
  uVar6 = *(undefined8 *)(param_1 + 0x640);
  local_14 = 0;
  iVar1 = *(int *)(param_1 + 0x6ec);
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  local_38 = *(long *)(param_1 + 0xff8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__0024efa0(uVar6,&local_38,&local_14,iVar1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar5 = *(long *)(param_1 + 0xff8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar3 = FUN__text__00325bc0();
  if (*(int *)(lVar3 + 0x2c) != 0) {
    lVar3 = FUN__text__00325bc0();
    local_14 = *(undefined4 *)(lVar3 + 0x2c);
    FUN__text__00307180(lVar5,auStack_45,0xd);
    iVar1 = FUN__text__00308390(lVar5);
    if (iVar1 == 1) {
      uVar4 = FUN__text__00307ba4(lVar5);
      if ((uVar4 & 1) == 0) {
        uVar2 = FUN__text__0016af40(local_14,auStack_45);
      }
      else {
        uVar2 = 0;
      }
      goto joined_r0x0025d7d0;
    }
  }
  uVar2 = 1;
joined_r0x0025d7d0:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar2 & 1;
}



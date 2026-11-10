/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ae5a0; name: FUN_.text__004ae5a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004ae5a0(long *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int local_2c;
  undefined8 local_28;
  
  uVar2 = (**(code **)(*(long *)param_1[8] + 0x30))();
  *(uint *)(param_1 + 6) = uVar2;
  if (uVar2 == 0) {
    return 2;
  }
  uVar1 = *(uint *)((long)param_1 + 0x24);
  lVar4 = param_1[5];
  if (uVar1 < uVar2) {
    if (lVar4 != 0) {
      FUN__text__00400fc0(0);
      uVar2 = *(uint *)(param_1 + 6);
    }
    if (uVar2 <= *(uint *)(_DAT_008a45b0 + 0x88)) {
      uVar2 = *(uint *)(_DAT_008a45b0 + 0x88);
    }
    *(uint *)((long)param_1 + 0x24) = uVar2;
    lVar4 = FUN__text__00400f90(0,uVar2 << 1,0x20);
    param_1[5] = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    uVar1 = *(uint *)((long)param_1 + 0x24);
  }
  *param_1 = lVar4;
  param_1[1] = lVar4 + (ulong)uVar1;
  if (param_2 == 0) {
    return 1;
  }
  local_28 = 0;
  uVar3 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],param_2,0,&local_28);
  if ((int)uVar3 == 1) {
    param_2 = param_2 - (int)local_28;
    uVar2 = FUN__text__004ae7a0(param_1,param_2,&local_2c);
    if (local_2c != param_2) {
      uVar2 = 2;
    }
    uVar3 = (ulong)uVar2;
  }
  return uVar3;
}



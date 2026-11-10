/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004dd04c; name: FUN_.text__004dd04c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__004dd04c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int local_34;
  undefined1 auStack_30 [13];
  undefined1 local_23;
  undefined8 local_8;
  
  param_1[0xc] = 0;
  (**(code **)(*(long *)param_1[0xb] + 0x28))((long *)param_1[0xb],auStack_30);
  local_23 = (undefined1)(int)*(float *)(param_1[3] + 0x318);
  (**(code **)(*(long *)param_1[0xb] + 0x30))((long *)param_1[0xb],auStack_30);
  local_8 = 0;
  local_34 = 0;
  uVar3 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                    ((long *)param_1[0xb],&local_8,&local_34,*_DAT_008a4598);
  if ((int)uVar3 == 0x2d || (int)uVar3 == 0x11) {
    *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xbf;
    if (local_34 == 0) {
      return 2;
    }
    *(int *)(param_1 + 0xd) = local_34;
    uVar2 = (**(code **)(*param_1 + 0x138))(param_1,local_8,0);
    uVar1 = 0x2d;
    if (uVar2 != 1) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ace68; name: FUN_.text__005ace68
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005ace68(long *param_1,long *param_2,ulong param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = _DAT_0089f690 + 0x10;
  uVar1 = tpidr_el0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar4 = 0;
  if (uVar1 != 0) {
    if (*(long *)(uVar1 + 0x98) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a5760 + 0x90;
  lVar3 = _DAT_008a5760 + 0xc0;
  *param_1 = _DAT_008a5760 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar2;
  param_1[0xb] = lVar3;
  param_1[0xc] = 0;
  FUN__text__005b25b4(param_1 + 0xd,param_2,0);
  lVar4 = _DAT_008a5768;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *param_1 = lVar4 + 0x10;
  param_1[9] = lVar4 + 0x90;
  param_1[0xb] = lVar4 + 0xc0;
  FUN__text__006ee670(param_1 + 0x2b);
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_58 = 0;
  FUN__text__006ebc14(&local_60);
  local_60 = CONCAT44(local_60._4_4_,param_4);
  lVar4 = FUN__text__006ee660(_DAT_008a0448,&local_60);
  param_3 = -lVar4 & param_3;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_3,lVar4);
  lVar3 = param_1[0x27];
  param_1[0x27] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)param_1[0x28] + 0x18))
              ((long *)param_1[0x28],lVar3,param_1[0x29],param_1[0x2a]);
    lVar2 = param_1[0x27];
  }
  param_1[0x28] = (long)param_2;
  param_1[0x29] = param_3;
  param_1[0x2a] = lVar4;
  local_60 = CONCAT44((int)param_3,(undefined4)local_60);
  local_58 = lVar2;
  FUN__text__006ee680(param_1 + 0x2b,_DAT_008a0448,&local_60);
  FUN__text__005b27c4(param_1 + 0xd,param_3,0);
  return;
}



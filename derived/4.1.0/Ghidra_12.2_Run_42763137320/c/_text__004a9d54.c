/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a9d54; name: FUN_.text__004a9d54
 */


undefined4
FUN__text__004a9d54(void *param_1,int param_2,void *param_3,undefined4 param_4,ulong param_5,
                   uint param_6,undefined2 param_7,long param_8)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong __n;
  undefined8 uVar7;
  undefined1 uStack_61;
  
  __n = (ulong)param_6;
  sVar2 = **(short **)(param_8 + 8);
  uVar6 = 0x40001;
  if (sVar2 != -1) {
    if (sVar2 != 0x3041) {
      if (sVar2 == 0x3040) {
        uVar6 = 0x130001;
        plVar5 = (long *)FUN__text__00425db0(&DAT__text__00130001);
      }
      else {
        uVar6 = 1;
        plVar5 = (long *)FUN__text__00425db0(1);
      }
      goto joined_r0x004a9de4;
    }
    uVar6 = 0x140001;
  }
  plVar5 = (long *)FUN__text__00425db0(uVar6);
joined_r0x004a9de4:
  if (plVar5 == (long *)0x0) {
    uVar4 = 0x34;
  }
  else {
    memcpy(param_1,param_3,__n);
    puVar1 = (undefined2 *)((long)param_1 + (param_5 & 0xffffffff));
    *puVar1 = 0xfffe;
    puVar1[6] = param_7;
    puVar1[7] = 0x10;
    if ((param_6 & 3) != 0) {
      uVar7 = *(undefined8 *)((long)param_1 + (__n - 8));
      uVar3 = 4 - (param_6 & 3);
      *(undefined4 *)((long)param_1 + (__n - 8)) = 0x4b4e554a;
      *(uint *)((long)param_1 + (__n - 4)) = uVar3;
      memset((void *)((long)param_1 + __n + 8),0,(ulong)uVar3);
      param_6 = param_6 + uVar3 + 8;
      __n = (ulong)param_6;
      *(undefined8 *)((long)param_1 + (__n - 8)) = uVar7;
    }
    FUN__text__00411c2c(&uStack_61);
    uVar4 = (**(code **)(*plVar5 + 0x10))
                      (plVar5,(long)param_1 + __n,param_2 - param_6,param_3,param_4,
                       (long)param_1 + __n + -4);
    FUN__text__00425e14(uVar6,plVar5);
    FUN__text__00411c70(&uStack_61);
  }
  return uVar4;
}



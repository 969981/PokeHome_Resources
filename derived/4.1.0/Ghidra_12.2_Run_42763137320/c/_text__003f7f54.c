/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f7f54; name: FUN_.text__003f7f54
 */


undefined8 *
FUN__text__003f7f54(long *param_1,long param_2,long param_3,uint param_4,long param_5,
                   undefined4 param_6,undefined4 param_7,long *param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long local_68;
  
  *param_8 = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0x3d));
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x50))(param_1);
  if (puVar1 != (undefined8 *)0x0) {
    if (*(long *)(param_3 + 0x10) == 0) {
      local_68 = param_3;
    }
    else {
      FUN__text__003ff2a0(param_1 + 0x55,param_3,&local_68);
      if (local_68 == 0) {
        lVar2 = puVar1[1];
        puVar1[1] = 0;
        if (lVar2 != 0) {
          FUN__text__003fe878(param_1 + 0x55);
        }
        FUN__text__00400fc0(7,puVar1);
        puVar1 = (undefined8 *)0x0;
        goto LAB__text__003f80e4;
      }
    }
    lVar2 = *(long *)(local_68 + 8);
    plVar3 = (long *)param_1[200];
    if (plVar3 != (long *)0x0) {
      lVar4 = *plVar3;
      if (lVar4 == 0) {
        param_1[199] = 0;
      }
      param_1[200] = lVar4;
      *plVar3 = 0;
      *(int *)(param_1 + 0xc6) = (int)param_1[0xc6] + -1;
    }
    plVar3[1] = param_5 + *(long *)(*(long *)(param_2 + 0x20) + 8) *
                          (ulong)*(uint *)(param_2 + 0x60);
    *(undefined4 *)(plVar3 + 2) = param_6;
    *(undefined4 *)((long)plVar3 + 0x14) = param_7;
    plVar3[8] = param_2;
    plVar3[5] = (long)plVar3;
    plVar3[6] = 0;
    plVar3[3] = lVar2 + (ulong)param_4;
    plVar3[4] = (long)&LAB__text__003ffabc;
    *(byte *)(plVar3 + 9) = *(byte *)(plVar3 + 9) & 0xfc;
    *param_8 = (long)plVar3;
    *(long **)(local_68 + 0x10) = plVar3;
    puVar1[1] = local_68;
    *(uint *)(puVar1 + 2) = param_4;
    *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) & 0xf8;
    lVar2 = *param_8;
    if (*(long *)(lVar2 + 0x38) == 0) {
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = *(long *)(lVar2 + 0x38);
      *(undefined8 **)(lVar2 + 0x38) = puVar1;
    }
    *puVar1 = 0;
    plVar3 = (long *)(param_2 + 0xb8);
    if (*(long *)(param_2 + 0xb8) != 0) {
      plVar3 = *(long **)(param_2 + 0xb0);
    }
    *plVar3 = (long)puVar1;
    *(undefined8 **)(param_2 + 0xb0) = puVar1;
    puVar1[4] = param_2;
  }
LAB__text__003f80e4:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x3d));
  return puVar1;
}



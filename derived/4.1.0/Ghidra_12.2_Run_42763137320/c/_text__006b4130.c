/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b4130; name: FUN_.text__006b4130
 */


void FUN__text__006b4130(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long *plVar4;
  
  if (((*(byte *)(param_1 + 0xb) ^ 0xff) & 0x81) != 0) {
    return;
  }
  if (((*(byte *)((long)param_1 + 0x5c) >> 4 & 1) != 0) && (*(char *)((long)param_1 + 0x5a) != '\0')
     ) {
    if ((*(byte *)((long)param_1 + 0x62) >> 1 & 1) != 0) {
      lVar1 = param_1[0x15] + 0xc;
      uVar2 = *(uint *)(param_1[0x15] + 0x10);
      FUN__text__006b69f4(*(undefined8 *)
                           (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar2 + 4 +
                                                             (ulong)*(byte *)(lVar1 + (ulong)(*(int 
                                                  *)(lVar1 + (ulong)uVar2 + 4) + uVar2) + 0xc) * 4)
                                           + uVar2) + 8),param_2,param_3);
      bVar3 = *(byte *)(param_1 + 0xb);
      goto joined_r0x006b4190;
    }
    (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_3);
  }
  bVar3 = *(byte *)(param_1 + 0xb);
joined_r0x006b4190:
  if (((bVar3 >> 1 & 1) == 0) || (*(char *)((long)param_1 + 0x5a) != '\0')) {
    for (plVar4 = (long *)param_1[5]; plVar4 != param_1 + 4; plVar4 = (long *)plVar4[1]) {
      (**(code **)(plVar4[-1] + 0xd8))(plVar4 + -1,param_2,param_3);
    }
  }
  return;
}



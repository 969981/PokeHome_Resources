/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b69f4; name: FUN_.text__006b69f4
 */


void FUN__text__006b69f4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_50;
  long lStack_48;
  undefined8 local_28;
  
  FUN__text__006b6c08();
  if (param_1[0xb] != 0) {
    FUN__text__006b6de4(param_1,param_2,param_3);
    if ((((param_1[0xb] != 0) && ((*(byte *)(param_1 + 0x45) >> 2 & 1) == 0)) &&
        ((*(byte *)(param_1[0xb] + 8) >> 5 & 1) != 0)) && (*(char *)(param_1 + 0x13) != '\0')) {
      FUN__text__006b7334(param_1,param_2,param_3);
    }
  }
  lVar5 = param_1[0xb];
  if (param_1[1] == 0) {
    if (lVar5 == 0) {
      return;
    }
    if ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0) {
      return;
    }
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    lVar5 = param_1[0xe];
    local_28 = *puVar4;
    iVar2 = *(int *)(param_1 + 0x1b);
  }
  else {
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 8) >> 4 & 1) != 0)) {
      return;
    }
    if ((((*(byte *)(param_1 + 0x45) >> 2 & 1) != 0) || ((*(byte *)(param_1[1] + 4) >> 1 & 1) == 0))
       || (*(char *)((long)param_1 + 0x54) == '\0')) {
      FUN__text__006b7d20(param_1,param_2,param_3);
      (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,param_3,param_2);
      lVar5 = param_1[7];
      iVar3 = *(int *)(param_1 + 8);
      plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                       (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
      lStack_48 = plVar1[1];
      local_50 = *plVar1 + (long)*(int *)(param_1 + 6);
      goto LAB__text__006b6bb0;
    }
    puVar4 = (undefined8 *)FUN__text__006d65d8(*(undefined8 *)(param_2 + 0xb8),0,0,1,1);
    lVar5 = param_1[9];
    local_28 = *puVar4;
    iVar2 = *(int *)(param_1 + 6);
  }
  FUN__text__006c1d00(param_2,param_3,param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  FUN__text__006ee15c(param_3,*(undefined4 *)((long)param_1 + 0x224),4,lVar5 + 8,&local_28);
  (**(code **)(*(long *)*param_1 + 0xf0))((long *)*param_1,param_3,param_2);
  lVar5 = param_1[0x43];
  iVar3 = *(int *)(param_1 + 0x44);
  plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                   (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
  lStack_48 = plVar1[1];
  local_50 = *plVar1 + (long)iVar2;
LAB__text__006b6bb0:
  lVar6 = *(long *)(param_2 + 0xb8);
  FUN__text__006ee1d4(param_3,*(undefined4 *)(*(long *)(lVar5 + 0x18) + (long)iVar3 * 4),0,&local_50
                      ,0x230);
  FUN__text__006eca30(param_3,3,1,lVar6 + 0x248,6,0);
  return;
}



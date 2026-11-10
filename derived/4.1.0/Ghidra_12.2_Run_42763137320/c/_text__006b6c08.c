/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b6c08; name: FUN_.text__006b6c08
 */


void FUN__text__006b6c08(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long lStack_58;
  
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0) {
    if (((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) && (*(char *)(param_1 + 0x54) == '\0'))
    goto LAB__text__006b6c74;
    if ((*(byte *)(lVar2 + 4) >> 1 & 1) != 0) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x58);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x58);
  }
  if (lVar2 == 0) {
    return;
  }
LAB__text__006b6c74:
  local_70 = 0;
  uStack_68 = 0;
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  lVar3 = param_2[0x1f];
  lVar2 = *(long *)(param_1 + 0x48) + 0x40;
  lVar4 = param_2[0x2a];
  FUN__text__006eda8c(param_3,lVar2,&local_70,0);
  param_2[0x1f] = lVar2;
  param_2[0x2a] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  FUN__text__006ed17c(param_3,*(long *)(param_1 + 0x48) + 0x88);
  FUN__text__006b7d20(param_1,param_2,param_3);
  plVar1 = (long *)(*(long *)(param_2[0x19] + 0x10) + (long)*(int *)(param_2[0x19] + 0x30) * 0x10);
  lStack_58 = plVar1[1];
  local_60 = *plVar1 + (long)*(int *)(param_1 + 0x50);
  lVar2 = param_2[0x17];
  FUN__text__006ee1d4(param_3,*(undefined4 *)
                               (*(long *)(*(long *)(param_1 + 0x38) + 0x18) +
                               (long)*(int *)(param_1 + 0x40) * 4),0,&local_60,0x230);
  FUN__text__006eca30(param_3,3,1,lVar2 + 0x248,6,0);
  (**(code **)(*param_2 + 0x20))(param_2,param_3);
  FUN__text__006eddd4(param_3,0x80);
  FUN__text__006eddfc(param_3,0x20);
  param_2[0x1f] = lVar3;
  param_2[0x2a] = lVar4;
  FUN__text__0069deb0(param_2,param_3);
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  if (((*(long *)(param_1 + 8) != 0) && ((*(byte *)(param_1 + 0x228) >> 2 & 1) == 0)) &&
     ((*(byte *)(*(long *)(param_1 + 8) + 4) >> 1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x54) = 1;
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001aa8cc; name: FUN_.text__001aa8cc
 */


void FUN__text__001aa8cc(long param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (**(int **)(param_1 + 0x38) != 1) {
    return;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN__text__00196200(uVar4,*(undefined4 *)(param_2 + 4));
  lVar2 = FUN__text__00195358(uVar4,param_2);
  local_50 = *(undefined8 *)(lVar2 + 8);
  uStack_48 = *(undefined8 *)(lVar2 + 0x10);
  if (*param_2 == '\0') {
    lVar2 = FUN__text__00192680(uVar1,&local_50);
  }
  else {
    lVar2 = FUN__text__0019264c(uVar1,param_2 + 0xc);
  }
  uVar1 = FUN__text__00196200(uVar4,*(undefined4 *)(param_3 + 4));
  lVar3 = FUN__text__00195358(uVar4,param_3);
  local_60 = *(undefined8 *)(lVar3 + 8);
  uStack_58 = *(undefined8 *)(lVar3 + 0x10);
  if (*param_3 == '\0') {
    lVar3 = FUN__text__00192680(uVar1,&local_60);
  }
  else {
    lVar3 = FUN__text__0019264c(uVar1,param_3 + 0xc);
  }
  if ((lVar2 == 0) || (lVar3 == 0)) {
    if (lVar2 != 0) {
      if (*(int *)(param_2 + 4) == *(int *)(param_3 + 4)) {
        *(undefined8 *)(lVar2 + 8) = local_60;
        *(undefined8 *)(lVar2 + 0x10) = uStack_58;
        return;
      }
      *(undefined4 *)(lVar2 + 0x18) = 0;
      return;
    }
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(param_3 + 4) != *(int *)(param_2 + 4)) {
      *(undefined4 *)(lVar3 + 0x18) = 0;
      return;
    }
  }
  else {
    *(undefined8 *)(lVar2 + 8) = local_60;
    *(undefined8 *)(lVar2 + 0x10) = uStack_58;
  }
  *(undefined8 *)(lVar3 + 8) = local_50;
  *(undefined8 *)(lVar3 + 0x10) = uStack_48;
  return;
}



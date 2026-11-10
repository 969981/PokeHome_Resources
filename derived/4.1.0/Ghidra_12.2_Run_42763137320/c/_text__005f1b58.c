/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f1b58; name: FUN_.text__005f1b58
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f1b58(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_240 [512];
  
  lVar2 = *(long *)(param_1 + 0x8e0);
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  puVar1 = _DAT_008a02b8;
  uVar4 = *_DAT_008a02b8;
  uVar3 = FUN__text__005d5504(param_1 + 0x220);
  FUN__text__005f1604(uVar4,uVar3);
  uVar4 = *puVar1;
  FUN__text__005a7908(auStack_240,*(undefined8 *)(param_1 + 0x130));
  uVar3 = FUN__text__005d5504(auStack_240);
  FUN__text__005f1614(uVar4,uVar3);
  FUN__text__0014821c(auStack_240);
  uVar4 = *puVar1;
  uVar3 = (**(code **)(**(long **)(param_1 + 0xb0) + 0x38))(*(long **)(param_1 + 0xb0),0,0);
  FUN__text__005f162c(uVar4,uVar3);
  if (((*(long *)(param_1 + 0x468) != 0) || (*(long *)(param_1 + 0x578) != 0)) ||
     (*(long *)(param_1 + 0x580) != 0)) {
    uVar4 = *puVar1;
    uVar3 = FUN__text__005d5504(param_1 + 0x420);
    FUN__text__005f161c(uVar4,uVar3);
  }
  if (((*(long *)(param_1 + 0x678) != 0) || (*(long *)(param_1 + 0x788) != 0)) ||
     (*(long *)(param_1 + 0x790) != 0)) {
    uVar4 = *puVar1;
    uVar3 = FUN__text__005d5504(param_1 + 0x630);
    FUN__text__005f1624(uVar4,uVar3);
  }
  if (*(long *)(param_1 + 0x8e0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x8e0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x8e0) = 0;
  }
  FUN__text__0011bfb0(param_1 + 0x840);
  FUN__text__0014821c(param_1 + 0x630);
  FUN__text__0014821c(param_1 + 0x420);
  FUN__text__0014821c(param_1 + 0x220);
  if (*(long *)(param_1 + 0x210) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x210) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  FUN__text__0014eae0(param_1);
  return;
}



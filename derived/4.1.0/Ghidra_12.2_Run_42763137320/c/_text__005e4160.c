/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e4160; name: FUN_.text__005e4160
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005e4160(long param_1,undefined8 *param_2)

{
  int iVar1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_38;
  undefined1 uStack_11;
  
  if (*(long *)(param_1 + 8) == 0) {
    local_38 = param_1;
    lVar5 = FUN__text__005e4f08(&uStack_11,*(undefined8 *)(*_DAT_0089f7d0 + 0x28),&local_38);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x18))();
    }
    *(long *)(param_1 + 8) = lVar5;
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    iVar1 = *(int *)(param_1 + 0x150);
  }
  else {
    *(undefined1 *)(param_1 + 0x158) = 0;
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + 1;
    iVar1 = *(int *)(param_1 + 0x150);
  }
  if (iVar1 != 0) {
    uVar3 = 0;
    do {
      uVar4 = *param_2;
      lVar5 = *(long *)(param_1 + 0x10 + uVar3 * 8);
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar5 + 0x3d8) = *(undefined4 *)(param_1 + 0x154);
      *(undefined8 *)(lVar5 + 0x3d0) = uVar4;
    } while (uVar3 < *(uint *)(param_1 + 0x150));
  }
  FUN__text__005e42b0(param_1);
  FUN__text__005e3e10(param_1);
  FUN__text__005e5810(*(undefined8 *)(param_1 + 0x10),param_1);
  if (*(char *)(param_1 + 0x159) != '\0') {
    cVar2 = *(char *)(param_1 + 0x158);
    while (cVar2 == '\0') {
      FUN__text__005e5b30(*(undefined8 *)(param_1 + 0x10));
      cVar2 = *(char *)(param_1 + 0x158);
    }
  }
  FUN__text__005e44b0(param_1 + 0x50);
  FUN__text__005e42b0(param_1);
  FUN__text__005e3e10(param_1);
  return;
}



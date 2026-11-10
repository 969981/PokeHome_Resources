/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005715d0; name: FUN_.text__005715d0
 */


undefined4
FUN__text__005715d0(long param_1,long *param_2,long *param_3,long param_4,undefined4 *param_5)

{
  uint uVar1;
  size_t sVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  *(long **)(param_1 + 8) = param_2;
  *(long *)(param_1 + 0x10) = param_4;
  *(long **)(param_1 + 0x18) = param_3;
  sVar2 = strlen((char *)(param_4 + 0x20));
  if (0x102 < sVar2) {
    return 0x1f;
  }
  *(undefined4 *)(param_1 + 0x40) = *param_5;
  uVar6 = param_5[1];
  *(uint *)(param_1 + 0x3c) = uVar6;
  if ((*(char *)(param_4 + 0x124) == '\0') || (uVar1 = param_5[1], (uVar1 & 0xf00) != 0x100))
  goto LAB__text__00571674;
  if ((uVar1 & 0x63b000) != 0x8000) {
    uVar1 = uVar1 & 0x637000;
    if (uVar1 < 0x607000) {
      if (((uVar1 != 0x3000) && (uVar1 != 0x7000)) && (uVar1 != 0x603000)) goto LAB__text__00571674;
    }
    else if (((uVar1 != 0x607000) && (uVar1 != 0x637000)) && (uVar1 != 0x633000))
    goto LAB__text__00571674;
  }
  uVar6 = 0x3102;
  *(undefined4 *)(param_1 + 0x3c) = 0x3102;
LAB__text__00571674:
  *(uint *)(param_1 + 0x38) = uVar6 & 0xff;
  lVar3 = FUN__text__005738e8(param_2);
  *(long *)(param_1 + 0x20) = lVar3;
  if (lVar3 == 0) {
    return 2;
  }
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x20) == '\0') {
    return 1;
  }
  uVar6 = *(uint *)(param_1 + 0x38);
  plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  uVar5 = (**(code **)(*plVar4 + 0x18))();
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)uVar6 * (uVar5 & 0xffff) * 2,0x71117c,0x8c);
  *(long *)(param_1 + 0x30) = lVar3;
  uVar7 = 1;
  if (lVar3 == 0) {
    uVar7 = 2;
  }
  return uVar7;
}



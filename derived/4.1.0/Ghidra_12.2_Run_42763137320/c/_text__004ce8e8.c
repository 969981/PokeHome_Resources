/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ce8e8; name: FUN_.text__004ce8e8
 */


undefined8 FUN__text__004ce8e8(undefined8 *param_1,ulong param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  param_2 = param_2 & 0xffffffff;
  if (param_1[1] == 0) {
    if ((param_3 & 1) == 0) {
      return 1;
    }
    lVar2 = FUN__text__00400f80(2,0x28);
    if (lVar2 == 0) {
      param_1[1] = 0;
      return 0x34;
    }
    FUN__text__004ce514();
    param_1[1] = lVar2;
    *(byte *)(lVar2 + param_2 * 8 + 8) = param_3 & 1;
    lVar2 = param_1[1];
    piVar3 = (int *)(lVar2 + param_2 * 8 + 4);
    iVar1 = *piVar3;
  }
  else {
    *(byte *)(param_1[1] + param_2 * 8 + 8) = param_3 & 1;
    if ((param_3 & 1) == 0) {
      return 1;
    }
    lVar2 = param_1[1];
    piVar3 = (int *)(lVar2 + param_2 * 8 + 4);
    iVar1 = *piVar3;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(lVar2 + param_2 * 8 + 9) = 0;
    *piVar3 = 0;
    (**(code **)(*(long *)*param_1 + 0x18))();
    (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,param_2);
  }
  return 1;
}



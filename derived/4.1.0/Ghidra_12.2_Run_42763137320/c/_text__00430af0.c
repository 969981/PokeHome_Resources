/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00430af0; name: FUN_.text__00430af0
 */


undefined8 FUN__text__00430af0(undefined8 *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  long lVar5;
  undefined8 *local_18;
  
  piVar3 = (int *)*param_1;
  uVar1 = *(uint *)(param_1 + 1);
  piVar4 = piVar3;
  if (uVar1 == 0) {
LAB__text__00430b40:
    if (piVar4 != piVar3 + (ulong)uVar1 * 4) {
      return 1;
    }
  }
  else {
    lVar5 = (ulong)uVar1 << 4;
    do {
      if (*piVar4 == param_2) goto LAB__text__00430b40;
      piVar4 = piVar4 + 4;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  local_18 = (undefined8 *)FUN__text__00400f80(2,0x20);
  if (local_18 == (undefined8 *)0x0) {
    return 2;
  }
  local_18[2] = 0;
  local_18[3] = 0;
  *local_18 = 0x2ca33bdb00000000;
  local_18[1] = 0;
  lVar5 = FUN__text__00430c10(param_1,param_2,&local_18);
  puVar2 = local_18;
  if (lVar5 != 0) {
    return 1;
  }
  if (local_18[2] == 0) {
    local_18[1] = 0;
  }
  else {
    *(undefined4 *)(local_18 + 3) = 0;
    FUN__text__00400fc0(0);
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if (local_18 == (undefined8 *)0x0) {
      return 2;
    }
  }
  FUN__text__00400fc0(2,local_18);
  return 2;
}



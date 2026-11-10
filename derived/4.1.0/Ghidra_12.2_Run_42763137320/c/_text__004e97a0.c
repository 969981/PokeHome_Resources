/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e97a0; name: FUN_.text__004e97a0
 */


void FUN__text__004e97a0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + 1;
    lVar2 = param_1[3];
  }
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 4;
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xf8;
  uVar1 = 0;
  if (lVar2 != 0) {
    *(undefined8 **)(lVar2 + 0x80) = param_1;
    uVar1 = *(undefined4 *)(*(long *)(param_1[3] + 0x78) + 0x20);
  }
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}



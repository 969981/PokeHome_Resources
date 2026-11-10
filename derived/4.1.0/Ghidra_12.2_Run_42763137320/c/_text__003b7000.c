/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b7000; name: FUN_.text__003b7000
 */


void FUN__text__003b7000(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  
  uVar3 = *param_2;
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  iVar4 = (int)((ulong)uVar3 >> 0x20);
  iVar1 = iVar4;
  iVar2 = (int)uVar3;
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = (int)uVar3;
    iVar2 = iVar4;
  }
  iVar4 = 0;
  if (iVar2 != 0) {
    iVar4 = param_3 / iVar2;
  }
  iVar1 = iVar4 - iVar1;
  if (param_3 != iVar4 * iVar2) {
    iVar1 = iVar1 + 1;
  }
  fVar5 = 0.0;
  if (0.0 <= (float)iVar1) {
    fVar5 = (float)iVar1;
  }
  *(int *)(param_1 + 8) = param_3;
  *(int *)(param_1 + 0xc) = (int)fVar5;
  return;
}



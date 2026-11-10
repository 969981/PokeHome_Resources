/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005011f0; name: FUN_.text__005011f0
 */


void FUN__text__005011f0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
  FUN__text__004e7a7c(auStack_30);
  iVar1 = FUN__text__005013f8(param_2,auStack_30);
  if (iVar1 == 1) {
    FUN__text__004e2cb8(auStack_50);
    FUN__text__004e2e80(auStack_50,0);
    uVar2 = FUN__text__004e7ad8(auStack_30);
    uVar3 = FUN__text__004e2de0(auStack_50,uVar2);
    if (((uVar3 & 1) != 0) && (iVar1 = FUN__text__005013f8(param_2,auStack_50), iVar1 == 1)) {
      uVar2 = FUN__text__004e2e48(auStack_50);
      uVar4 = FUN__text__004e2e60(auStack_50);
      *param_1 = uVar4;
      *(undefined4 *)(param_1 + 1) = uVar2;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
    }
    FUN__text__004e2cd8(auStack_50);
  }
  FUN__text__004e7a94(auStack_30);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00557820; name: FUN_.text__00557820
 */


void FUN__text__00557820(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                        undefined4 *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  
  *(undefined8 *)(param_1 + 8) = param_4;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x60) = (uint)*(byte *)(param_5 + 1);
  *(undefined4 *)(param_1 + 100) = *param_5;
  FUN__text__005576dc(param_4,param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x38);
  plVar4 = (long *)(**(code **)(*param_3 + 0x10))(param_3);
  iVar3 = (**(code **)(*plVar4 + 0xe0))();
  uVar1 = iVar3 * 0x343fd + 0x269ec3;
  *(undefined4 *)(param_1 + 300) = 0;
  uVar2 = uVar1 * 0x343fd + 0x269ec3;
  *(uint *)(param_1 + 0x130) = uVar2;
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x38);
  *(float *)(param_1 + 0x68) =
       *(float *)(param_1 + 0x20) * 4.656613e-10 * (float)uVar1 - *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x6c) =
       *(float *)(param_1 + 0x28) * 4.656613e-10 * (float)uVar2 - *(float *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x34) == '\0') {
    FUN__text__005557f0(param_1 + 0xd0,param_2,*(undefined1 *)(param_5 + 1),*param_5,
                        *(undefined4 *)(param_1 + 0x18),0);
    *(undefined2 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x128) = 0;
    return;
  }
  FUN__text__00558190(param_1 + 0x70,param_2);
  *(undefined2 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce6fc; name: FUN_.text__003ce6fc
 */


void FUN__text__003ce6fc(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  FUN__text__003c4868();
  uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,5);
  uVar2 = FUN__text__003e9e24(param_1[0x18],uVar1);
  if (((uVar2 & 1) != 0) && (uVar2 = FUN__text__003e9fb0(param_1[0x18],uVar1), (uVar2 & 1) != 0)) {
    FUN__text__003e9d8c(param_1[0x18],uVar1);
    *(byte *)(param_1[0x71] + 0x58) = *(byte *)(param_1[0x71] + 0x58) & 0xfe;
  }
  if ((*(char *)((long)param_1 + 900) != '\0') &&
     (uVar2 = (**(code **)(*param_1 + 0xd8))(param_1), (uVar2 & 1) == 0)) {
    *(undefined1 *)((long)param_1 + 900) = 0;
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,1);
    FUN__text__003c4b88(0,param_1,uVar1,1,1);
    if (*(char *)((long)param_1 + 0xc9) != '\0') {
      uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,7);
      FUN__text__003c4b88(0,param_1,uVar1,1,1);
      return;
    }
  }
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5c70; name: FUN_.text__002d5c70
 */


void FUN__text__002d5c70(undefined8 param_1,undefined2 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long local_38;
  
  FUN__text__002f0c20();
  FUN__text__002d63f8(&local_38);
  puVar4 = (undefined8 *)FUN__text__002d636c(local_38 + 0x60,param_2);
  uVar2 = *puVar4;
  uVar3 = puVar4[1];
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar1 = 0x10;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  FUN__text__002d63f8(&local_38);
  FUN__text__002d63a4(local_38 + 0x60,param_2,uVar2,uVar3 & 0xffffffffffffffef | uVar1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



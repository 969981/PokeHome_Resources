/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e3a90; name: FUN_.text__002e3a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002e3a90(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  long local_18;
  
  puVar1 = _DAT_008a2580;
  uVar2 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  local_18 = param_1 + 0x60;
  local_58 = 0x220;
  FUN__text__002e59f0(uVar2,_DAT_008a2608,&local_18,&local_58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  local_18 = param_1 + 0x4a0;
  local_58 = 0x66;
  FUN__text__002e59f0(uVar2,_DAT_008a2610,&local_18,&local_58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  local_18 = param_1 + 0x56c;
  local_58 = 0x24;
  FUN__text__002e59f0(uVar2,_DAT_008a2618,&local_18,&local_58);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  FUN__text__002e63a0(uVar2,_DAT_008a2620,param_1 + 0x5b4);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  FUN__text__002e63a0(uVar2,_DAT_008a2628,param_1 + 0x5b5);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  FUN__text__002e63a0(uVar2,_DAT_008a2630,param_1 + 0x5b6);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  local_18 = 0x20;
  FUN__text__002e6b70(uVar2,_DAT_008a2638,param_1 + 0x5b7,&local_18);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  FUN__text__002e7520(uVar2,_DAT_008a2640,param_1 + 0x5d8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar2 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  uVar2 = FUN__text__002f95a0(uVar2,auStack_50);
  FUN__text__002e7520(uVar2,_DAT_008a2648,param_1 + 0x5da);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



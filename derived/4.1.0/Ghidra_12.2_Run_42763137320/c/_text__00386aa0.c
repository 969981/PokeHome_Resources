/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00386aa0; name: FUN_.text__00386aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00386aa0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_60;
  long local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  puVar1 = _DAT_0089f518;
  uVar7 = *_DAT_0089f518;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  local_58 = param_1 + 0x60;
  local_60 = 0x231;
  cVar2 = FUN__text__00387d70(lVar4,_DAT_008a32c0,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32c0);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  local_58 = param_1 + 0x4c2;
  local_60 = 0x42;
  cVar2 = FUN__text__00387d70(lVar4,_DAT_008a32c8,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32c8);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  local_58 = param_1 + 0x546;
  local_60 = 0x24;
  cVar2 = FUN__text__00387d70(lVar4,_DAT_008a32d0,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32d0);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar6 = FUN__text__00388270(lVar4,_DAT_008a32d8);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32d8);
  }
  *(char *)(param_1 + 0x58e) = (char)(uVar6 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar6 = FUN__text__00388270(lVar4,_DAT_008a32e0);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32e0);
  }
  *(char *)(param_1 + 0x58f) = (char)(uVar6 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar6 = FUN__text__00388270(lVar4,_DAT_008a32e8);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32e8);
  }
  *(char *)(param_1 + 0x590) = (char)(uVar6 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar3 = FUN__text__00388580(lVar4,_DAT_008a32f0);
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32f0);
  }
  *(bool *)(param_1 + 0x591) = 0xff < uVar3;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  local_58 = 0x21;
  cVar2 = FUN__text__003887a0(lVar4,_DAT_008a32f8,param_1 + 0x592,&local_58);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a32f8);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar6 = FUN__text__00388ca0(lVar4,_DAT_008a3300);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3300);
  }
  *(short *)(param_1 + 0x5b2) = (short)(uVar6 >> 0x10);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar7 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a3150);
  lVar4 = FUN__text__0039b7d0(uVar7,auStack_50);
  uVar6 = FUN__text__00388ca0(lVar4,_DAT_008a3308);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3308);
  }
  *(short *)(param_1 + 0x5b4) = (short)(uVar6 >> 0x10);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



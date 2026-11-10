/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002e3d70; name: FUN_.text__002e3d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002e3d70(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  long local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  puVar1 = _DAT_008a2580;
  uVar6 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  local_58 = param_1 + 0x60;
  local_60 = 0x220;
  cVar2 = FUN__text__002e4780(lVar3,_DAT_008a2608,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2608);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  local_58 = param_1 + 0x4a0;
  local_60 = 0x66;
  cVar2 = FUN__text__002e4780(lVar3,_DAT_008a2610,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2610);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  local_58 = param_1 + 0x56c;
  local_60 = 0x24;
  cVar2 = FUN__text__002e4780(lVar3,_DAT_008a2618,&local_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2618);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  uVar5 = FUN__text__002e4d10(lVar3,_DAT_008a2620);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2620);
  }
  *(char *)(param_1 + 0x5b4) = (char)(uVar5 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  uVar5 = FUN__text__002e4d10(lVar3,_DAT_008a2628);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2628);
  }
  *(char *)(param_1 + 0x5b5) = (char)(uVar5 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  uVar5 = FUN__text__002e4d10(lVar3,_DAT_008a2630);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2630);
  }
  *(char *)(param_1 + 0x5b6) = (char)(uVar5 >> 8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  local_58 = 0x20;
  cVar2 = FUN__text__002e50c0(lVar3,_DAT_008a2638,param_1 + 0x5b7,&local_58);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2638);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  uVar5 = FUN__text__002e5650(lVar3,_DAT_008a2640);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2640);
  }
  *(short *)(param_1 + 0x5d8) = (short)(uVar5 >> 0x10);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar6 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar6,auStack_50);
  uVar5 = FUN__text__002e5650(lVar3,_DAT_008a2648);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,_DAT_008a2648);
  }
  *(short *)(param_1 + 0x5da) = (short)(uVar5 >> 0x10);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



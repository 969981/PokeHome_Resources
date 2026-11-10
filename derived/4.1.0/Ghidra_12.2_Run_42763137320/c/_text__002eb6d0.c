/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002eb6d0; name: FUN_.text__002eb6d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002eb6d0(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 local_60;
  long lStack_58;
  undefined1 auStack_50 [24];
  long local_38;
  undefined4 local_14;
  
  puVar1 = _DAT_008a2580;
  uVar5 = *_DAT_008a2580;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,auStack_50);
  local_14 = 0xedaff794;
  lStack_58 = param_1 + 0x68;
  local_60 = 0xc;
  cVar2 = FUN__text__002ebc10(lVar3,&local_14,&lStack_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar5 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,auStack_50);
  local_14 = 0x1522c79c;
  lStack_58 = param_1 + 0x74;
  local_60 = 8;
  cVar2 = FUN__text__002ebe80(lVar3,&local_14,&lStack_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar5 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,auStack_50);
  local_14 = 0xc7409c89;
  lStack_58 = param_1 + 0x7c;
  local_60 = 4;
  cVar2 = FUN__text__002ec0f0(lVar3,&local_14,&lStack_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  uVar5 = *puVar1;
  FUN__text__005e927c(auStack_50,_DAT_008a2688);
  lVar3 = FUN__text__002f95a0(uVar5,auStack_50);
  local_14 = 0x19fc5b7b;
  lStack_58 = param_1 + 0x80;
  local_60 = 4;
  cVar2 = FUN__text__002ec360(lVar3,&local_14,&lStack_58,&local_60);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_14);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}



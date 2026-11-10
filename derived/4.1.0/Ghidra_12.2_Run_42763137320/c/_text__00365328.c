/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00365328; name: FUN_.text__00365328
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00365328(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  void *local_48;
  undefined4 local_24;
  
  puVar1 = _DAT_0089f448;
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(*_DAT_0089f448,&local_48);
  local_24 = 0x1b882b09;
  local_50 = 0x21c;
  local_48 = (void *)(param_1 + 0x60);
  cVar2 = FUN__text__003659f0(lVar3,&local_24,&local_48,&local_50);
  if ((cVar2 == '\0') && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_24);
  }
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(*puVar1,&local_48);
  local_48 = (void *)CONCAT44(local_48._4_4_,0x3f8120ba);
  uVar5 = FUN__text__0035e520(lVar3,&local_48);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
  }
  uVar6 = *puVar1;
  *(short *)(param_1 + 0x498) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(uVar6,&local_48);
  local_48 = (void *)CONCAT44(local_48._4_4_,0x9ec079da);
  uVar5 = FUN__text__0035e520(lVar3,&local_48);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
  }
  uVar6 = *puVar1;
  *(short *)(param_1 + 0x49a) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(uVar6,&local_48);
  local_48 = (void *)CONCAT44(local_48._4_4_,0xe2798dde);
  uVar5 = FUN__text__0035dd10(lVar3,&local_48);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
  }
  uVar6 = *puVar1;
  *(char *)(param_1 + 0x49c) = (char)(uVar5 >> 8);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(uVar6,&local_48);
  local_48 = (void *)CONCAT44(local_48._4_4_,0x6c99f9a0);
  uVar5 = FUN__text__0035e520(lVar3,&local_48);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
  }
  uVar6 = *puVar1;
  *(short *)(param_1 + 0x49e) = (short)(uVar5 >> 0x10);
  local_48 = (void *)((ulong)local_48 & 0xffffffff00000000);
  lVar3 = FUN__text__00371260(uVar6,&local_48);
  local_48 = (void *)CONCAT44(local_48._4_4_,0xc7652f1c);
  uVar5 = FUN__text__00365bd0(lVar3,&local_48);
  if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(lVar3 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,&local_48);
  }
  *(int *)(param_1 + 0x4a0) = (int)(uVar5 >> 0x20);
  memcpy((void *)(param_1 + 0x27c),(void *)(param_1 + 0x60),0x21c);
  return;
}



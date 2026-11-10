/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100750; name: nninitStartup
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void nninitStartup(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long local_78;
  long local_70;
  ulong local_28;
  
  nn::os::QueryMemoryInfo((MemoryInfo *)&local_78);
  uVar5 = local_78 - local_70;
  nn::os::SetMemoryHeapSize(uVar5 & 0xffffffffffe00000);
  uVar4 = 0xbfe00000U - local_70 & 0xffffffffffe00000;
  nn::os::AllocateMemoryBlock(&local_28,uVar4);
  plVar3 = _DAT_0089f3a8;
  FUN__text__005f6b94(_DAT_0089f3a8,local_28,uVar4,0);
  lVar2 = _DAT_0089f3b0;
  *(undefined1 *)(plVar3 + 0x15) = 0;
  lVar1 = lVar2 + 0x10;
  lVar2 = lVar2 + 0xe8;
  *plVar3 = lVar1;
  plVar3[1] = lVar2;
  FUN__text__005f5220(plVar3);
  uVar4 = uVar5 - uVar4 & 0xffffffffffe00000;
  nn::os::AllocateMemoryBlock(&local_28,uVar4);
  plVar3 = _DAT_0089f3b8;
  FUN__text__005f6b94(_DAT_0089f3b8,local_28,uVar4,0);
  *plVar3 = lVar1;
  plVar3[1] = lVar2;
  *(undefined1 *)(plVar3 + 0x15) = 0;
  FUN__text__005f5270(plVar3);
  return;
}



/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e42d0; name: FUN_.text__004e42d0
 */


void FUN__text__004e42d0(long param_1,void *param_2,uint param_3,undefined1 param_4,
                        undefined4 param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  void *__dest;
  
  __dest = (void *)(*(long *)(param_1 + 0x18) + (ulong)*(ushort *)(param_1 + 0x20) * 0x5f0);
  memcpy(__dest,param_2,(ulong)param_3);
  *(uint *)((long)__dest + 0x5e4) = param_3;
  *(undefined4 *)((long)__dest + 0x5e8) = param_5;
  *(undefined1 *)((long)__dest + 0x5ec) = param_4;
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar1 = *(ushort *)(param_1 + 0x20) + 1;
  sVar6 = 0;
  if (uVar3 != 0) {
    sVar6 = (short)(uVar1 / uVar3);
  }
  *(short *)(param_1 + 0x20) = (short)uVar1 - sVar6 * (short)uVar3;
  piVar2 = (int *)(param_1 + 0x24);
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = *piVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  return;
}



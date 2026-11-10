/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444060; name: FUN_.text__00444060
 */


void FUN__text__00444060(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  if (0 < *(int *)(param_1 + 0xbc)) {
    FUN__text__0043ef2c(*(undefined8 *)(param_1 + 0x68),param_1);
  }
  FUN__text__00444150(param_1);
  while( true ) {
    uVar3 = *(uint *)(param_1 + 0x88);
    if (uVar3 == 0) break;
    lVar6 = *(long *)(*(long *)(param_1 + 0x80) + (ulong)uVar3 * 8 + -8);
    *(uint *)(param_1 + 0x88) = uVar3 - 1;
    piVar1 = (int *)(lVar6 + 0x24);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(long *)(param_1 + 0xa0) != 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    FUN__text__00445c54();
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN__text__00433a20(param_1);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    FUN__text__00400fc0(0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc0) = 4;
  return;
}


